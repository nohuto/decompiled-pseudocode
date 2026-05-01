/*
 * XREFs of ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1805172D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006F71C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007903C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ @ 0x180515430 (--1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805179C4 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x18051A788 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18051C19C (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x18051D930 (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x180522374 (-TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TabletModePositioner::ControlLost(__int64 a1, __int64 a2, unsigned int a3, void **a4)
{
  __int64 *v8; // r15
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, GUID *, __int64 *); // rbx
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v14; // rax
  int v15; // eax
  const struct _GUID *v16; // r8
  int Instance; // eax
  HRESULT v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v22; // rax
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  __int64 v25; // rdx
  void *ppvOut; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v28[42]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  *a4 = 0LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v28,
    (__int64)"TMPControlLost");
  v28[0] = &TabletModeTraceLogging::TMPControlLost::`vftable';
  TabletModeTraceLogging::TMPControlLost::StartActivity(v28, a2, a3);
  v8 = (__int64 *)(a1 + 136);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 136));
  if ( a3 != 4 )
  {
    if ( ((a3 - 5) & 0xFFFFFFFD) != 0 )
    {
      LODWORD(v27) = 0;
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &v27);
      if ( (_DWORD)v27 == *(_DWORD *)(a1 + 108) )
        goto LABEL_30;
      if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
        DwmpEndTransitionRequest(91LL);
      Instance = TabletModePositionerHandoffContext_CreateInstance(
                   *(struct IAppLayout **)(a1 + 120),
                   *(_BYTE *)(a1 + 112),
                   v16,
                   a4);
      if ( Instance < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3CB,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)Instance);
      TabletModePositioner::SetTabletMode(a1 - 128, (unsigned int)v27);
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      v18 = IUnknown_QueryService(
              *(IUnknown **)(a1 - 112),
              (const GUID *const)&SID_VirtualDesktopTabletModePolicyService,
              &GUID_56b32065_0bb3_42e2_975d_a559de1316e8,
              &ppvOut);
      v19 = retaddr;
      if ( v18 >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, *(_QWORD *)(a1 + 120));
        v19 = retaddr;
        if ( v18 >= 0 )
        {
LABEL_22:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
          goto LABEL_30;
        }
        v20 = 978LL;
      }
      else
      {
        v20 = 976LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v19,
        (void *)v20,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_22;
    }
    ppvOut = 0LL;
    v21 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
    v22 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&ppvOut);
    v23 = v21(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v22);
    v24 = retaddr;
    if ( v23 >= 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 120) + 184LL))(
              *(_QWORD *)(a1 + 120),
              ppvOut) )
        goto LABEL_29;
      v23 = TabletModePositioner::EvictAppHelper(a1 - 128, ppvOut, 8LL);
      v24 = retaddr;
      if ( v23 >= 0 )
        goto LABEL_29;
      v25 = 949LL;
    }
    else
    {
      v25 = 947LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v24,
      (void *)v25,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v23);
LABEL_29:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_30;
  }
  v27 = 0LL;
  v9 = a1 - 128;
  v10 = *(_QWORD *)(a1 - 128 + 248);
  v11 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v10 + 192LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  v12 = v11(v10, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, &v27);
  if ( v12 >= 0 )
  {
    TabletModePositioner::SwitchToEmptyLayoutHelper(v9);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 80LL))(v27, 5LL) > 1 )
    {
      ppvOut = 0LL;
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
      v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&ppvOut);
      v15 = v13(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v14);
      if ( v15 >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64, void *))(*(_QWORD *)v27 + 184LL))(v27, ppvOut) )
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(v8, &v27);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3A5,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v15);
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
      (const char *)(unsigned int)v12);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
LABEL_30:
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v28);
  TabletModeTraceLogging::TMPControlLost::~TMPControlLost((TabletModeTraceLogging::TMPControlLost *)v28);
}
