/*
 * XREFs of ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18040D3B8
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180107440 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??0_lambda_f475742c0de8d0f2b24fd9d946f0a567_@@QEAA@AEBU?$coroutine_handle@X@experimental@std@@PEAUawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@6@W4DispatcherQueuePriority@896@@Z@@Z @ 0x18030773C (--0_lambda_f475742c0de8d0f2b24fd9d946f0a567_@@QEAA@AEBU-$coroutine_handle@X@experimental@std@@PE.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x18040CE48 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x18040DCC8 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::RemovedApplicationView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  char *Ptr; // rsi
  PVOID v5; // rdi
  int (__fastcall *v6)(PVOID, struct IApplicationView **); // rbx
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  __int128 v10; // [rsp+20h] [rbp-58h]
  __int64 v11[9]; // [rsp+30h] [rbp-48h] BYREF
  struct IApplicationView *v12; // [rsp+80h] [rbp+8h] BYREF
  struct IApplicationView *v13; // [rsp+88h] [rbp+10h] BYREF
  RTL_SRWLOCK *v14; // [rsp+90h] [rbp+18h] BYREF
  char v15; // [rsp+98h] [rbp+20h] BYREF

  v13 = a2;
  wil::AcquireSRWLockExclusive(&v14, this + 16);
  v10 = *(_OWORD *)_lambda_f475742c0de8d0f2b24fd9d946f0a567_::_lambda_f475742c0de8d0f2b24fd9d946f0a567_(
                     v11,
                     &v13,
                     (__int64)this);
  Ptr = (char *)this[17].Ptr;
  if ( Ptr != this[18].Ptr )
  {
    while ( *(_QWORD *)(*(_QWORD *)Ptr + 32LL) != (_QWORD)v10 )
    {
      Ptr += 16;
      if ( Ptr == this[18].Ptr )
        goto LABEL_13;
    }
    v12 = 0LL;
    v5 = this[43].Ptr;
    v6 = *(int (__fastcall **)(PVOID, struct IApplicationView **))(*(_QWORD *)v5 + 72LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    if ( v6(v5, &v12) >= 0 && v12 == a2 )
    {
      v7 = *(_QWORD **)Ptr;
      if ( *(_QWORD *)(*(_QWORD *)Ptr + 24LL) > 7uLL )
        v7 = (_QWORD *)*v7;
      PeoplePaneViewManager::NotifyListeners((__int64)this, 3u, (__int64)v7, *(_DWORD *)(*(_QWORD *)Ptr + 40LL));
    }
    v8 = *(_QWORD **)Ptr;
    if ( *(_QWORD *)(*(_QWORD *)Ptr + 24LL) > 7uLL )
      v8 = (_QWORD *)*v8;
    PeoplePaneViewManager::NotifyListeners((__int64)this, 1u, (__int64)v8, *(_DWORD *)(*(_QWORD *)Ptr + 40LL));
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(&this[17], &v15, Ptr);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  }
LABEL_13:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
  return 0LL;
}
