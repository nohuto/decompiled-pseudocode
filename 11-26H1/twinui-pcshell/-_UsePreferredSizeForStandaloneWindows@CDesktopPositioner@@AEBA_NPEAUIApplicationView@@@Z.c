/*
 * XREFs of ?_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z @ 0x180216D40
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801DA4B0 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall CDesktopPositioner::_UsePreferredSizeForStandaloneWindows(
        CDesktopPositioner *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  bool v3; // si
  int (__fastcall *v4)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, CDesktopPositioner **); // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  CDesktopPositioner *v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v11 = this;
  v3 = 0;
  v12 = 0LL;
  v4 = **a2;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v12);
  if ( v4((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v5) >= 0 )
  {
    v11 = 0LL;
    v6 = v12;
    v7 = *(int (__fastcall **)(__int64, CDesktopPositioner **))(*(_QWORD *)v12 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    if ( v7(v6, &v11) >= 0 )
      v3 = (*(unsigned int (__fastcall **)(CDesktopPositioner *, __int64))(*(_QWORD *)v11 + 328LL))(v11, 7LL) != 0;
    v8 = (__int64)v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v3;
}
