/*
 * XREFs of ExpAllocateAsid @ 0x1406D546C
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x1406D5A4C (ExpShareAddressSpaceWithDevice.c)
 *     IommuPasidDeviceCreate @ 0x140789BA0 (IommuPasidDeviceCreate.c)
 * Callees:
 *     ExpAcquireSvmAgentsLock @ 0x1406D540C (ExpAcquireSvmAgentsLock.c)
 *     ExpAllocateReservedAsids @ 0x1406D5620 (ExpAllocateReservedAsids.c)
 *     ExpReleaseSvmAgentsLock @ 0x1406D5A14 (ExpReleaseSvmAgentsLock.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAllocateAsid(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int8 v4; // bp
  __int64 Dpc_high; // rbx
  unsigned int Dpc; // edi
  struct _LIST_ENTRY *Pool2; // rsi
  struct _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY *v10; // rax
  unsigned int i; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
LABEL_2:
  v4 = ExpAcquireSvmAgentsLock(&LockHandle);
  while ( 1 )
  {
    Dpc_high = HIDWORD(ExSaPageGroupDescriptorArrayLock.Timer.Dpc);
    if ( HIDWORD(ExSaPageGroupDescriptorArrayLock.Timer.Dpc) != *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.Timer.Processor )
      break;
    LOBYTE(v3) = v4;
    if ( HIDWORD(ExSaPageGroupDescriptorArrayLock.Timer.Dpc) == LODWORD(ExSaPageGroupDescriptorArrayLock.Timer.Dpc) )
    {
      ExpReleaseSvmAgentsLock(&LockHandle, v3);
      return 0LL;
    }
    ExpReleaseSvmAgentsLock(&LockHandle, v3);
    Dpc = Dpc_high + 64;
    if ( (int)Dpc_high + 64 >= (unsigned int)Dpc_high )
    {
      if ( Dpc > LODWORD(ExSaPageGroupDescriptorArrayLock.Timer.Dpc) )
        Dpc = (unsigned int)ExSaPageGroupDescriptorArrayLock.Timer.Dpc;
    }
    else
    {
      Dpc = (unsigned int)ExSaPageGroupDescriptorArrayLock.Timer.Dpc;
    }
    Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return 0LL;
    v4 = ExpAcquireSvmAgentsLock(&LockHandle);
    if ( (_DWORD)Dpc_high == HIDWORD(ExSaPageGroupDescriptorArrayLock.Timer.Dpc) )
    {
      Flink = ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink;
      if ( ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink )
        memmove(Pool2, ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink, 24 * Dpc_high);
      memset_0((char *)Pool2 + 24 * Dpc_high, 0, 24LL * (Dpc - (unsigned int)Dpc_high));
      if ( !ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink )
        ExpAllocateReservedAsids(Pool2);
      ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink = Pool2;
      Pool2 = Flink;
      HIDWORD(ExSaPageGroupDescriptorArrayLock.Timer.Dpc) = Dpc;
      if ( !Flink )
        continue;
    }
    LOBYTE(v3) = v4;
    ExpReleaseSvmAgentsLock(&LockHandle, v3);
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_2;
  }
  v10 = ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink;
  for ( i = 0; i < HIDWORD(ExSaPageGroupDescriptorArrayLock.Timer.Dpc); ++i )
  {
    if ( !v10->Flink )
      break;
    v10 = (struct _LIST_ENTRY *)((char *)v10 + 24);
  }
  v10->Blink = (struct _LIST_ENTRY *)1;
  LOBYTE(v10[1].Flink) = 0;
  if ( !a2 )
    a2 = -2LL;
  LOBYTE(v3) = v4;
  v10->Flink = (struct _LIST_ENTRY *)a2;
  ++*(_DWORD *)&ExSaPageGroupDescriptorArrayLock.Timer.Processor;
  ExpReleaseSvmAgentsLock(&LockHandle, v3);
  return i + 1;
}
