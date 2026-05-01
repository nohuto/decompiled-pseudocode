/*
 * XREFs of ??$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByView@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806C58A4
 * Callers:
 *     ?_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x1801A9628 (-_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationVie.c)
 *     ?ContainsView@CAppLayout@@UEAAHPEAUIApplicationView@@@Z @ 0x1806C5FF0 (-ContainsView@CAppLayout@@UEAAHPEAUIApplicationView@@@Z.c)
 *     ?FindViewItem@CAppLayout@@UEAAJPEAUIApplicationView@@PEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1806C62A0 (-FindViewItem@CAppLayout@@UEAAJPEAUIApplicationView@@PEAPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z @ 0x1806C8350 (-_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1806C83D0 (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByView>(
        __int64 *a1,
        struct IUnknown **a2,
        struct IUnknown *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 i; // rsi
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, GUID *, __int64 *); // rbx
  __int64 *v12; // rax
  struct IUnknown *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  *a4 = 0LL;
  for ( i = 0LL; i < a1[1]; ++i )
  {
    v8 = *a1;
    v14 = 0LL;
    v9 = -1;
    v10 = *(_QWORD *)(v8 + 8 * i);
    v11 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v10 + 48LL);
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v14);
    if ( v11(v10, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v12) >= 0 )
      v9 = SHIsSameObject(v14, *a2) - 1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    if ( !v9 )
    {
      *a4 = i;
      return 0LL;
    }
  }
  return 2147647531LL;
}
