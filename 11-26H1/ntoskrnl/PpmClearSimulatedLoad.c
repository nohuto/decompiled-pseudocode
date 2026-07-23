/*
 * XREFs of PpmClearSimulatedLoad @ 0x140B5D3E8
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmClearSimulatedLoad(PPROCESSOR_NUMBER ProcNumber, __int64 a2, unsigned int a3)
{
  void *v4; // rdi
  PBOOLEAN i; // rcx
  unsigned int j; // edx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // ebx
  ULONG ProcessorIndexFromNumber; // eax

  v4 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  if ( *(_DWORD *)ProcNumber < 0 )
  {
    for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
          i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
          i = *(PBOOLEAN *)i )
    {
      for ( j = 0; j < *((_DWORD *)i + 74); ++j )
      {
        v7 = *((_QWORD *)i + 39);
        v8 = 1224LL * j;
        if ( *(_DWORD *)(v8 + v7 + 16) == 1 && *(_DWORD *)(v8 + v7 + 20) == (*(_DWORD *)ProcNumber & 0x7FFFFFFF) )
        {
          v9 = *(_QWORD *)(v8 + v7);
          if ( v9 )
            goto LABEL_15;
          break;
        }
      }
    }
    goto LABEL_11;
  }
  if ( ProcNumber->Reserved
    || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber), ProcessorIndexFromNumber == -1) )
  {
LABEL_11:
    v10 = -1073741811;
    goto LABEL_16;
  }
  v9 = KeGetPrcb(ProcessorIndexFromNumber) + 35264;
LABEL_15:
  v4 = *(void **)(v9 + 24);
  v10 = 0;
  *(_QWORD *)(v9 + 24) = 0LL;
LABEL_16:
  PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x704D5050u);
  return v10;
}
