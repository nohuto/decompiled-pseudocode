/*
 * XREFs of sub_18005CCF4 @ 0x18005CCF4
 * Callers:
 *     sub_18005BCA4 @ 0x18005BCA4 (sub_18005BCA4.c)
 *     sub_1800DC066 @ 0x1800DC066 (sub_1800DC066.c)
 * Callees:
 *     sub_18005C374 @ 0x18005C374 (sub_18005C374.c)
 */

__int64 __fastcall sub_18005CCF4(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18005C374(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
