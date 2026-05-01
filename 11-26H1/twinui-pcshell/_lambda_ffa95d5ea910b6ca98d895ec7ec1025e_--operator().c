/*
 * XREFs of _lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::operator() @ 0x180305090
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___::Run @ 0x180305930 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180043234 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qd @ 0x18005F070 (WPP_SF_qd.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800B33AC (-_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?Commit@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1801AC3D4 (-Commit@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@.c)
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1801AC82C (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x1801DEA10 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801F4628 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAA.c)
 *     ??$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z @ 0x180302C00 (--$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_8e00e1fbf2ed311989c78bcff33a5f22___ @ 0x180303728 (CIAMGlobals--QueueViewManagementTask__lambda_8e00e1fbf2ed311989c78bcff33a5f22___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::operator()(_QWORD *a1)
{
  BOOL v2; // r14d
  unsigned __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  struct ITaskWindow *v10; // r8
  HWND v11; // r9
  _BYTE v12[80]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v14; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 v15; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v16; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+C8h] [rbp+48h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 2),
    (wil::ActivityThreadWatcher *)v12);
  v2 = SHIsSameObject((struct IUnknown *)*a1, **(struct IUnknown ***)(a1[1] + 104LL));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
  v4 = a1[1];
  if ( v3 == **(_QWORD **)(v4 + 112) && v2 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 2), 0);
  }
  else
  {
    if ( !IsWindowVisible(*(HWND *)(v4 + 128)) )
      ShowWindowAsync(*(HWND *)(a1[1] + 128LL), 4);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v5 = *(_DWORD *)(a1[1] + 48LL);
      v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
      WPP_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xDu,
        &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
        v6,
        v5);
    }
    v7 = **(_QWORD **)(a1[1] + 104LL);
    v16 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
    CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
      (CFrameApplicationPresentation::PresentedWindow *)(a1[1] + 64LL),
      (struct CFrameApplicationPresentation *)a1[1],
      (struct ITaskWindow *)*a1,
      v3);
    v14 = 0;
    if ( (unsigned int)GetWindowBand(*(_QWORD *)(a1[1] + 128LL), &v14) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, v14);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(a1[1] + 120LL) + 48LL))(
           *(_QWORD *)(a1[1] + 120LL),
           v3);
    LODWORD(v15) = v8;
    v9 = retaddr;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2BC,
        (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v8);
      v17 = *(_QWORD *)(a1[1] + 608LL);
      CFramePresentationTelemetry::FailedSettingPresentedWindowOnFrame<long const &,unsigned short const *>(
        (int *)&v15,
        &v17);
    }
    if ( v3 )
    {
      v15 = v3;
      CIAMGlobals::QueueViewManagementTask__lambda_8e00e1fbf2ed311989c78bcff33a5f22___((__int64)v9, (__int64 *)&v15);
    }
    CFrameApplicationPresentation::_UpdateMinSizePreferences(
      (CFrameApplicationPresentation *)a1[1],
      **(HWND **)(a1[1] + 112LL));
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 208LL))(
      *a1,
      *(_QWORD *)(a1[1] + 128LL),
      (unsigned int)(*(_DWORD *)(a1[1] + 216LL) != 0) + 4);
    if ( v7 && !v2 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 208LL))(v7, *(_QWORD *)(a1[1] + 128LL), 0LL);
    CFrameApplicationPresentation::PresentedWindow::Commit(
      (CFrameApplicationPresentation::PresentedWindow *)(a1[1] + 64LL),
      (struct CFrameApplicationPresentation *)a1[1],
      v10,
      v11);
    CFrameApplicationPresentation::_FixDialogsIfNeeded((CFrameApplicationPresentation *)a1[1]);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 2), 0);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v12);
}
