/*
 * XREFs of sub_180042544 @ 0x180042544
 * Callers:
 *     sub_180043168 @ 0x180043168 (sub_180043168.c)
 *     sub_1800521B0 @ 0x1800521B0 (sub_1800521B0.c)
 *     sub_180052608 @ 0x180052608 (sub_180052608.c)
 *     sub_1800533F0 @ 0x1800533F0 (sub_1800533F0.c)
 *     sub_180053D94 @ 0x180053D94 (sub_180053D94.c)
 *     sub_180054068 @ 0x180054068 (sub_180054068.c)
 *     sub_1800579C0 @ 0x1800579C0 (sub_1800579C0.c)
 *     sub_1800592E4 @ 0x1800592E4 (sub_1800592E4.c)
 *     sub_18006B040 @ 0x18006B040 (sub_18006B040.c)
 *     sub_18006B680 @ 0x18006B680 (sub_18006B680.c)
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 *     sub_1800817A0 @ 0x1800817A0 (sub_1800817A0.c)
 *     sub_180081DB0 @ 0x180081DB0 (sub_180081DB0.c)
 *     sub_1800820A4 @ 0x1800820A4 (sub_1800820A4.c)
 *     sub_180083D38 @ 0x180083D38 (sub_180083D38.c)
 *     sub_180083E30 @ 0x180083E30 (sub_180083E30.c)
 *     sub_1800C5D1C @ 0x1800C5D1C (sub_1800C5D1C.c)
 *     sub_1800C72D0 @ 0x1800C72D0 (sub_1800C72D0.c)
 * Callees:
 *     sub_1800425BC @ 0x1800425BC (sub_1800425BC.c)
 */

__int64 __fastcall sub_180042544(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  _DWORD *v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_1800425BC(a1, v5, a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *v3 < *(_DWORD *)(v6 + 32) )
    return *(_QWORD *)v2;
  return result;
}
