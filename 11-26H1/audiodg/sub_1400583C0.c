/*
 * XREFs of sub_1400583C0 @ 0x1400583C0
 * Callers:
 *     sub_140045560 @ 0x140045560 (sub_140045560.c)
 *     sub_1400581FC @ 0x1400581FC (sub_1400581FC.c)
 * Callees:
 *     sub_140058A10 @ 0x140058A10 (sub_140058A10.c)
 *     sub_1400590E8 @ 0x1400590E8 (sub_1400590E8.c)
 */

__int64 __fastcall sub_1400583C0(__int64 a1)
{
  unsigned int *v2; // rbx
  unsigned int *v3; // rdi
  __int64 result; // rax

  v2 = *(unsigned int **)(a1 + 32);
  v3 = *(unsigned int **)(a1 + 40);
  result = (char *)v3 - (char *)v2;
  if ( (unsigned __int64)((char *)v3 - (char *)v2) >= 0x10 )
  {
    while ( v2 != v3 )
    {
      sub_1400590E8(*v2, *((_QWORD *)v2 + 1));
      v2 += 4;
    }
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 32);
    return sub_140058A10(0LL, 254LL, 0LL);
  }
  return result;
}
