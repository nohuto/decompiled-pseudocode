/*
 * XREFs of WmipRegisterDevice @ 0x1409B81FC
 * Callers:
 *     IoWMIRegistrationControl @ 0x1409B8940 (IoWMIRegistrationControl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReference @ 0x14041DD00 (IoGetAttachedDeviceReference.c)
 *     ObReferenceObjectByPointer @ 0x140435FB0 (ObReferenceObjectByPointer.c)
 *     WmipFindRegEntryByDevice @ 0x140464348 (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterRegEntry @ 0x1404718C4 (WmipDeregisterRegEntry.c)
 *     WmipUnreferenceRegEntry @ 0x140471A4C (WmipUnreferenceRegEntry.c)
 *     WmipAllocRegEntry @ 0x1404AB318 (WmipAllocRegEntry.c)
 *     WmipUpdateDeviceStackSize @ 0x1409B750C (WmipUpdateDeviceStackSize.c)
 *     WmipRegisterOrUpdateDS @ 0x1409B837C (WmipRegisterOrUpdateDS.c)
 *     WmipQueueRegWork @ 0x1409B85D0 (WmipQueueRegWork.c)
 */

__int64 __fastcall WmipRegisterDevice(struct _DEVICE_OBJECT *Object, int a2)
{
  int v2; // ebx
  unsigned int v3; // ebp
  char *RegEntryByDevice; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rdi
  NTSTATUS v7; // edi
  _QWORD *v8; // rax
  int updated; // eax

  v2 = 0;
  LOBYTE(v3) = 0;
  if ( a2 < 0 )
    v2 = 0x10000000;
  if ( (a2 & 0x10000) != 0 )
    v2 |= 16 * (a2 & 0xF00000 | 0x4000000);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  RegEntryByDevice = (char *)WmipFindRegEntryByDevice((__int64)Object);
  if ( RegEntryByDevice )
  {
    KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
    v7 = 0x40000000;
    WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
  }
  else
  {
    if ( (v2 & 0x10000000) != 0
      || (AttachedDeviceReference = IoGetAttachedDeviceReference(Object),
          WmipUpdateDeviceStackSize(AttachedDeviceReference->StackSize + 1),
          ObfDereferenceObject(AttachedDeviceReference),
          v7 = ObReferenceObjectByPointer(Object, 0, 0LL, 0),
          v7 >= 0) )
    {
      v8 = WmipAllocRegEntry((__int64)Object, v2);
      RegEntryByDevice = (char *)v8;
      if ( v8 )
      {
        _InterlockedAdd((volatile signed __int32 *)v8 + 12, 1u);
        KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
        if ( (v2 & 0x10000000) != 0 )
        {
          updated = WmipRegisterOrUpdateDS(RegEntryByDevice, 0LL);
          v3 = (unsigned int)updated >> 31;
        }
        else
        {
          updated = WmipQueueRegWork(0LL, RegEntryByDevice);
          LOBYTE(v3) = updated < 0;
        }
        v7 = updated;
        WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
      }
      else
      {
        KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
        v7 = -1073741670;
      }
    }
    else
    {
      KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
    }
    if ( (_BYTE)v3 )
      WmipDeregisterRegEntry(RegEntryByDevice);
  }
  return (unsigned int)v7;
}
