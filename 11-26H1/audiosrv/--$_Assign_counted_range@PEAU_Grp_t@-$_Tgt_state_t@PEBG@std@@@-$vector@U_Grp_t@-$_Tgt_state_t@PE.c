/*
 * XREFs of ??$_Assign_counted_range@PEAU_Grp_t@?$_Tgt_state_t@PEBG@std@@@?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@AEAAXPEAU_Grp_t@?$_Tgt_state_t@PEBG@1@_K@Z @ 0x180132EFC
 * Callers:
 *     ??4?$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z @ 0x180135504 (--4-$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@AEAAX_K@Z @ 0x18013EC58 (-_Clear_and_reserve_geometric@-$vector@U_Grp_t@-$_Tgt_state_t@PEBG@std@@V-$allocator@U_Grp_t@-$_.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

char *__fastcall std::vector<std::_Tgt_state_t<unsigned short const *>::_Grp_t,std::allocator<std::_Tgt_state_t<unsigned short const *>::_Grp_t>>::_Assign_counted_range<std::_Tgt_state_t<unsigned short const *>::_Grp_t *>(
        void **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 v4; // rsi
  char *v5; // r15
  unsigned __int64 v7; // rbp
  size_t v8; // rsi
  char *result; // rax

  v3 = (char *)*a1;
  v4 = a3;
  v5 = a2;
  if ( a3 <= ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4 )
  {
    v7 = ((_BYTE *)a1[1] - v3) >> 4;
    if ( a3 > v7 )
    {
      memmove_0(*a1, a2, 16 * v7);
      v3 = (char *)a1[1];
      a2 = &v5[16 * v7];
      v4 -= v7;
    }
  }
  else
  {
    std::vector<std::_Tgt_state_t<unsigned short const *>::_Grp_t,std::allocator<std::_Tgt_state_t<unsigned short const *>::_Grp_t>>::_Clear_and_reserve_geometric(
      a1,
      a3);
    v3 = (char *)*a1;
    a2 = v5;
  }
  v8 = 16 * v4;
  memmove_0(v3, a2, v8);
  result = &v3[v8];
  a1[1] = &v3[v8];
  return result;
}
