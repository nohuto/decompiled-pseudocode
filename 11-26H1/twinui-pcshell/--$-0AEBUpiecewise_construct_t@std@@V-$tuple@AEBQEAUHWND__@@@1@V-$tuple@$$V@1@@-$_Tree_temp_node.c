/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180130948
 * Callers:
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18012FFFC (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$?0V?$tuple@AEBQEAUHWND__@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@AEAA@AEAV?$tuple@AEBQEAUHWND__@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x18050E170 (--$-0V-$tuple@AEBQEAUHWND__@@@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@QEAUHWND__@@UWindowCloakInfo@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  __int64 v5; // rax
  __int64 i; // rcx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  __int64 *v10; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, __int64 *);
  *a1 = a2;
  a1[1] = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(48LL);
  a1[1] = v5;
  v8 = *v10;
  ____0V__tuple_AEBQEAUHWND_____std__V__tuple___V_1__0A___Z_S___pair_QEAUHWND____UWindowCloakInfo_CDesktopPositioner___std__AEAA_AEAV__tuple_AEBQEAUHWND_____1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
    v5 + 32,
    (__int64 *)va);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
