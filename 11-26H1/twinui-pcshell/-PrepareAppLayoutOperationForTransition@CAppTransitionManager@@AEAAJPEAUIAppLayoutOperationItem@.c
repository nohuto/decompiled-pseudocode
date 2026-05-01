/*
 * XREFs of ?PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@PEAUIAppLayout@@1@Z @ 0x1804E288C
 * Callers:
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2A00 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801DFD6C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionManager::PrepareAppLayoutOperationForTransition(
        CAppTransitionManager *this,
        struct IAppLayoutOperationItem *a2,
        struct IAppLayout *a3,
        struct IAppLayout *a4)
{
  __int64 v4; // rax
  int (__fastcall *v9)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rbx
  __int64 *v10; // rax
  __int64 v11; // rax
  int v12; // esi
  void *v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rbx
  int v19[2]; // [rsp+20h] [rbp-28h] BYREF
  int v20; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a2;
  v22 = 0LL;
  v9 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v4 + 32);
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v22);
  if ( v9(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v10) < 0 )
  {
LABEL_13:
    v16 = 0;
    goto LABEL_14;
  }
  *(_QWORD *)v19 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)v19, &v22);
  v11 = *(_QWORD *)a2;
  v12 = 1;
  v20 = 1;
  if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(v11 + 96))(a2) == 2
    && (*(unsigned int (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a3 + 80LL))(a3, 1LL) == 1 )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a4 + 80LL))(a4, 1LL) )
      v12 = 3;
    v20 = v12;
  }
  v14 = *((_QWORD *)this + 30);
  if ( v14 != *((_QWORD *)this + 32)
    || (v15 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                (__int64)this + 232,
                v14 + 1,
                v13),
        v16 = v15,
        v15 >= 0) )
  {
    ++*((_QWORD *)this + 30);
    v17 = 16LL * *((_QWORD *)this + 30) + *((_QWORD *)this + 29) - 16LL;
    if ( v17 )
    {
      *(_QWORD *)v17 = *(_QWORD *)v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v17);
      *(_DWORD *)(v17 + 8) = v12;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v19);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC7,
    (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v19);
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  return v16;
}
