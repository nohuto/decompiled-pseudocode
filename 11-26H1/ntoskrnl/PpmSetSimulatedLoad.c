/*
 * XREFs of PpmSetSimulatedLoad @ 0x140B5853C
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     KeGetProcessorIndexFromNumber @ 0x140428990 (KeGetProcessorIndexFromNumber.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmSetSimulatedLoad(PPROCESSOR_NUMBER ProcNumber, __int64 a2, unsigned int a3)
{
  void *v4; // rsi
  PBOOLEAN i; // rdx
  unsigned int j; // ecx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned int v10; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  _BYTE *Pool2; // rax

  v4 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
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
    goto LABEL_18;
  }
  v9 = KeGetPrcb(ProcessorIndexFromNumber) + 35264;
LABEL_15:
  Pool2 = (_BYTE *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    *Pool2 = ProcNumber[1].Group;
    Pool2[1] = HIBYTE(ProcNumber[1].Group);
    v4 = *(void **)(v9 + 24);
    *(_QWORD *)(v9 + 24) = Pool2;
    v10 = 0;
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_18:
  PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x704D5050u);
  return v10;
}
