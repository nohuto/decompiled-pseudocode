/*
 * XREFs of SfsInitialize @ 0x1406E141C
 * Callers:
 *     PrExtControlOperations @ 0x1406E0CC8 (PrExtControlOperations.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     MmMapIoSpace @ 0x1404B1B90 (MmMapIoSpace.c)
 *     SfsGetFwVersions @ 0x1406E1300 (SfsGetFwVersions.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
  CmpContextListLock.Timer.TimerListEntry.Flink = (struct _LIST_ENTRY *)MmMapIoSpaceEx(v1 + 2372, 4LL, 0x204u);
  if ( CmpContextListLock.Timer.TimerListEntry.Flink
    && (CmpContextListLock.Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)MmMapIoSpace(
                                                                                (PHYSICAL_ADDRESS)(v1 + 2376),
                                                                                4uLL,
                                                                                (MEMORY_CACHING_TYPE)516)) != 0LL
    && (CmpContextListLock.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MmMapIoSpace(
                                                                                     (PHYSICAL_ADDRESS)(v1 + 2380),
                                                                                     4uLL,
                                                                                     (MEMORY_CACHING_TYPE)516)) != 0LL )
  {
    CmpContextListLock.Timer.Dpc = (_KDPC *)a1[1];
    *(PHYSICAL_ADDRESS *)&CmpContextListLock.Timer.Processor = MmGetPhysicalAddress(CmpContextListLock.Timer.Dpc);
    memset_0(CmpContextListLock.Timer.Dpc, 0, 0x200000uLL);
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
        CmpContextListLock.WaitBlockFill4[0] = 1;
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
    if ( CmpContextListLock.Timer.TimerListEntry.Flink )
      MiUnmapContiguousMemory((unsigned __int64)CmpContextListLock.Timer.TimerListEntry.Flink, 4uLL, 1);
    if ( CmpContextListLock.Timer.TimerListEntry.Blink )
      MiUnmapContiguousMemory((unsigned __int64)CmpContextListLock.Timer.TimerListEntry.Blink, 4uLL, 1);
    if ( CmpContextListLock.Timer.Header.WaitListHead.Blink )
      MiUnmapContiguousMemory((unsigned __int64)CmpContextListLock.Timer.Header.WaitListHead.Blink, 4uLL, 1);
  }
  return (unsigned int)FwVersions;
}
