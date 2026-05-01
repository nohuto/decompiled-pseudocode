/*
 * XREFs of ?_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z @ 0x1806C778C
 * Callers:
 *     ?_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x1801A9628 (-_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationVie.c)
 *     ?AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z @ 0x1806C5C80 (-AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180086F00 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1802A5250 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$FindEx@VCAppLayoutItemFinderByItem@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByItem@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806C5834 (--$FindEx@VCAppLayoutItemFinderByItem@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 *     ??$_InternalSetAtIndex@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAX_K$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@Z @ 0x1806C5A18 (--$_InternalSetAtIndex@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPt.c)
 *     ??0CAppLayoutItemFinderByItem@AppLayoutFinders@@QEAA@PEAUIAppLayoutItem@@@Z @ 0x1806C5B30 (--0CAppLayoutItemFinderByItem@AppLayoutFinders@@QEAA@PEAUIAppLayoutItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayout::_AddItemHelper(_QWORD *a1, _QWORD *a2, int a3, struct IAppLayoutItem *a4)
{
  int v7; // ebx
  unsigned __int64 v8; // r8
  void *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 i; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  void *v18; // r8
  __int64 v19; // rdx
  struct IUnknown **v20; // rax
  __int64 v21; // r8
  __int64 v22; // rbx
  _QWORD *v24; // [rsp+30h] [rbp-30h] BYREF
  __int128 v25; // [rsp+38h] [rbp-28h] BYREF
  __int128 v26; // [rsp+48h] [rbp-18h] BYREF

  v7 = -2147024809;
  if ( !a3 )
  {
    v24 = a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v24);
    v8 = 0LL;
    goto LABEL_22;
  }
  if ( a3 == 1 )
  {
    v24 = a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v24);
    v10 = a1[14];
    v7 = 0;
    if ( v10 == a1[16] )
    {
      v7 = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
             (__int64)(a1 + 13),
             v10 + 1,
             v9);
      if ( v7 < 0 )
        goto LABEL_24;
    }
    v11 = a1[14];
    v12 = a1 + 13;
    a1[14] = v11 + 1;
LABEL_7:
    CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InternalSetAtIndex<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
      v12,
      v11,
      (__int64 *)&v24);
LABEL_24:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    return (unsigned int)v7;
  }
  if ( (unsigned int)(a3 - 2) <= 1 )
  {
    v24 = 0LL;
    *(_QWORD *)&v26 = 0LL;
    v20 = (struct IUnknown **)AppLayoutFinders::CAppLayoutItemFinderByItem::CAppLayoutItemFinderByItem(
                                (AppLayoutFinders::CAppLayoutItemFinderByItem *)&v25,
                                a4);
    v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByItem>(
           a1 + 13,
           v20,
           v21,
           (unsigned __int64 *)&v24);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    if ( v7 >= 0 )
    {
      v22 = (__int64)v24;
      if ( a3 != 3 )
        v22 = (__int64)v24 + 1;
      v24 = a2;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v24);
      v8 = v22;
LABEL_22:
      v17 = a1 + 13;
LABEL_23:
      v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
             v17,
             (__int64)&v24,
             v8);
      goto LABEL_24;
    }
  }
  else if ( a3 == 4 )
  {
    v13 = *a2;
    v25 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int128 *))(v13 + 56))(a2, 0LL, &v25);
    v14 = a1[14];
    for ( i = 0LL; i < v14; ++i )
    {
      v16 = a1[13];
      v26 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(v16 + 8 * i) + 56LL))(
        *(_QWORD *)(v16 + 8 * i),
        0LL,
        &v26);
      if ( SDWORD2(v25) <= (int)v26 )
      {
        v24 = a2;
        Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v24);
        v8 = i;
        v17 = a1 + 13;
        goto LABEL_23;
      }
    }
    v24 = a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v24);
    v19 = a1[14];
    v7 = 0;
    if ( v19 == a1[16] )
    {
      v7 = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
             (__int64)(a1 + 13),
             v19 + 1,
             v18);
      if ( v7 < 0 )
        goto LABEL_24;
    }
    v11 = a1[14];
    v12 = a1 + 13;
    a1[14] = v11 + 1;
    goto LABEL_7;
  }
  return (unsigned int)v7;
}
