/*
 * XREFs of ??$_Emplace_reallocate@PEAG@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAPEAG@Z @ 0x18010E504
 * Callers:
 *     ?GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18010E830 (-GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV-$vector@V-$basic.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180023B44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18002F834 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18010E088 (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ??1_Reallocation_guard@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x18010E108 (--1_Reallocation_guard@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-.c)
 *     ?_Calculate_growth@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBA_K_K@Z @ 0x18010E274 (-_Calculate_growth@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$all.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x18010E2B0 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<std::wstring>::_Emplace_reallocate<unsigned short *>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r14
  unsigned __int64 size_of; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rcx
  __int64 *v17; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-48h]
  _QWORD *v20; // [rsp+38h] [rbp-40h]
  __int64 v21; // [rsp+40h] [rbp-38h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<std::wstring>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<32>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = (__int64)v11 + (v6 & 0xFFFFFFFFFFFFFFE0uLL);
  v17 = a1;
  v18 = v11;
  v19 = v9;
  v20 = (_QWORD *)(v12 + 32);
  v21 = v12 + 32;
  std::wstring::wstring(v12, *a3);
  v20 = (_QWORD *)v12;
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<std::wstring *>(v15, a2, v11);
    v20 = v11;
    v14 = (_QWORD *)(v12 + 32);
    v13 = a1[1];
    v15 = a2;
  }
  std::_Uninitialized_move<std::wstring *>(v15, v13, v14);
  v18 = 0LL;
  std::vector<std::wstring>::_Change_array((__int64)a1, (__int64)v11, v8, v9);
  std::vector<std::wstring>::_Reallocation_guard::~_Reallocation_guard((__int64)&v17);
  return v12;
}
