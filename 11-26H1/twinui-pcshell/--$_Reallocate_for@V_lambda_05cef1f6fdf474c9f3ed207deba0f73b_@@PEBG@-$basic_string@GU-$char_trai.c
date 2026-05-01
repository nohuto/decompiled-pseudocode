/*
 * XREFs of ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x18013D38C
 * Callers:
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18002F490 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180035E18 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x1806AA2A0 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180033F54 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 size_of; // rax
  _WORD *v10; // rax
  _WORD *v11; // rbp

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v7 = a1[3];
  v8 = std::wstring::_Calculate_growth(a2, v7, 0x7FFFFFFFFFFFFFFEuLL);
  size_of = std::_Get_size_of_n<2>(v8 + 1);
  v10 = (_WORD *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  a1[3] = v8;
  a1[2] = a2;
  v11 = v10;
  memcpy_0(v10, a4, 2 * a2);
  v11[a2] = 0;
  if ( v7 > 7 )
    std::_Deallocate<16>(*a1, 2 * v7 + 2);
  *a1 = v11;
  return a1;
}
