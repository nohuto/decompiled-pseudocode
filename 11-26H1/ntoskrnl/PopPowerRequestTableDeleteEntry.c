/*
 * XREFs of PopPowerRequestTableDeleteEntry @ 0x140AD624C
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140436FDC (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestDelete @ 0x140AD6100 (PopPowerRequestDelete.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 */

BOOLEAN __fastcall PopPowerRequestTableDeleteEntry(int a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  return RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)&stru_140F12D20.ApcStateFill[40], &Buffer);
}
