/*
 * XREFs of ??$_Assign_counted_range@PEAI@?$vector@IV?$allocator@I@std@@@std@@AEAAXPEAI_K@Z @ 0x180132E3C
 * Callers:
 *     ??4?$vector@_NV?$allocator@_N@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801355D4 (--4-$vector@_NV-$allocator@_N@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x18013EBE4 (-_Clear_and_reserve_geometric@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned int>::_Assign_counted_range<unsigned int *>(
        void **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rdi
  char *v5; // r15
  size_t v7; // rbx
  unsigned __int64 v8; // rbx
  char *result; // rax

  v3 = (char *)*a1;
  v5 = a2;
  if ( a3 <= ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2 )
  {
    v8 = ((_BYTE *)a1[1] - v3) >> 2;
    if ( a3 <= v8 )
    {
      v7 = 4 * a3;
    }
    else
    {
      memmove_0(*a1, a2, 4 * v8);
      v3 = (char *)a1[1];
      a2 = &v5[4 * v8];
      v7 = 4 * (a3 - v8);
    }
  }
  else
  {
    std::vector<unsigned int>::_Clear_and_reserve_geometric(a1, a3);
    v3 = (char *)*a1;
    v7 = 4 * a3;
    a2 = v5;
  }
  memmove_0(v3, a2, v7);
  result = &v3[v7];
  a1[1] = &v3[v7];
  return result;
}
