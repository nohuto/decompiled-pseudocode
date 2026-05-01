/*
 * XREFs of ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804F5BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180048D58 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005737C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ @ 0x1804F3D34 (--1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1804F628C (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1804F8A08 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1804FA370 (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1804FBA04 (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x180500244 (-TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TabletModePositioner::ControlLost(__int64 a1, __int64 a2, unsigned int a3, void **a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 (__fastcall *v11)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v12; // rax
  int v13; // eax
  const struct _GUID *v14; // r8
  int Instance; // eax
  HRESULT v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v20; // rax
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  __int64 v23; // rdx
  void *ppvOut; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v26[42]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  *a4 = 0LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v26,
    (__int64)"TMPControlLost");
  v26[0] = &TabletModeTraceLogging::TMPControlLost::`vftable';
  TabletModeTraceLogging::TMPControlLost::StartActivity(v26, a2, a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 136));
  if ( a3 != 4 )
  {
    if ( ((a3 - 5) & 0xFFFFFFFD) != 0 )
    {
      LODWORD(v25) = 0;
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &v25);
      if ( (_DWORD)v25 == *(_DWORD *)(a1 + 108) )
        goto LABEL_30;
      if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
        DwmpEndTransitionRequest(91LL);
      Instance = TabletModePositionerHandoffContext_CreateInstance(
                   *(struct IAppLayout **)(a1 + 120),
                   *(_BYTE *)(a1 + 112),
                   v14,
                   a4);
      if ( Instance < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3CB,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)Instance);
      TabletModePositioner::SetTabletMode(a1 - 128, (unsigned int)v25);
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      v16 = IUnknown_QueryService(
              *(IUnknown **)(a1 - 112),
              (const GUID *const)&SID_VirtualDesktopTabletModePolicyService,
              &GUID_56b32065_0bb3_42e2_975d_a559de1316e8,
              &ppvOut);
      v17 = retaddr;
      if ( v16 >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, *(_QWORD *)(a1 + 120));
        v17 = retaddr;
        if ( v16 >= 0 )
        {
LABEL_22:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
          goto LABEL_30;
        }
        v18 = 978LL;
      }
      else
      {
        v18 = 976LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v17,
        (void *)v18,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_22;
    }
    ppvOut = 0LL;
    v19 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
    v20 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&ppvOut);
    v21 = v19(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v20);
    v22 = retaddr;
    if ( v21 >= 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 120) + 184LL))(
              *(_QWORD *)(a1 + 120),
              ppvOut) )
        goto LABEL_29;
      v21 = TabletModePositioner::EvictAppHelper(a1 - 128, ppvOut, 8LL);
      v22 = retaddr;
      if ( v21 >= 0 )
        goto LABEL_29;
      v23 = 949LL;
    }
    else
    {
      v23 = 947LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v22,
      (void *)v23,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v21);
LABEL_29:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_30;
  }
  v25 = 0LL;
  v8 = *(_QWORD *)(a1 + 120);
  v9 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v8 + 192LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  v10 = v9(v8, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, &v25);
  if ( v10 >= 0 )
  {
    TabletModePositioner::SwitchToEmptyLayoutHelper(a1 - 128);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 80LL))(v25, 5LL) > 1 )
    {
      ppvOut = 0LL;
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
      v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&ppvOut);
      v13 = v11(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v12);
      if ( v13 >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64, void *))(*(_QWORD *)v25 + 184LL))(v25, ppvOut) )
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 136), &v25);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3A5,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v13);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x399,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
LABEL_30:
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v26);
  TabletModeTraceLogging::TMPControlLost::~TMPControlLost((TabletModeTraceLogging::TMPControlLost *)v26);
}
