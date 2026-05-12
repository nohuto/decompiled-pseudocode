/*
 * XREFs of sub_1400E6350 @ 0x1400E6350
 * Callers:
 *     sub_1400E63C4 @ 0x1400E63C4 (sub_1400E63C4.c)
 * Callees:
 *     sub_1400D44A8 @ 0x1400D44A8 (sub_1400D44A8.c)
 *     sub_14010362C @ 0x14010362C (sub_14010362C.c)
 */

__int64 __fastcall sub_1400E6350(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rdi
  __int64 *i; // rbx

  result = *(unsigned int *)(a1 + 136);
  if ( (result & 0x200) != 0 )
  {
    sub_1400D44A8(*(_QWORD *)(a1 + 128), a1);
    *(_QWORD *)(a1 + 136) &= ~0x200uLL;
    v3 = (__int64 *)(a1 + 640);
    for ( result = *v3; (__int64 *)result != v3; result = *(_QWORD *)result )
      *(_QWORD *)(result + 88) &= ~2uLL;
    for ( i = (__int64 *)*v3; i != v3; i = (__int64 *)*i )
      result = sub_14010362C(i - 3);
  }
  return result;
}
