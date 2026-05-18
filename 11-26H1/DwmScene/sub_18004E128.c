/*
 * XREFs of sub_18004E128 @ 0x18004E128
 * Callers:
 *     sub_18004DB04 @ 0x18004DB04 (sub_18004DB04.c)
 *     sub_18006DC9C @ 0x18006DC9C (sub_18006DC9C.c)
 *     sub_18007C6B8 @ 0x18007C6B8 (sub_18007C6B8.c)
 * Callees:
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CD34 @ 0x18001CD34 (sub_18001CD34.c)
 */

__int64 __fastcall sub_18004E128(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)(a1 + 2088);
  sub_18001CC6C(a1 + 2088, &v6, a2);
  v3 = v7;
  if ( !sub_18001CD34(v4, v7) || v3 == *v2 )
    return 511LL;
  else
    return *(unsigned __int16 *)(v3 + 64);
}
