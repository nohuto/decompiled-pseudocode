/*
 * XREFs of ?OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800919B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wnf_publish@_K@wil@@YAXAEBU_WNF_STATE_NAME@@AEB_K@Z @ 0x180091DA4 (--$wnf_publish@_K@wil@@YAXAEBU_WNF_STATE_NAME@@AEB_K@Z.c)
 *     ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x180091DFC (-_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?IsEnabled@NPSMDesktopShellTelemetry@@SA_NE_K@Z @ 0x180091FFC (-IsEnabled@NPSMDesktopShellTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAAPEAVNPSMDesktopShellTelemetry@@P6AXXZ@Z @ 0x18009202C (-get@-$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAAPEAVNPSMDesktopShellTelemetry@@.c)
 *     ?TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ @ 0x1800920D8 (-TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NPSMDesktopShellComponent::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int v5; // eax
  int v7; // eax
  unsigned __int64 v8; // rdx
  unsigned __int8 v9; // cl
  __int64 v10; // rcx
  NPSMDesktopShellTelemetry *v11; // rax
  struct _RTL_CRITICAL_SECTION *v12; // rbx
  __int64 v13; // rsi
  HWND v14; // rax
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // cl
  __int64 v23; // rcx
  NPSMDesktopShellTelemetry *v24; // rax
  struct _RTL_CRITICAL_SECTION *v25; // rsi
  NPSMDesktopShellComponent *v26; // rcx
  int AppHwnd; // eax
  __int64 v28; // rcx
  HWND v29; // rax
  int v30; // [rsp+20h] [rbp-40h]
  int v31; // [rsp+20h] [rbp-40h]
  HWND v32; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v34; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v35; // [rsp+48h] [rbp-18h] BYREF
  HWND v36[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  if ( a3 == 7 )
  {
    v32 = 0LL;
    v36[0] = 0LL;
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, HWND *))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      v36);
    if ( v36[0] )
    {
      v7 = (*(__int64 (__fastcall **)(HWND, HWND *))(*(_QWORD *)v36[0] + 24LL))(v36[0], &v32);
      v9 = (unsigned __int8)retaddr;
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x38,
          (int)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
          (const char *)(unsigned int)v7);
      if ( NPSMDesktopShellTelemetry::IsEnabled(v9, v8) )
      {
        v11 = (NPSMDesktopShellTelemetry *)wil::details::static_lazy<NPSMDesktopShellTelemetry>::get(
                                             v10,
                                             _lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_);
        NPSMDesktopShellTelemetry::TraceDbgMsg_(v11, L"Win32 hwnd =0x%x", v32);
      }
    }
    else
    {
      v35 = 0LL;
      (**(void (__fastcall ***)(struct IApplicationView *, GUID *, _QWORD **))a2)(
        a2,
        &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
        &v35);
      v16 = v35;
      if ( v35 )
      {
        v17 = *v35;
        v34 = 0LL;
        v18 = (*(__int64 (__fastcall **)(_QWORD *, __int64 **))(v17 + 24))(v35, &v34);
        if ( v18 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x41,
            (int)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
            (const char *)(unsigned int)v18);
        }
        else
        {
          v19 = *v34;
          v33 = 0LL;
          v20 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v19 + 24))(
                  v34,
                  1LL,
                  &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                  &v33);
          if ( v20 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x44,
              (int)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
              (const char *)(unsigned int)v20);
          }
          else
          {
            (*(void (__fastcall **)(__int64, HWND *))(*(_QWORD *)v33 + 32LL))(v33, &v32);
            if ( NPSMDesktopShellTelemetry::IsEnabled(v22, v21) )
            {
              v24 = (NPSMDesktopShellTelemetry *)wil::details::static_lazy<NPSMDesktopShellTelemetry>::get(
                                                   v23,
                                                   _lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_);
              NPSMDesktopShellTelemetry::TraceDbgMsg_(v24, L"Modern hwnd =0x%x", v32);
            }
          }
          if ( v33 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        }
        if ( v34 )
          (*(void (__fastcall **)(__int64 *))(*v34 + 16))(v34);
        v16 = v35;
      }
      if ( v16 )
        (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
    }
    if ( v36[0] )
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v36[0] + 16LL))(v36[0]);
    v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
    v13 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = a2;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = v32;
    *(_QWORD *)(a1 + 136) = v32;
    if ( v14 )
    {
      v36[0] = v14;
      v15 = RtlPublishWnfStateData(WNF_NPSM_FOREGROUND_WINDOW, 0LL, v36, 8LL, 0LL) | 0x10000000;
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x361,
          (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
          (const char *)(unsigned int)v15,
          v31);
    }
    goto LABEL_17;
  }
  if ( a3 != 14 )
  {
    if ( a3 == 9 )
    {
      v36[0] = 0LL;
      v5 = RtlPublishWnfStateData(WNF_NPSM_FOREGROUND_WINDOW, 0LL, v36, 8LL, 0LL) | 0x10000000;
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x361,
          (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
          (const char *)(unsigned int)v5,
          v30);
    }
    return 0LL;
  }
  v25 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v12 = v25;
  if ( *(struct IApplicationView **)(a1 + 144) != a2 )
    goto LABEL_17;
  if ( v25 )
  {
    LeaveCriticalSection(v25);
    v12 = 0LL;
  }
  v36[0] = 0LL;
  AppHwnd = NPSMDesktopShellComponent::_GetAppHwnd(v26, a2, v36);
  if ( AppHwnd < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6F,
      (int)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
      (const char *)(unsigned int)AppHwnd);
  EnterCriticalSection(v25);
  if ( *(struct IApplicationView **)(a1 + 144) == a2 )
  {
    v29 = v36[0];
    *(HWND *)(a1 + 136) = v36[0];
    v35 = v29;
    wil::wnf_publish<unsigned __int64>(v28, &v35);
  }
  if ( v25 )
  {
    LeaveCriticalSection(v25);
LABEL_17:
    if ( v12 )
      LeaveCriticalSection(v12);
  }
  return 0LL;
}
