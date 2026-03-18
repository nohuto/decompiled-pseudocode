/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXAEA_K@Z @ 0x1801B7400
 * Callers:
 *     ?reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z @ 0x1801B73A0 (-reserve@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXQEAUD2D1_GRADIENT_STOP@@_K1@Z @ 0x1801BBD2C (-_Change_array@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX.c)
 *     ??$_Uninitialized_move@PEAUD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@YAPEAUD2D1_GRADIENT_STOP@@QEAU1@0PEAU1@AEAV?$allocator@UD2D1_GRADIENT_STOP@@@0@@Z @ 0x1801CA8C0 (--$_Uninitialized_move@PEAUD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@YAP.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1_Reallocation_guard@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAA@XZ @ 0x18027E948 (--1_Reallocation_guard@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@st.c)
 */

__int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::_Reallocate<0>(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rdi
  LPVOID v5; // rax
  __int64 v6; // rdx
  LPVOID v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r9
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 2);
  if ( *a2 > 0xCCCCCCCCCCCCCCCuLL )
    std::_Throw_bad_array_new_length();
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(20LL * *a2, (__int64)a2);
  v6 = a1[1];
  v7 = v5;
  v11[2] = *a2;
  v8 = *a1;
  v11[0] = a1;
  std::_Uninitialized_move<D2D1_GRADIENT_STOP *>(v8, v6, v5);
  v9 = *a2;
  v11[1] = 0LL;
  std::vector<D2D1_GRADIENT_STOP>::_Change_array(a1, v7, v3, v9);
  return std::vector<D2D1_GRADIENT_STOP>::_Reallocation_guard::~_Reallocation_guard(v11);
}
