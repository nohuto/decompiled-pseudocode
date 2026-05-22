/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEAV01@1@Z @ 0x1800C4AFC
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800C4808 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800998FC (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x1800C5FE8 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 *     ?_Take_contents@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXAEAV12@@Z @ 0x1800C601C (-_Take_contents@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXAEAV12@@Z.c)
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

__int64 *__fastcall std::string::string(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v5; // rsi
  _QWORD *v6; // r14
  size_t v7; // rbp
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r13
  __int64 v11; // r9
  __int64 *v12; // rax
  size_t v13; // r8
  const void *v14; // rdx
  char *v15; // rcx
  char *v16; // rbx
  __int64 v17; // rbx
  char *v18; // rax
  char *v19; // r12

  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  v5 = a4;
  a1[3] = 0LL;
  v6 = a3;
  v7 = a3[2];
  v8 = a4[2];
  v9 = a4[3];
  v10 = v8 + v7;
  if ( v8 <= a3[3] - v7 && v9 <= a3[3] )
  {
    std::string::_Take_contents(a1, a3);
    v12 = a1;
    if ( (unsigned __int64)a1[3] > 0xF )
      v12 = (__int64 *)*a1;
    if ( *(_QWORD *)(v11 + 24) > 0xFuLL )
      v5 = *(_QWORD **)v11;
    v13 = v8 + 1;
    v14 = v5;
    v15 = (char *)v12 + v7;
LABEL_8:
    memcpy_0(v15, v14, v13);
    a1[2] = v10;
    return a1;
  }
  if ( v7 <= v9 - v8 )
  {
    std::string::_Take_contents(a1, a4);
    v16 = (char *)*a1;
    memmove_0((void *)(*a1 + v7), (const void *)*a1, v8 + 1);
    if ( v6[3] > 0xFuLL )
      v6 = (_QWORD *)*v6;
    v13 = v7;
    v14 = v6;
    v15 = v16;
    goto LABEL_8;
  }
  if ( 0x7FFFFFFFFFFFFFFFLL - v7 < v8 )
    std::_Xlen_string();
  v17 = std::string::_Calculate_growth(v8 + v7);
  v18 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(v17 + 1);
  *a1 = (__int64)v18;
  v19 = v18;
  a1[2] = v10;
  a1[3] = v17;
  if ( v6[3] > 0xFuLL )
    v6 = (_QWORD *)*v6;
  memcpy_0(v18, v6, v7);
  if ( v5[3] > 0xFuLL )
    v5 = (_QWORD *)*v5;
  memcpy_0(&v19[v7], v5, v8 + 1);
  return a1;
}
