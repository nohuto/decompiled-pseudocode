/*
 * XREFs of ?CreateHwQueueForUserModeSubmission@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1401E147C
 * Callers:
 *     ?DxgkCreateHwQueueForUserModeSubmissionInternal@@YAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@_N@Z @ 0x1401E1F3C (-DxgkCreateHwQueueForUserModeSubmissionInternal@@YAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSI.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x14003CCD8 (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x14005C5B4 (--2-$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@@Z @ 0x1401E2F50 (-InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION.c)
 *     ??0DXGHWQUEUE@@IEAA@PEAVDXGCONTEXT@@@Z @ 0x14034F484 (--0DXGHWQUEUE@@IEAA@PEAVDXGCONTEXT@@@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A7D80 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CreateHwQueueForUserModeSubmission(
        DXGCONTEXT *this,
        struct _D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION *a2,
        struct DXGHWQUEUE **a3)
{
  __int64 v4; // rcx
  DXGHWQUEUE *v7; // rax
  struct DXGHWQUEUE *v8; // rax
  int v9; // esi
  DXGHWQUEUE *v10; // rax
  DXGHWQUEUE **v11; // rcx
  __int64 v12; // rdx

  v4 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v4 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 136)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 900;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      900LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 901;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      901LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 902;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppHwQueue != NULL", 902LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = (DXGHWQUEUE *)DXGQUOTAALLOCATOR<64,1265072196>::operator new(256LL);
  if ( !v7 )
  {
    *a3 = 0LL;
    goto LABEL_15;
  }
  v8 = DXGHWQUEUE::DXGHWQUEUE(v7, this);
  *a3 = v8;
  if ( !v8 )
  {
LABEL_15:
    v9 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 911;
    goto LABEL_16;
  }
  v9 = DXGHWQUEUE::InitializeForUserModeSubmission(v8, a2);
  if ( v9 >= 0 )
  {
    v10 = *a3;
    v11 = (DXGHWQUEUE **)((char *)this + 400);
    v12 = *((_QWORD *)this + 50);
    if ( *(DXGCONTEXT **)(v12 + 8) != (DXGCONTEXT *)((char *)this + 400) )
      __fastfail(3u);
    *(_QWORD *)v10 = v12;
    *((_QWORD *)v10 + 1) = v11;
    *(_QWORD *)(v12 + 8) = v10;
    *v11 = v10;
    _InterlockedIncrement64((volatile signed __int64 *)this + 4);
    return 0LL;
  }
LABEL_16:
  if ( *a3 )
  {
    DXGHWQUEUE::DestroyCoreState(*a3, 0LL);
    if ( *a3 )
      DXGHWQUEUE::`scalar deleting destructor'(*a3);
    *a3 = 0LL;
  }
  return (unsigned int)v9;
}
