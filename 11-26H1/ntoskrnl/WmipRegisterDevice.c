/*
 * XREFs of WmipRegisterDevice @ 0x140ACD8E8
 * Callers:
 *     IoWMIRegistrationControl @ 0x140ACD740 (IoWMIRegistrationControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     WmipDeregisterRegEntry @ 0x1403B6EF0 (WmipDeregisterRegEntry.c)
 *     WmipUnreferenceRegEntry @ 0x1403B7080 (WmipUnreferenceRegEntry.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     IoGetAttachedDeviceReference @ 0x1403EB070 (IoGetAttachedDeviceReference.c)
 *     ObReferenceObjectByPointer @ 0x14045F750 (ObReferenceObjectByPointer.c)
 *     WmipFindRegEntryByDevice @ 0x1404961EC (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x1404E79BC (WmipAllocRegEntry.c)
 *     WmipRegisterOrUpdateDS @ 0x140A0B774 (WmipRegisterOrUpdateDS.c)
 *     WmipUpdateDeviceStackSize @ 0x140ACDA74 (WmipUpdateDeviceStackSize.c)
 *     WmipQueueRegWork @ 0x140ACDAC8 (WmipQueueRegWork.c)
 */

__int64 __fastcall WmipRegisterDevice(struct _DEVICE_OBJECT *Object, int a2)
{
  int v2; // ebx
  unsigned int v3; // ebp
  char *RegEntryByDevice; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rdi
  __int64 v7; // rcx
  NTSTATUS v8; // edi
  _QWORD *v9; // rax
  int updated; // eax

  v2 = 0;
  LOBYTE(v3) = 0;
  if ( a2 < 0 )
    v2 = 0x10000000;
  if ( (a2 & 0x10000) != 0 )
    v2 |= 16 * (a2 & 0xF00000 | 0x4000000);
  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  RegEntryByDevice = (char *)WmipFindRegEntryByDevice((__int64)Object);
  if ( RegEntryByDevice )
  {
    KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
    v8 = 0x40000000;
    WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
  }
  else
  {
    if ( (v2 & 0x10000000) != 0
      || (AttachedDeviceReference = IoGetAttachedDeviceReference(Object),
          LOBYTE(v7) = AttachedDeviceReference->StackSize + 1,
          WmipUpdateDeviceStackSize(v7),
          ObfDereferenceObject(AttachedDeviceReference),
          v8 = ObReferenceObjectByPointer(Object, 0, 0LL, 0),
          v8 >= 0) )
    {
      v9 = WmipAllocRegEntry((__int64)Object, v2);
      RegEntryByDevice = (char *)v9;
      if ( v9 )
      {
        _InterlockedAdd((volatile signed __int32 *)v9 + 12, 1u);
        KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
        if ( (v2 & 0x10000000) != 0 )
        {
          updated = WmipRegisterOrUpdateDS((__int64)RegEntryByDevice, 0);
          v3 = (unsigned int)updated >> 31;
        }
        else
        {
          updated = WmipQueueRegWork(0LL, RegEntryByDevice);
          LOBYTE(v3) = updated < 0;
        }
        v8 = updated;
        WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
      }
      else
      {
        KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
        v8 = -1073741670;
      }
    }
    else
    {
      KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
    }
    if ( (_BYTE)v3 )
      WmipDeregisterRegEntry(RegEntryByDevice);
  }
  return (unsigned int)v8;
}
