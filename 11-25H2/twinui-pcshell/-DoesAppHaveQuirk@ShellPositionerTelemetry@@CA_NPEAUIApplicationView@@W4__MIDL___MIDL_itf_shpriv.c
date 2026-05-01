/*
 * XREFs of ?DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv_core_0000_0331_0005@@@Z @ 0x1804D8A3C
 * Callers:
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18008E394 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall ShellPositionerTelemetry::DoesAppHaveQuirk(
        int (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        unsigned int a2)
{
  bool v4; // si
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, __int64 *); // rdi
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0LL;
  v10 = 0LL;
  v5 = **a1;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v11);
  if ( v5(a1, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v6) >= 0 )
  {
    v7 = v11;
    v8 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    if ( v8(v7, &v10) >= 0 )
      v4 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 328LL))(v10, a2) != 0;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return v4;
}
