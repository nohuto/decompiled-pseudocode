/*
 * XREFs of PopPowerRequestTableInsertEntry @ 0x140B01B10
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140436FDC (PopPowerRequestCreateCommon.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403B88C0 (RtlInsertElementGenericTableAvl.c)
 */

PVOID __fastcall PopPowerRequestTableInsertEntry(int a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN v3; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  DWORD2(v2) = a1;
  return RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)&stru_140F12D20.ApcStateFill[40], &v2, 0x10u, &v3);
}
