/*
 * XREFs of ?assign@?$vector@EV?$allocator@E@std@@@std@@QEAAX_KAEBE@Z @ 0x180126CA0
 * Callers:
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180126880 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x18020DE48 (-_Clear_and_reserve_geometric@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

char *__fastcall std::vector<unsigned char>::assign(void **a1, size_t a2, unsigned __int8 *a3)
{
  char *v3; // rbx
  int v7; // edx
  unsigned __int64 v8; // rbp
  char *result; // rax
  char *v10; // rbx
  size_t v11; // rdi

  v3 = (char *)*a1;
  if ( a2 > (_BYTE *)a1[2] - (_BYTE *)*a1 )
  {
    std::vector<unsigned char>::_Clear_and_reserve_geometric();
    v7 = *a3;
    v3 = (char *)*a1;
  }
  else
  {
    v7 = *a3;
    v8 = (_BYTE *)a1[1] - v3;
    if ( a2 > v8 )
    {
      memset_0(*a1, v7, (_BYTE *)a1[1] - v3);
      v10 = (char *)a1[1];
      v11 = a2 - v8;
      memset_0(v10, *a3, v11);
      result = &v10[v11];
      goto LABEL_4;
    }
  }
  memset_0(v3, v7, a2);
  result = &v3[a2];
LABEL_4:
  a1[1] = result;
  return result;
}
