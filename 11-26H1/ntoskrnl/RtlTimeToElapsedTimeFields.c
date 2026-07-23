/*
 * XREFs of RtlTimeToElapsedTimeFields @ 0x140806AB0
 * Callers:
 *     <none>
 * Callees:
 *     TimeToDaysAndFraction @ 0x14047EB70 (TimeToDaysAndFraction.c)
 */

void __cdecl RtlTimeToElapsedTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  unsigned int v2; // kr00_4
  __int64 v3; // r11
  unsigned int v4; // r8d
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  v5 = 0;
  TimeToDaysAndFraction((__int64 *)Time, &v6, &v5);
  v2 = v5;
  *(_WORD *)(v3 + 4) = v6;
  *(_DWORD *)v3 = 0;
  *(_WORD *)(v3 + 12) = v2 % 0x3E8;
  v4 = v2 / 0x3E8 / 0x3C;
  *(_WORD *)(v3 + 6) = v4 / 0x3C;
  *(_WORD *)(v3 + 8) = v4 % 0x3C;
  *(_WORD *)(v3 + 10) = v2 / 0x3E8 % 0x3C;
}
