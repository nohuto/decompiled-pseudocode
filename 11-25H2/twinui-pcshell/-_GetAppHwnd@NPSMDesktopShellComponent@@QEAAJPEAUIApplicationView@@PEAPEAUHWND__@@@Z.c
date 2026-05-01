/*
 * XREFs of ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x180091DFC
 * Callers:
 *     ?OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800919B0 (-OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@NPSMDesktopShellTelemetry@@SA_NE_K@Z @ 0x180091FFC (-IsEnabled@NPSMDesktopShellTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAAPEAVNPSMDesktopShellTelemetry@@P6AXXZ@Z @ 0x18009202C (-get@-$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAAPEAVNPSMDesktopShellTelemetry@@.c)
 *     ?TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ @ 0x1800920D8 (-TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall NPSMDesktopShellComponent::_GetAppHwnd(
        NPSMDesktopShellComponent *this,
        struct IApplicationView *a2,
        HWND *a3)
{
  int v5; // eax
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // cl
  __int64 v8; // rcx
  NPSMDesktopShellTelemetry *v9; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned __int8 v17; // cl
  __int64 v18; // rcx
  NPSMDesktopShellTelemetry *v19; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  NPSMDesktopShellComponent *v21; // [rsp+50h] [rbp+20h] BYREF
  __int64 *v22; // [rsp+58h] [rbp+28h] BYREF
  _QWORD *v23; // [rsp+60h] [rbp+30h] BYREF
  __int64 v24; // [rsp+68h] [rbp+38h] BYREF

  v21 = this;
  *a3 = 0LL;
  v24 = 0LL;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v24);
  if ( v24 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v24 + 24LL))(v24, a3);
    v7 = (unsigned __int8)retaddr;
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x38,
        (int)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
        (const char *)(unsigned int)v5);
    if ( NPSMDesktopShellTelemetry::IsEnabled(v7, v6) )
    {
      v9 = (NPSMDesktopShellTelemetry *)wil::details::static_lazy<NPSMDesktopShellTelemetry>::get(
                                          v8,
                                          _lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_);
      NPSMDesktopShellTelemetry::TraceDbgMsg_(v9, L"Win32 hwnd =0x%x", *a3);
    }
  }
  else
  {
    v23 = 0LL;
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, _QWORD **))a2)(
      a2,
      &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
      &v23);
    v11 = v23;
    if ( v23 )
    {
      v22 = 0LL;
      v12 = *v23;
      v22 = 0LL;
      v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64 **))(v12 + 24))(v23, &v22);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x41,
          (int)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
          (const char *)(unsigned int)v13);
      }
      else
      {
        v21 = 0LL;
        v14 = *v22;
        v21 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, NPSMDesktopShellComponent **))(v14 + 24))(
                v22,
                1LL,
                &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                &v21);
        if ( v15 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x44,
            (int)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
            (const char *)(unsigned int)v15);
        }
        else
        {
          (*(void (__fastcall **)(NPSMDesktopShellComponent *, HWND *))(*(_QWORD *)v21 + 32LL))(v21, a3);
          if ( NPSMDesktopShellTelemetry::IsEnabled(v17, v16) )
          {
            v19 = (NPSMDesktopShellTelemetry *)wil::details::static_lazy<NPSMDesktopShellTelemetry>::get(
                                                 v18,
                                                 _lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_);
            NPSMDesktopShellTelemetry::TraceDbgMsg_(v19, L"Modern hwnd =0x%x", *a3);
          }
        }
        if ( v21 )
          (*(void (__fastcall **)(NPSMDesktopShellComponent *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      if ( v22 )
        (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
      v11 = v23;
    }
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return 0LL;
}
