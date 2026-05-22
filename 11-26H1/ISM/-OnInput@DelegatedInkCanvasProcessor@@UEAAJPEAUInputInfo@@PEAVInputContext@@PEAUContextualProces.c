/*
 * XREFs of ?OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800AAF30
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$?8VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@0@$$T@Z @ 0x1800AAC30 (--$-8VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VPenHapticDevice@@Ue.c)
 *     ??$EnqueueItem@USuperWetInkBallpointPenPoint@@@CSharedCircularQueueProducer@@QEAAXAEBUSuperWetInkBallpointPenPoint@@@Z @ 0x1800AAC40 (--$EnqueueItem@USuperWetInkBallpointPenPoint@@@CSharedCircularQueueProducer@@QEAAXAEBUSuperWetIn.c)
 *     ??$emplace_back@USuperWetInkBallpointPenPoint@@@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@QEAAAEAUSuperWetInkBallpointPenPoint@@$$QEAU2@@Z @ 0x1800AAE4C (--$emplace_back@USuperWetInkBallpointPenPoint@@@-$vector@USuperWetInkBallpointPenPoint@@V-$alloc.c)
 *     ?SuperWetPointFromPointerInfo@DelegatedInkCanvasProcessor@@AEBA?AUSuperWetInkBallpointPenPoint@@AEBUtagPOINTER_INFO@@@Z @ 0x1800AB078 (-SuperWetPointFromPointerInfo@DelegatedInkCanvasProcessor@@AEBA-AUSuperWetInkBallpointPenPoint@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DelegatedInkCanvasProcessor::OnInput(
        gsl::details **this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v6; // rax
  gsl::details *v7; // rax
  char *i; // rbx
  char *v9; // rdi
  __int128 v11; // [rsp+20h] [rbp-88h] BYREF
  __int64 v12; // [rsp+30h] [rbp-78h]
  char v13[80]; // [rsp+38h] [rbp-70h] BYREF

  *((_DWORD *)a4 + 2) = 0;
  if ( *((_DWORD *)a2 + 79) )
  {
    v11 = 0LL;
    v12 = 0LL;
    v6 = DelegatedInkCanvasProcessor::SuperWetPointFromPointerInfo(this, v13, (char *)a2 + 320);
    std::vector<SuperWetInkBallpointPenPoint>::emplace_back<SuperWetInkBallpointPenPoint>(&v11, v6);
    *((_BYTE *)this + 16) = 0;
    std::_Mutex_base::lock((std::_Mutex_base *)&DelegatedInkCanvasProcessor::s_contextLock);
    v7 = this[3];
    if ( v7 == DelegatedInkCanvasProcessor::s_inkCanvasContext
      && v7
      && !wil::operator==<PenHapticDevice,wil::err_exception_policy>(this + 4) )
    {
      v9 = (char *)*((_QWORD *)&v11 + 1);
      for ( i = (char *)v11; i != v9; i += 56 )
        CSharedCircularQueueProducer::EnqueueItem<SuperWetInkBallpointPenPoint>(this[4], i);
      _Mtx_unlock((_Mtx_t)&DelegatedInkCanvasProcessor::s_contextLock);
      *((_DWORD *)a4 + 2) = 4;
    }
    else
    {
      _Mtx_unlock((_Mtx_t)&DelegatedInkCanvasProcessor::s_contextLock);
    }
    if ( (_QWORD)v11 )
      std::_Deallocate<16>((void *)v11, (struct std::nothrow_t *)(8 * ((v12 - (__int64)v11) >> 3)));
  }
  return 0LL;
}
