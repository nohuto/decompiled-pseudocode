/*
 * XREFs of sub_18004E0D4 @ 0x18004E0D4
 * Callers:
 *     sub_1800434E4 @ 0x1800434E4 (sub_1800434E4.c)
 *     sub_18004D9D4 @ 0x18004D9D4 (sub_18004D9D4.c)
 *     sub_18004E254 @ 0x18004E254 (sub_18004E254.c)
 *     sub_18005DA34 @ 0x18005DA34 (sub_18005DA34.c)
 *     sub_180093D70 @ 0x180093D70 (sub_180093D70.c)
 * Callees:
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CD34 @ 0x18001CD34 (sub_18001CD34.c)
 */

__int64 __fastcall sub_18004E0D4(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)(a1 + 16);
  sub_18001CC6C(a1 + 16, &v6, a2);
  v3 = v7;
  if ( !sub_18001CD34(v4, v7) || v3 == *v2 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v3 + 64);
}
