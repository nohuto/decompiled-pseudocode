/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@1@V?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@@Z @ 0x18057362C
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@?$map@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@2@Z @ 0x1805742B4 (--$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$?0V?$tuple@AEBQEAUHWND__@@@std@@V?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@$0A@$$Z$0A@$00$01@?$pair@QEAUHWND__@@UExeData@@@std@@AEAA@AEAV?$tuple@AEBQEAUHWND__@@@1@AEAV?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$0A@$00$01@1@@Z @ 0x180573788 (--$-0V-$tuple@AEBQEAUHWND__@@@std@@V-$tuple@AEAIAEBV-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  char *v5; // rax
  __int64 i; // rcx
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  __int64 *v11; // [rsp+80h] [rbp+28h]
  _QWORD *v12; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, __int64 *);
  v12 = va_arg(va1, _QWORD *);
  *a1 = a2;
  a1[1] = 0LL;
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(0x70uLL);
  a1[1] = v5;
  v8[0] = *v12;
  v8[1] = v12[1];
  v8[2] = v12[2];
  v9 = *v11;
  ____0V__tuple_AEBQEAUHWND_____std__V__tuple_AEAIAEBV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std__AEBV12__1__0A___Z_0A__00_01___pair_QEAUHWND____UExeData___std__AEAA_AEAV__tuple_AEBQEAUHWND_____1_AEAV__tuple_AEAIAEBV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std__AEBV12__1_U__integer_sequence__K_0A__1_U__integer_sequence__K_0A__00_01_1__Z(
    v5 + 32,
    (__int64 *)va,
    v8);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
