/*
 * XREFs of ?InstanceThreadProc@SessionMonitor@@AEAAKXZ @ 0x180082880
 * Callers:
 *     ?ThreadProc@SessionMonitor@@CAKPEAX@Z @ 0x1800A33F0 (-ThreadProc@SessionMonitor@@CAKPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180057CCC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180090DA0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??$start@V?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@0@XZ @ 0x1800A2CCC (--$start@V-$tip_test@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@t.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A2FCC (--1-$com_ptr_t@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@Uerr_ret.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1800A306C (--1-$test_data_control@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@1@XZ @ 0x1800A3220 (--C-$tip_test@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@QE.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1800A3554 (-complete@-$tip_test@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@t.c)
 */

__int64 __fastcall SessionMonitor::InstanceThreadProc(SessionMonitor *this)
{
  struct SessionMonitor *v1; // rbx
  const char *v2; // r9
  HWND Window; // rax
  const char *v4; // r9
  wil::details *v5; // rax
  const char *v6; // r9
  DWORD v7; // eax
  signed int LastError; // ebx
  HMODULE ModuleHandleW; // rax
  int X; // [rsp+20h] [rbp-E0h]
  HANDLE Handles[2]; // [rsp+60h] [rbp-A0h] BYREF
  MSG Msg; // [rsp+70h] [rbp-90h] BYREF
  WNDCLASSW hInstance; // [rsp+A0h] [rbp-60h] BYREF
  tagWNDCLASSW WndClass; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]
  SessionMonitor *v17; // [rsp+170h] [rbp+70h] BYREF
  wil::details *v18; // [rsp+178h] [rbp+78h] BYREF
  char v19; // [rsp+180h] [rbp+80h] BYREF
  __int64 v20; // [rsp+188h] [rbp+88h] BYREF

  v17 = this;
  v1 = SessionMonitor::_instance;
  v20 = 0LL;
  memset_0(&hInstance, 0, sizeof(hInstance));
  memset_0(&WndClass, 0, sizeof(WndClass));
  hInstance.cbWndExtra = 8;
  hInstance.lpfnWndProc = (WNDPROC)SessionMonitor::WndProc;
  hInstance.hInstance = GetModuleHandleW(0LL);
  hInstance.lpszClassName = L"SessionMonitorWindow";
  if ( !GetClassInfoW(hInstance.hInstance, L"SessionMonitorWindow", &WndClass) && !RegisterClassW(&hInstance) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
      v2);
  Window = CreateWindowExW(
             0,
             hInstance.lpszClassName,
             &WindowName,
             0,
             0,
             0,
             0,
             0,
             HWND_MESSAGE,
             0LL,
             hInstance.hInstance,
             0LL);
  *(_QWORD *)v1 = Window;
  if ( !Window )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
      v4);
  if ( WTSRegisterSessionNotification(Window, 0) )
  {
    tip2::start<tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>>(&v17);
    tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::complete(&v17);
    wil::com_ptr_t<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>,wil::err_returncode_policy>(&v17);
    goto LABEL_19;
  }
  if ( GetLastError() == 1702 || GetLastError() == 1722 )
  {
    v18 = 0LL;
    v5 = (wil::details *)OpenEventW(0x100000u, 0, L"Global\\TermSrvReadyEvent");
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      &v18,
      v5);
    if ( !v18 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xD3,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
        v6);
    Handles[0] = v18;
    Handles[1] = *((HANDLE *)v1 + 3);
    v7 = WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        if ( v7 != -1 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xFD,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
            (const char *)0x8000FFFFLL,
            X);
        LastError = GetLastError();
        tip2::start<tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>>(&v17);
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::operator->(
                                &v17,
                                &v19)
                 + 272LL) = 1;
        goto LABEL_14;
      }
    }
    else if ( !WTSRegisterSessionNotification(*(HWND *)v1, 0) )
    {
      LastError = GetLastError();
      tip2::start<tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>>(&v17);
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::operator->(
                              &v17,
                              &v19)
               + 273LL) = 1;
LABEL_14:
      tip2::test_data_control<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::~test_data_control<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>(&v19);
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::operator->(
                               &v17,
                               &v19)
                + 276LL) = LastError;
      tip2::test_data_control<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::~test_data_control<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>(&v19);
      tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::complete(&v17);
      wil::com_ptr_t<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>,wil::err_returncode_policy>(&v17);
    }
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&v18);
  }
LABEL_19:
  memset(&Msg, 0, sizeof(Msg));
  while ( GetMessageW(&Msg, 0LL, 0, 0) )
    DispatchMessageW(&Msg);
  ModuleHandleW = GetModuleHandleW(0LL);
  UnregisterClassW(L"SessionMonitorWindow", ModuleHandleW);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&v20);
  return 0LL;
}
