/*
 * XREFs of WmipRegisterDevice @ 0x140ACFB28
 * Callers:
 *     IoWMIRegistrationControl @ 0x140ACF980 (IoWMIRegistrationControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x1402F8660 (IoGetAttachedDeviceReference.c)
 *     WmipDeregisterRegEntry @ 0x1403C0DF0 (WmipDeregisterRegEntry.c)
 *     WmipUnreferenceRegEntry @ 0x1403C0F80 (WmipUnreferenceRegEntry.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     WmipFindRegEntryByDevice @ 0x14048FD3C (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x1404E0D7C (WmipAllocRegEntry.c)
 *     WmipRegisterOrUpdateDS @ 0x140A0A9A4 (WmipRegisterOrUpdateDS.c)
 *     WmipUpdateDeviceStackSize @ 0x140ACFCB4 (WmipUpdateDeviceStackSize.c)
 *     WmipQueueRegWork @ 0x140ACFD08 (WmipQueueRegWork.c)
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
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  RegEntryByDevice = (char *)WmipFindRegEntryByDevice((__int64)Object);
  if ( RegEntryByDevice )
  {
    KeReleaseMutex(&WmipSMMutex, 0);
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
        KeReleaseMutex(&WmipSMMutex, 0);
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
        KeReleaseMutex(&WmipSMMutex, 0);
        v8 = -1073741670;
      }
    }
    else
    {
      KeReleaseMutex(&WmipSMMutex, 0);
    }
    if ( (_BYTE)v3 )
      WmipDeregisterRegEntry(RegEntryByDevice);
  }
  return (unsigned int)v8;
}
