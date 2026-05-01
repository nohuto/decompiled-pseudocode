/*
 * XREFs of ?_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z @ 0x18069F89C
 * Callers:
 *     ?_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x1801B09E8 (-_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationVie.c)
 *     ?AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z @ 0x18069DE40 (-AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C594 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1802B1C54 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$FindEx@VCAppLayoutItemFinderByItem@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByItem@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18069DA70 (--$FindEx@VCAppLayoutItemFinderByItem@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 *     ??4?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z @ 0x18069DD28 (--4-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayout::_AddItemHelper(_QWORD *a1, struct IUnknown *a2, int a3, __int64 a4)
{
  int v7; // ebx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r8
  int v10; // eax
  __int64 *v11; // rcx
  void *v12; // r8
  __int64 v13; // rdx
  __int64 *v14; // rdx
  struct IUnknown v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 i; // rbx
  __int64 v18; // rax
  void *v19; // r8
  __int64 v20; // rdx
  __int64 *v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rbx
  struct IUnknown *v25; // [rsp+30h] [rbp-40h] BYREF
  struct IUnknown *v26; // [rsp+38h] [rbp-38h] BYREF
  struct IUnknown *v27; // [rsp+40h] [rbp-30h] BYREF
  __int128 v28; // [rsp+48h] [rbp-28h] BYREF
  __int128 v29; // [rsp+58h] [rbp-18h] BYREF

  v7 = -2147024809;
  if ( !a3 )
  {
    v25 = a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v25);
    v8 = a1 + 13;
    v9 = 0LL;
LABEL_3:
    v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
            v8,
            &v25,
            v9);
    v11 = (__int64 *)&v25;
    goto LABEL_28;
  }
  if ( a3 == 1 )
  {
    v26 = a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v26);
    v13 = a1[14];
    v7 = 0;
    if ( v13 != a1[16]
      || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                 (__int64)(a1 + 13),
                 v13 + 1,
                 v12),
          v7 >= 0) )
    {
      v14 = (__int64 *)(a1[13] + 8 * a1[14]++);
      if ( v14 )
      {
        *v14 = 0LL;
        if ( v14 != (__int64 *)&v26 )
        {
          v26 = 0LL;
          *v14 = (__int64)a2;
        }
      }
    }
    v11 = (__int64 *)&v26;
    goto LABEL_29;
  }
  if ( (unsigned int)(a3 - 2) <= 1 )
  {
    *(_QWORD *)&v28 = 0LL;
    *(_QWORD *)&v29 = 0LL;
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutItem>::operator=((__int64 *)&v25, a4);
    v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByItem>(
           a1 + 13,
           &v25,
           v22,
           (unsigned __int64 *)&v28);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
    if ( v7 >= 0 )
    {
      v23 = v28;
      if ( a3 != 3 )
        v23 = v28 + 1;
      *(_QWORD *)&v28 = a2;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v28);
      v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
              a1 + 13,
              &v28,
              v23);
      v11 = (__int64 *)&v28;
LABEL_28:
      v7 = v10;
LABEL_29:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
    }
  }
  else if ( a3 == 4 )
  {
    v15.lpVtbl = a2->lpVtbl;
    v28 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, _QWORD, __int128 *))v15.lpVtbl[2].AddRef)(a2, 0LL, &v28);
    v16 = a1[14];
    for ( i = 0LL; i < v16; ++i )
    {
      v18 = a1[13];
      v29 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(v18 + 8 * i) + 56LL))(
        *(_QWORD *)(v18 + 8 * i),
        0LL,
        &v29);
      if ( SDWORD2(v28) <= (int)v29 )
      {
        v25 = a2;
        Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v25);
        v9 = i;
        v8 = a1 + 13;
        goto LABEL_3;
      }
    }
    v27 = a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v27);
    v20 = a1[14];
    v7 = 0;
    if ( v20 != a1[16]
      || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                 (__int64)(a1 + 13),
                 v20 + 1,
                 v19),
          v7 >= 0) )
    {
      v21 = (__int64 *)(a1[13] + 8 * a1[14]++);
      if ( v21 )
      {
        *v21 = 0LL;
        if ( v21 != (__int64 *)&v27 )
        {
          v27 = 0LL;
          *v21 = (__int64)a2;
        }
      }
    }
    v11 = (__int64 *)&v27;
    goto LABEL_29;
  }
  return (unsigned int)v7;
}
