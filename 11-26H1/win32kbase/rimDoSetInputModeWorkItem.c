/*
 * XREFs of rimDoSetInputModeWorkItem @ 0x1401BFFC0
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     ?RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z @ 0x14017B9D8 (-RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z.c)
 */

void __fastcall rimDoSetInputModeWorkItem(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 24);
  RIMLockExclusive(v1 + 760);
  RIMSetInputManagerInputMode(v1, *(_DWORD *)(a1 + 96));
  RIMUnlockExclusive(v1 + 760);
}
