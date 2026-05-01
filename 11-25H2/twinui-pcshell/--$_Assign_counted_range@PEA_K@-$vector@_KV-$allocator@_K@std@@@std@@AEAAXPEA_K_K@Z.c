/*
 * XREFs of ??$_Assign_counted_range@PEA_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAXPEA_K_K@Z @ 0x180581D38
 * Callers:
 *     ?SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@@IPEA_K@Z @ 0x180583C50 (-SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Inte.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x180584E1C (-_Clear_and_reserve_geometric@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned __int64>::_Assign_counted_range<unsigned __int64 *>(
        char **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rdi
  char *v5; // r15
  size_t v7; // rbx
  unsigned __int64 v8; // rbp
  char *result; // rax

  v3 = *a1;
  v5 = a2;
  if ( a3 <= (a1[2] - *a1) >> 3 )
  {
    v8 = (a1[1] - v3) >> 3;
    if ( a3 <= v8 )
    {
      v7 = 8 * a3;
    }
    else
    {
      memmove_0(v3, a2, 8 * v8);
      v3 = a1[1];
      a2 = &v5[8 * v8];
      v7 = 8 * (a3 - v8);
    }
  }
  else
  {
    std::vector<unsigned __int64>::_Clear_and_reserve_geometric(a1, a3);
    v3 = *a1;
    v7 = 8 * a3;
    a2 = v5;
  }
  memmove_0(v3, a2, v7);
  result = &v3[v7];
  a1[1] = &v3[v7];
  return result;
}
