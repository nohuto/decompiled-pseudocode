/*
 * XREFs of _lambda_201adf67891f12ccd8a16b46f471aeff_::operator() @ 0x1801AC4F8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::Run @ 0x1801AC470 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___--Run.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180043234 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     WPP_SF_qd @ 0x18005F070 (WPP_SF_qd.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800B3780 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x1801AC688 (-_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AC7A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@details@wil@@QE.c)
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1801AC82C (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_201adf67891f12ccd8a16b46f471aeff_::operator()(_QWORD *a1)
{
  _DWORD *v2; // r8
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rax
  _OWORD v6[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v7[48]; // [rsp+50h] [rbp-38h] BYREF

  v2 = (_DWORD *)a1[36];
  if ( *v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v6,
      (struct wil::details::IFailureCallback *)(a1 + 2),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  }
  else
  {
    memset(v6, 0, sizeof(v6));
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v7,
      0LL,
      0LL,
      0);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[1] + 120LL) + 48LL))(*(_QWORD *)(a1[1] + 120LL), 0LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LOBYTE(v3) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PresentationStateBugFix>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PresentationStateBugFix>::GetImpl'::`2'::impl,
    v3);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(***(_QWORD ***)(a1[1] + 104LL) + 208LL))(
    **(_QWORD **)(a1[1] + 104LL),
    *(_QWORD *)(a1[1] + 128LL),
    0LL);
  CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
    (CFrameApplicationPresentation::PresentedWindow *)(a1[1] + 64LL),
    (struct CFrameApplicationPresentation *)a1[1],
    0LL,
    **(HWND **)(a1[1] + 112LL));
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    v4 = *(_DWORD *)(a1[1] + 48LL);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
    WPP_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xEu,
      &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
      v5,
      v4);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ShowWindowAsync(*(HWND *)(a1[1] + 128LL), 0);
  CFrameApplicationPresentation::_DestroyFrameIfPossible((CFrameApplicationPresentation *)a1[1]);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 2), 0);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v6);
}
