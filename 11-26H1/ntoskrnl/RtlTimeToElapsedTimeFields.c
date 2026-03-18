/*
 * XREFs of RtlTimeToElapsedTimeFields @ 0x140801010
 * Callers:
 *     <none>
 * Callees:
 *     TimeToDaysAndFraction @ 0x140485200 (TimeToDaysAndFraction.c)
 */

__int64 __fastcall RtlTimeToElapsedTimeFields(__int64 *a1)
{
  unsigned int v1; // kr00_4
  __int64 v2; // r11
  unsigned int v3; // r8d
  __int64 result; // rax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  v5 = 0;
  TimeToDaysAndFraction(a1, &v6, &v5);
  v1 = v5;
  *(_WORD *)(v2 + 4) = v6;
  *(_DWORD *)v2 = 0;
  *(_WORD *)(v2 + 12) = v1 % 0x3E8;
  v3 = v1 / 0x3E8 / 0x3C;
  *(_WORD *)(v2 + 6) = v3 / 0x3C;
  *(_WORD *)(v2 + 8) = v3 % 0x3C;
  result = (unsigned int)(__int16)v3;
  *(_WORD *)(v2 + 10) = v1 / 0x3E8 % 0x3C;
  return result;
}
