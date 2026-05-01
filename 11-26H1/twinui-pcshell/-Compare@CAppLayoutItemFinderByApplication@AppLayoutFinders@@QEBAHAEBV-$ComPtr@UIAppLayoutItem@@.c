/*
 * XREFs of ?Compare@CAppLayoutItemFinderByApplication@AppLayoutFinders@@QEBAHAEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@0@Z @ 0x1806C5E88
 * Callers:
 *     ??$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByApplication@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806C57C8 (--$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@U.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AppLayoutFinders::CAppLayoutItemFinderByApplication::Compare(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v5; // esi
  int (__fastcall *v6)(__int64, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, __int64 *); // rdi
  __int64 v10; // rdx
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF
  __int64 v13; // [rsp+60h] [rbp+40h] BYREF
  __int64 v14; // [rsp+68h] [rbp+48h] BYREF

  v13 = a3;
  v3 = *a2;
  v14 = 0LL;
  v5 = -1;
  v6 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 48LL);
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v14);
  if ( v6(v3, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v7) >= 0 )
  {
    v8 = v14;
    v12 = 0LL;
    v9 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    if ( v9(v8, &v12) >= 0 )
    {
      v10 = *a1;
      LODWORD(v13) = 0;
      (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 104LL))(v12, v10, &v13);
      v5 = ((_DWORD)v13 != 0) - 1;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return v5;
}
