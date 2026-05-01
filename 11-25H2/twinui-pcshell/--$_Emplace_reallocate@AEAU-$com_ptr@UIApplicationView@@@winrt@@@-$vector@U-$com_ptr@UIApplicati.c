/*
 * XREFs of ??$_Emplace_reallocate@AEAU?$com_ptr@UIApplicationView@@@winrt@@@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@AEAAPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU23@AEAU23@@Z @ 0x1800FD3FC
 * Callers:
 *     ?GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AV?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@XZ @ 0x180272FEC (-GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800FE32C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@AEAAXQEAU?$com_ptr@UIApplicationView@@@winrt@@_K1@Z @ 0x1800FEE38 (-_Change_array@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicat.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Uninitialized_move@PEAU?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@YAPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU12@0PEAU12@AEAV?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@0@@Z @ 0x1802C8B38 (--$_Uninitialized_move@PEAU-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplic.c)
 */

__int64 *__fastcall std::vector<winrt::com_ptr<IApplicationView>>::_Emplace_reallocate<winrt::com_ptr<IApplicationView> &>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // rax
  __int64 *v13; // rdi
  __int64 *v14; // r14
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rcx
  __int64 *result; // rax
  char *v19; // [rsp+20h] [rbp-48h]
  void *v20; // [rsp+20h] [rbp-48h]
  __int64 *v21; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (__int64 *)v12;
  v19 = v12;
  v14 = (__int64 *)&v12[8 * v5];
  try
  {
    *v14 = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
    v21 = v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<winrt::com_ptr<IApplicationView> *,std::allocator<winrt::com_ptr<IApplicationView>>>(
        v17,
        a2,
        v13);
      v21 = v13;
      v16 = v14 + 1;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<winrt::com_ptr<IApplicationView> *,std::allocator<winrt::com_ptr<IApplicationView>>>(
      v17,
      v15,
      v16);
    std::vector<winrt::com_ptr<IApplicationView>>::_Change_array(a1, v13, v8, v7, v19);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<winrt::com_ptr<IApplicationView>>>(v21, v14 + 1);
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(8 * v7));
    throw;
  }
  return result;
}
