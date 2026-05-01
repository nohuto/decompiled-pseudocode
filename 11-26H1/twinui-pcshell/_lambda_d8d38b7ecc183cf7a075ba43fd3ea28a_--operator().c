/*
 * XREFs of _lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_::operator() @ 0x1804D5028
 * Callers:
 *     GridLayoutFactory::_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___ @ 0x1804D4DB0 (GridLayoutFactory--_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801DFD6C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z @ 0x1804D5924 (-SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_::operator()(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  int v3; // ebx
  void *v4; // r8
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD **)a1;
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL);
  v9 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  GridLayoutFactory::LayoutItem::SetHeight((GridLayoutFactory::LayoutItem *)&v9, v3);
  v5 = 0;
  v6 = v2[1];
  if ( v6 != v2[3]
    || (v5 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
               (__int64)v2,
               v6 + 1,
               v4),
        v5 >= 0) )
  {
    ++v2[1];
    v7 = 16LL * v2[1] + *v2 - 16LL;
    if ( v7 )
    {
      *(_QWORD *)v7 = 0LL;
      if ( (__int64 *)v7 != &v9 )
      {
        *(_QWORD *)v7 = v9;
        v9 = 0LL;
      }
      *(_DWORD *)(v7 + 8) = v10;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  return (unsigned int)v5;
}
