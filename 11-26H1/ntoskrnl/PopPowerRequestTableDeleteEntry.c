/*
 * XREFs of PopPowerRequestTableDeleteEntry @ 0x140AD31FC
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestDelete @ 0x140AD30B0 (PopPowerRequestDelete.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 */

BOOLEAN __fastcall PopPowerRequestTableDeleteEntry(int a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  return RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)&stru_140F12EA0.PriorityFloorCounts[8], &Buffer);
}
