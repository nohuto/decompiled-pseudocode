/*
 * XREFs of WmipWaitForCollectionEnabled @ 0x140824370
 * Callers:
 *     WmipSendEnableRequest @ 0x140A0AF48 (WmipSendEnableRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 */

NTSTATUS __fastcall WmipWaitForCollectionEnabled(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 16) & 8) == 0 )
  {
    KeInitializeEvent(*(PRKEVENT *)(a1 + 96), NotificationEvent, 0);
    *(_DWORD *)(a1 + 16) |= 8u;
  }
  KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
  KeWaitForSingleObject(*(PVOID *)(a1 + 96), Executive, 0, 0, 0LL);
  return KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
}
