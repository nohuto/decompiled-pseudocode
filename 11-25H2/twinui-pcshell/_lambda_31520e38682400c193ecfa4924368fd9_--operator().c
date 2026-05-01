/*
 * XREFs of _lambda_31520e38682400c193ecfa4924368fd9_::operator() @ 0x1800D43C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::Run @ 0x1800D3C40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___--Run.c)
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800D4980 (-_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x1800D49C0 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D4A40 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800D4D68 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     WPP_SF_Ld @ 0x180204DFC (WPP_SF_Ld.c)
 *     ??$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z @ 0x18030731C (--$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_31520e38682400c193ecfa4924368fd9_::operator()(unsigned int *a1)
{
  _DWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // r14d
  char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // [rsp+30h] [rbp-29h] BYREF
  __int64 v12; // [rsp+38h] [rbp-21h] BYREF
  __int64 v13; // [rsp+40h] [rbp-19h]
  _OWORD v14[2]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v15[48]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v16; // [rsp+C0h] [rbp+67h] BYREF

  v2 = (_DWORD *)*((_QWORD *)a1 + 36);
  if ( *v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v14,
      (struct wil::details::IFailureCallback *)(a1 + 4),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  }
  else
  {
    memset(v14, 0, sizeof(v14));
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v15,
      0LL,
      0LL,
      0);
  }
  if ( !IsWindowVisible(*(HWND *)(*((_QWORD *)a1 + 1) + 128LL)) )
  {
    v10 = *((_QWORD *)a1 + 1);
    if ( **(_QWORD **)(v10 + 104) )
    {
      if ( !*a1 )
      {
        v16 = *(_QWORD *)(v10 + 608);
        CFramePresentationTelemetry::ClosedFrameShown<unsigned short const *>(&v16);
        ShowWindowAsync(*(HWND *)(*((_QWORD *)a1 + 1) + 128LL), 4);
      }
    }
  }
  if ( *((_BYTE *)a1 + 5) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 208LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
      0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 56LL))(
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
    *a1);
  if ( *((_BYTE *)a1 + 5) )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 208LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
      1LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_Ld(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      16LL,
      &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
      *a1,
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 48LL));
  }
  v3 = *((_QWORD *)a1 + 1);
  v4 = **(_QWORD **)(v3 + 104);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 208LL))(
      v4,
      *(_QWORD *)(v3 + 128),
      (unsigned int)(*(_DWORD *)(v3 + 216) != 0) + 4);
  v5 = *((_QWORD *)a1 + 1);
  v6 = *a1;
  v12 = v5;
  v13 = 0LL;
  v7 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v16);
  v8 = 0LL;
  if ( &v11 != v7 )
  {
    v8 = *(_QWORD *)v7;
    *(_QWORD *)v7 = 0LL;
  }
  v13 = v8;
  v9 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v6 == *(_DWORD *)(v5 + 216) )
    *(_BYTE *)(v5 + 552) = 1;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)&v12);
  CFrameApplicationPresentation::_FixDialogsIfNeeded(*((CFrameApplicationPresentation **)a1 + 1));
  if ( *((_BYTE *)a1 + 4) )
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 128LL),
      0LL);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 4);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v14);
}
