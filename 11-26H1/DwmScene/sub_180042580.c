/*
 * XREFs of sub_180042580 @ 0x180042580
 * Callers:
 *     sub_1800432F4 @ 0x1800432F4 (sub_1800432F4.c)
 *     sub_1800438CC @ 0x1800438CC (sub_1800438CC.c)
 * Callees:
 *     sub_180042610 @ 0x180042610 (sub_180042610.c)
 */

__int64 __fastcall sub_180042580(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  _WORD *v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_180042610(a1, v5, a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *v3 < *(_WORD *)(v6 + 28) )
    return *(_QWORD *)v2;
  return result;
}
