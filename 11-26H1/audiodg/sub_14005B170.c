/*
 * XREFs of sub_14005B170 @ 0x14005B170
 * Callers:
 *     sub_14005ABA8 @ 0x14005ABA8 (sub_14005ABA8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14005B170(__int64 a1, __int64 a2)
{
  int *i; // rbx
  __int64 j; // rdi

  for ( i = (int *)&off_1400E73E0; i != &dword_1400E7428; i += 6 )
  {
    if ( !(unsigned int)o__wcsicmp(*(_QWORD *)i, a1) )
    {
      for ( j = 0LL; (unsigned int)j < i[2]; j = (unsigned int)(j + 1) )
      {
        if ( !(unsigned int)o__wcsicmp(*(_QWORD *)(*((_QWORD *)i + 2) + 8 * j), a2) )
          return 0;
      }
    }
  }
  return 1;
}
