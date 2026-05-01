/*
 * XREFs of ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x180114AE8
 * Callers:
 *     ?OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180113340 (-OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180114330 (-OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036D7C0 (-OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCControlCenterExperienceManager@@@Z @ 0x180053674 (--$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@U.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1801144EC (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ @ 0x1801B5168 (-SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator2@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@AEBUhstring@param@3@@Z @ 0x1802393F8 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator2@UShellViewCoordinator@She.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802B8D3C (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b959cc7d3c94daadbba7e8631760d391_____lambda_b959cc7d3c94daadbba7e8631760d391___ @ 0x18036A5D4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b959cc7d3c94d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CControlCenterExperienceManager::OnVisibilityChanged(HSTRING *this, const unsigned __int16 *a2)
{
  unsigned __int8 v3; // r14
  int v4; // eax
  int v5; // eax
  _QWORD *v6; // rax
  unsigned int v7; // r15d
  __int64 *v8; // rax
  __int64 v9; // rbx
  int v10; // r15d
  const unsigned __int16 *StringRawBuffer; // rax
  const char *v12; // r9
  HSTRING *v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  HSTRING *v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 40) == 2 )
  {
    v3 = 1;
    v4 = CControlCenterExperienceManager::SetWindowRegion((CControlCenterExperienceManager *)this);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5C0,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
  }
  else
  {
    v3 = 0;
  }
  v5 = CControlCenterExperienceManager::RaisePropertyChangedEvent((CControlCenterExperienceManager *)this, a2, v3);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5C4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  v17 = 0LL;
  v16 = this;
  v6 = wil::com_weak_query<CControlCenterExperienceManager *>(&v18, (__int64 *)&v16);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
    &v17,
    v6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  v13 = this;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    v14,
    &v17);
  v7 = *((_DWORD *)this + 115);
  v8 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b959cc7d3c94daadbba7e8631760d391_____lambda_b959cc7d3c94daadbba7e8631760d391___(
                    &v16,
                    &v13);
  v9 = *v8;
  *v8 = 0LL;
  if ( v16 )
  {
    v16 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release();
  }
  v10 = SHTaskPoolQueueTask(3LL, 2LL, v7);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v14);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5D5,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  v16 = 0LL;
  if ( winrt::Windows::Foundation::operator!=(
         (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 87,
         (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))&v16) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(this[94], 0LL);
    winrt::param::hstring::hstring((winrt::param::hstring *)&v13, StringRawBuffer);
    LODWORD(v16) = v3 ^ 1;
    try
    {
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator2<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibility(
        this + 87,
        &v16,
        &v13);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x5E3,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        v12);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
}
