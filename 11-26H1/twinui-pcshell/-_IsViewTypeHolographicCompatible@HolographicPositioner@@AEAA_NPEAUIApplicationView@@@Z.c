/*
 * XREFs of ?_IsViewTypeHolographicCompatible@HolographicPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18008D228
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008D104 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall HolographicPositioner::_IsViewTypeHolographicCompatible(
        HolographicPositioner *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  int (__fastcall *v3)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v4; // rax
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, __int64 *); // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+10h] BYREF
  __int64 v13; // [rsp+38h] [rbp+18h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v3 = **a2;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v13);
  if ( v3((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v4) >= 0
    && (v5 = v13,
        v6 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL),
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12),
        v6(v5, &v12) >= 0)
    && ((*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 328LL))(v12, 0LL)
     || (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 328LL))(v12, 5LL)) )
  {
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return 0;
  }
  else
  {
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return 1;
  }
}
