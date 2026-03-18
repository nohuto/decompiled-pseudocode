/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x140ACDA74
 * Callers:
 *     WmipForwardWmiIrp @ 0x140A0F03C (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x140ACD8E8 (WmipRegisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(char a1)
{
  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  if ( *(char *)(*(_QWORD *)&EtwpSecurityLock.ForegroundLossTime + 76LL) < a1 )
    *(_BYTE *)(*(_QWORD *)&EtwpSecurityLock.ForegroundLossTime + 76LL) = a1;
  return KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
}
