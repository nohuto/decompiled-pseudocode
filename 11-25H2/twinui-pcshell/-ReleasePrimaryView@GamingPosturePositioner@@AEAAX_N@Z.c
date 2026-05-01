/*
 * XREFs of ?ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N@Z @ 0x1804E49D8
 * Callers:
 *     ?ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804E2190 (-ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUn.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804E3B24 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804E4070 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?SetInterceptMoveAndSize@GamingPosturePositioner@@AEAAXPEAUHWND__@@_N@Z @ 0x1804E4D08 (-SetInterceptMoveAndSize@GamingPosturePositioner@@AEAAXPEAUHWND__@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GamingPosturePositioner::ReleasePrimaryView(GamingPosturePositioner *this, struct IApplicationView *a2)
{
  char v2; // si
  __int64 *v4; // rdi
  __int64 (__fastcall ***v5)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx
  HWND WindowForView; // rbx
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  int v9; // eax
  int v10; // eax
  const char *v11; // r9
  char v12; // [rsp+30h] [rbp-88h] BYREF
  HWND v13; // [rsp+38h] [rbp-80h] BYREF
  __int64 v14; // [rsp+40h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v16; // [rsp+70h] [rbp-48h]
  int v17; // [rsp+78h] [rbp-40h]
  int v18; // [rsp+7Ch] [rbp-3Ch]
  HWND *v19; // [rsp+80h] [rbp-38h]
  int v20; // [rsp+88h] [rbp-30h]
  int v21; // [rsp+8Ch] [rbp-2Ch]
  char *v22; // [rsp+90h] [rbp-28h]
  int v23; // [rsp+98h] [rbp-20h]
  int v24; // [rsp+9Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = (char)a2;
  v4 = (__int64 *)((char *)this + 224);
  v5 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 28);
  if ( v5 )
  {
    try
    {
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(v5, a2);
      v8 = GamingPosturePositionerTraceProvider::Provider(v7);
      if ( *(_DWORD *)v8 > 4u )
      {
        v12 = v2;
        v13 = WindowForView;
        v14 = *v4;
        v22 = &v12;
        v23 = 1;
        v24 = 0;
        v19 = &v13;
        v20 = 8;
        v21 = 0;
        v16 = &v14;
        v17 = 8;
        v18 = 0;
        tlgWriteTransfer_EventWriteTransfer((__int64)v8, byte_1807DCEDC, 0LL, 0LL, 5u, &v15);
      }
      if ( v2 )
      {
        if ( WindowForView )
        {
          v9 = DwmpTransitionWindow(WindowForView, 805306386LL);
          if ( v9 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x2E4,
              (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
              (const char *)(unsigned int)v9);
        }
      }
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)*v4 + 96LL))(*v4, 1LL, 1LL);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2E7,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
          (const char *)(unsigned int)v10);
      GamingPosturePositioner::SetInterceptMoveAndSize(this, WindowForView, 0);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v4);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x2EC,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        v11);
    }
  }
}
