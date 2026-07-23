/*
 * XREFs of IommuHvInitializeSvmLibrary @ 0x14059FD9C
 * Callers:
 *     IommupHvInitializeLibrary @ 0x140CBAB84 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x14034C170 (MmAllocateContiguousNodeMemory.c)
 *     HalpInterruptSetIdtEntry @ 0x140596E80 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IommuHvInitializeSvmLibrary(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r12d
  int v3; // r14d
  PVOID *Pool2; // rbp
  __int64 v5; // r9
  unsigned int i; // r15d
  unsigned __int64 v8; // r14
  char *ContiguousNodeMemory; // rax
  __int64 v10; // rdx
  unsigned int j; // edi
  PVOID *v12; // rdi
  char *v13; // rax
  __int64 v14; // rdx

  v1 = *(unsigned int *)(a1 + 12);
  v2 = 0;
  v3 = 0;
  if ( !(_DWORD)v1 )
    v1 = 1LL;
  Pool2 = (PVOID *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225626LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned int)v1 )
    {
      BYTE3(IommuInterfaceStateChangeCallbackPushLock.StackLimit) = 1;
      HIDWORD(IommuInterfaceStateChangeCallbackPushLock.StackLimit) = v1;
      *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.CurrentRunTime = Pool2;
      v13 = (char *)(Pool2 + 4);
      v14 = (unsigned int)v1;
      do
      {
        *((_QWORD *)v13 - 1) = 0LL;
        *((_QWORD *)v13 + 2) = IommupHvGetPageFault;
        *(_QWORD *)v13 = 0LL;
        *((_DWORD *)v13 + 2) = 0;
        *((_QWORD *)v13 + 3) = 0LL;
        v13 += 64;
        --v14;
      }
      while ( v14 );
      HalpInterruptSetIdtEntry(
        0xCEu,
        (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))IommupHvInterruptRoutine,
        12,
        v5,
        -1LL);
      return (unsigned int)v3;
    }
    v8 = (unsigned __int64)i << 6;
    *(_DWORD *)((char *)Pool2 + v8) = i;
    ContiguousNodeMemory = (char *)MmAllocateContiguousNodeMemory(0x2000LL, 0, -1, 0, 4, 0x80000000);
    *(PVOID *)((char *)Pool2 + v8 + 8) = ContiguousNodeMemory;
    if ( !ContiguousNodeMemory )
      break;
    *(PVOID *)((char *)Pool2 + v8 + 16) = ContiguousNodeMemory + 4096;
    MmGetPhysicalAddress(ContiguousNodeMemory);
    v3 = guard_dispatch_icall_no_overrides(i, 128LL);
    if ( v3 < 0 )
      goto LABEL_11;
    ++v2;
  }
  v3 = -1073741670;
LABEL_11:
  for ( j = 0; j < v2; ++j )
    guard_dispatch_icall_no_overrides(j, v10);
  v12 = Pool2 + 1;
  do
  {
    if ( *v12 )
      MmFreeContiguousMemory(*v12);
    v12 += 8;
    --v1;
  }
  while ( v1 );
  ExFreePoolWithTag(Pool2, 0x496C6148u);
  return (unsigned int)v3;
}
