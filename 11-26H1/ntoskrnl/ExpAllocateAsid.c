/*
 * XREFs of ExpAllocateAsid @ 0x1406D143C
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x1406D1A1C (ExpShareAddressSpaceWithDevice.c)
 *     IommuPasidDeviceCreate @ 0x140787070 (IommuPasidDeviceCreate.c)
 * Callees:
 *     ExpAcquireSvmAgentsLock @ 0x1406D13DC (ExpAcquireSvmAgentsLock.c)
 *     ExpAllocateReservedAsids @ 0x1406D15F0 (ExpAllocateReservedAsids.c)
 *     ExpReleaseSvmAgentsLock @ 0x1406D19E4 (ExpReleaseSvmAgentsLock.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAllocateAsid(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int8 v4; // bp
  __int64 v5; // rbx
  unsigned int v6; // edi
  struct _KTHREAD *Pool2; // rsi
  struct _KTHREAD *Thread; // r14
  struct _KTHREAD *v10; // rax
  unsigned int i; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
LABEL_2:
  v4 = ExpAcquireSvmAgentsLock(&LockHandle);
  while ( 1 )
  {
    v5 = *(unsigned int *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[12];
    if ( *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[12] != *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[16] )
      break;
    LOBYTE(v3) = v4;
    if ( *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[12] == *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill10[8] )
    {
      ExpReleaseSvmAgentsLock(&LockHandle, v3);
      return 0LL;
    }
    ExpReleaseSvmAgentsLock(&LockHandle, v3);
    v6 = v5 + 64;
    if ( (int)v5 + 64 >= (unsigned int)v5 )
    {
      if ( v6 > *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill10[8] )
        v6 = *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill10[8];
    }
    else
    {
      v6 = *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill10[8];
    }
    Pool2 = (struct _KTHREAD *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return 0LL;
    v4 = ExpAcquireSvmAgentsLock(&LockHandle);
    if ( (_DWORD)v5 == *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[12] )
    {
      Thread = ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Thread;
      if ( ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Thread )
        memmove(Pool2, ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Thread, 24 * v5);
      memset_0(&Pool2->Header + v5, 0, 24LL * (v6 - (unsigned int)v5));
      if ( !ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Thread )
        ExpAllocateReservedAsids(Pool2);
      ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Thread = Pool2;
      Pool2 = Thread;
      *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[12] = v6;
      if ( !Thread )
        continue;
    }
    LOBYTE(v3) = v4;
    ExpReleaseSvmAgentsLock(&LockHandle, v3);
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_2;
  }
  v10 = ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Thread;
  for ( i = 0; i < *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[12]; ++i )
  {
    if ( !*(_QWORD *)&v10->Header.Lock )
      break;
    v10 = (struct _KTHREAD *)((char *)v10 + 24);
  }
  v10->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)1;
  LOBYTE(v10->Header.WaitListHead.Blink) = 0;
  if ( !a2 )
    a2 = -2LL;
  LOBYTE(v3) = v4;
  *(_QWORD *)&v10->Header.Lock = a2;
  ++*(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[16];
  ExpReleaseSvmAgentsLock(&LockHandle, v3);
  return i + 1;
}
