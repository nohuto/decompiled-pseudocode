/*
 * XREFs of sub_18002E548 @ 0x18002E548
 * Callers:
 *     sub_1800381FC @ 0x1800381FC (sub_1800381FC.c)
 *     sub_180066AA4 @ 0x180066AA4 (sub_180066AA4.c)
 * Callees:
 *     sub_18002EB04 @ 0x18002EB04 (sub_18002EB04.c)
 */

__int64 __fastcall sub_18002E548(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_18002EB04(a1, v5, a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *(_QWORD *)(v3 + 8) < *(_QWORD *)(v6 + 40) )
    return *(_QWORD *)v2;
  return result;
}
