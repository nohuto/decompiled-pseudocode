/*
 * XREFs of rimDoSetInputModeWorkItem @ 0x1401E75A4
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     ?RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z @ 0x1401E74E8 (-RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z.c)
 */

void __fastcall rimDoSetInputModeWorkItem(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 24);
  RIMLockExclusive(v1 + 760);
  RIMSetInputManagerInputMode(v1, *(_DWORD *)(a1 + 96));
  RIMUnlockExclusive(v1 + 760);
}
