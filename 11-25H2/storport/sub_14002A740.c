/*
 * XREFs of sub_14002A740 @ 0x14002A740
 * Callers:
 *     sub_1400D1B4C @ 0x1400D1B4C (sub_1400D1B4C.c)
 *     sub_1400D1DC4 @ 0x1400D1DC4 (sub_1400D1DC4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14002A740(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  char *v7; // rdx
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
    v7 = *(char **)(a1 + 24);
  else
    v7 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a1, 0, MmCached, 0LL, 0, a3 | 0x40000000u);
  if ( v7 )
  {
    if ( a2 )
      a2 = a2 - *(unsigned int *)(a1 + 44) - *(_QWORD *)(a1 + 32);
    *a4 = &v7[a2];
    return 0LL;
  }
  else
  {
    result = 3221225626LL;
    *a4 = 0LL;
  }
  return result;
}
