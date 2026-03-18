/*
 * XREFs of rimDoHandleAnyPnpRemovePendingDevicesWorkItem @ 0x14019FC54
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140035294 (rimHandleAnyPnpRemovePendingDevices.c)
 */

void __fastcall rimDoHandleAnyPnpRemovePendingDevicesWorkItem(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  RIMLockExclusive(v1 + 760);
  *(_DWORD *)(v1 + 1116) = 0;
  RIMUnlockExclusive(v1 + 760);
  rimHandleAnyPnpRemovePendingDevices((struct RawInputManagerObject *)v1);
}
