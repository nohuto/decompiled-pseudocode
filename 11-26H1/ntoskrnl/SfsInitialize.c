/*
 * XREFs of SfsInitialize @ 0x1406DD17C
 * Callers:
 *     PrExtControlOperations @ 0x1406DCA28 (PrExtControlOperations.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     MiUnmapContiguousMemory @ 0x140343628 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x140363DC0 (MmMapIoSpaceEx.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     MmMapIoSpace @ 0x1404B8360 (MmMapIoSpace.c)
 *     SfsGetFwVersions @ 0x1406DD060 (SfsGetFwVersions.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall SfsInitialize(__int64 *a1)
{
  __int64 v1; // rdi
  int FwVersions; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+20h] BYREF

  v1 = *a1;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  *(_QWORD *)&CmpCallbackListLock.Timer.Processor = MmMapIoSpaceEx(v1 + 2372, 4LL, 0x204u);
  if ( *(_QWORD *)&CmpCallbackListLock.Timer.Processor
    && (CmpCallbackListLock.Timer.TimerListEntry.Flink = (struct _LIST_ENTRY *)MmMapIoSpace(
                                                                                 (PHYSICAL_ADDRESS)(v1 + 2376),
                                                                                 4uLL,
                                                                                 (MEMORY_CACHING_TYPE)516)) != 0LL
    && (CmpCallbackListLock.Timer.DueTime.QuadPart = (unsigned __int64)MmMapIoSpace(
                                                                         (PHYSICAL_ADDRESS)(v1 + 2380),
                                                                         4uLL,
                                                                         (MEMORY_CACHING_TYPE)516)) != 0 )
  {
    CmpCallbackListLock.Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)a1[1];
    CmpCallbackListLock.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)MmGetPhysicalAddress(CmpCallbackListLock.Timer.TimerListEntry.Blink).QuadPart;
    memset_0(CmpCallbackListLock.Timer.TimerListEntry.Blink, 0, 0x200000uLL);
    RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\HARDWARE\\DESCRIPTION\\SYSTEM\\SFS");
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    FwVersions = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    if ( FwVersions >= 0 )
    {
      FwVersions = SfsGetFwVersions(v5, v4, v6);
      if ( FwVersions >= 0 )
        CmpCallbackListLock.WaitBlockFill4[8] = 1;
    }
  }
  else
  {
    FwVersions = -1073741670;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( FwVersions < 0 )
  {
    if ( *(_QWORD *)&CmpCallbackListLock.Timer.Processor )
      MiUnmapContiguousMemory(*(unsigned __int64 *)&CmpCallbackListLock.Timer.Processor, 4uLL, 1);
    if ( CmpCallbackListLock.Timer.TimerListEntry.Flink )
      MiUnmapContiguousMemory((unsigned __int64)CmpCallbackListLock.Timer.TimerListEntry.Flink, 4uLL, 1);
    if ( CmpCallbackListLock.Timer.DueTime.QuadPart )
      MiUnmapContiguousMemory(CmpCallbackListLock.Timer.DueTime.QuadPart, 4uLL, 1);
  }
  return (unsigned int)FwVersions;
}
