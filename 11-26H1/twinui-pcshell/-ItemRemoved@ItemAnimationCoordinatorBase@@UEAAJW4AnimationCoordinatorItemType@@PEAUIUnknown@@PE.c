/*
 * XREFs of ?ItemRemoved@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x1804DFC10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x180024540 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801DFD6C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ItemAnimationCoordinatorBase::ItemRemoved(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        _BYTE *a4)
{
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  void *v11; // r8
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *v14; // r8
  __int64 v15; // r8
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  __int64 v19; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v21; // [rsp+50h] [rbp+20h] BYREF
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF

  *a4 = 1;
  if ( *(_BYTE *)(a1 + 232) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1) )
  {
    v22 = 0LL;
    v7 = **a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v8 = v7(a3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861, &v22);
    v9 = v8;
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, &v21);
      if ( v21 )
      {
        v18 = v22;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 40LL))(v21, &v19);
        v9 = 0;
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 != *(_QWORD *)(a1 + 80)
          || (v9 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                     a1 + 56,
                     v12 + 1,
                     v11),
              v9 >= 0) )
        {
          ++*(_QWORD *)(a1 + 64);
          v13 = (__int64 *)(16LL * *(_QWORD *)(a1 + 64) + *(_QWORD *)(a1 + 56) - 16LL);
          if ( v13 )
          {
            *v13 = 0LL;
            if ( v13 != &v18 )
            {
              *v13 = v18;
              v18 = 0LL;
            }
            v14 = v13 + 1;
            *v14 = 0LL;
            if ( v14 != &v19 )
            {
              *v14 = v19;
              v19 = 0LL;
            }
          }
        }
        _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)&v18);
        if ( v9 >= 0 )
        {
          LOBYTE(v15) = 1;
          v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 72LL))(v21, v22, v15);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x26,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
              (const char *)(unsigned int)v16);
          *a4 = 0;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
          v9 = 0;
          goto LABEL_20;
        }
        v10 = 36LL;
      }
      else
      {
        v9 = -2147023728;
        v10 = 35LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
        (const char *)(unsigned int)v8);
    }
LABEL_20:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    return (unsigned int)v9;
  }
  return 0LL;
}
