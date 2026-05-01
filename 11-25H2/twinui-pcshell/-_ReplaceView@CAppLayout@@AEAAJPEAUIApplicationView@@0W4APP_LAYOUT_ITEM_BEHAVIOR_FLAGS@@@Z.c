/*
 * XREFs of ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1806A04F8
 * Callers:
 *     ?ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18069F480 (-ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800D5E78 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ABA34 (-s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1802B1C54 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByView@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18069DADC (--$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 *     ?_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1806A0154 (-_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z @ 0x1806A0480 (-_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1806A13F8 (-s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayout::_ReplaceView(__int64 *a1, __int64 a2, struct IUnknown *a3, unsigned int a4)
{
  unsigned int v7; // ebx
  __int64 *v8; // r14
  struct IUnknown *v9; // r8
  int v10; // edi
  __int64 v11; // rdx
  unsigned __int64 v13; // rsi
  int BufferItem; // eax
  unsigned int v15; // esi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  unsigned int v20[2]; // [rsp+30h] [rbp-40h] BYREF
  void *v21; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h] BYREF
  __int128 v24; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  if ( a2 || a3 )
  {
    v22 = 0LL;
    if ( a2 )
    {
      v23 = 0LL;
      *(_QWORD *)v20 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v20);
      v8 = a1 + 13;
      v10 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByView>(
              a1 + 13,
              (struct IUnknown **)v20,
              v9,
              &v22);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      if ( v10 < 0 )
      {
        v11 = 1061LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
          (const char *)(unsigned int)v10);
        return (unsigned int)v10;
      }
      v13 = v22;
    }
    else
    {
      CAppLayout::_RemoveView((CAppLayout *)a1, a3);
      v20[0] = 0;
      BufferItem = CAppLayout::_FindBufferItem((CAppLayout *)a1, 0LL, v20);
      v15 = BufferItem;
      if ( BufferItem < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x430,
          (int)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
          (const char *)(unsigned int)BufferItem);
        return v15;
      }
      v13 = v20[0];
      v8 = a1 + 13;
    }
    v16 = *v8;
    v24 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(v16 + 8 * v13) + 56LL))(
      *(_QWORD *)(v16 + 8 * v13),
      0LL,
      &v24);
    v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::RemoveAt(
            v8,
            v13);
    if ( v10 < 0 )
    {
      v11 = 1081LL;
      goto LABEL_7;
    }
    v21 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    if ( a3 )
    {
      v17 = CAppLayoutItem::s_CreateInstance_View(a3, a4, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v21);
      v7 = v17;
      if ( v17 < 0 )
      {
        v18 = 1088LL;
LABEL_19:
        v19 = (unsigned int)v17;
        goto LABEL_20;
      }
    }
    else
    {
      v17 = CAppLayoutItem::s_CreateInstance_Buffer(&GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v21);
      v7 = v17;
      if ( v17 < 0 )
      {
        v18 = 1093LL;
        goto LABEL_19;
      }
    }
    (*(void (__fastcall **)(void *, _QWORD, __int128 *))(*(_QWORD *)v21 + 104LL))(v21, 0LL, &v24);
    *(_QWORD *)v20 = v21;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)v20);
    v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
           v8,
           v20,
           v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
    if ( (v7 & 0x80000000) == 0 )
    {
      v7 = 0;
      goto LABEL_24;
    }
    v19 = v7;
    v18 = 1101LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
      (const char *)v19);
LABEL_24:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    return v7;
  }
  v7 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41F,
    (int)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
    (const char *)0x80070057LL);
  return v7;
}
