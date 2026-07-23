/*
 * XREFs of KeMaskInterrupt @ 0x140431A20
 * Callers:
 *     KeDisconnectInterrupt @ 0x140430D90 (KeDisconnectInterrupt.c)
 *     IopMaskInterrupt @ 0x140431428 (IopMaskInterrupt.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KeRemoveQueueDpcEx @ 0x140430460 (KeRemoveQueueDpcEx.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140430730 (KiMaskSecondaryInterruptInternal.c)
 *     KiAcquireInterruptConnectLock @ 0x14043081C (KiAcquireInterruptConnectLock.c)
 *     KiMaskInterruptInternal @ 0x1404308B0 (KiMaskInterruptInternal.c)
 *     KiIsInterruptTypeSecondary @ 0x140431C94 (KiIsInterruptTypeSecondary.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KeMaskInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3, ULONG_PTR a4)
{
  unsigned int v5; // edi
  __int64 v9; // rcx
  char IsInterruptTypeSecondary; // r9
  unsigned __int8 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rdx
  char v14; // r12
  __int64 v16; // r14
  unsigned __int8 CurrentIrql; // bp
  unsigned int Number; // edx
  unsigned __int8 v19; // cl
  __int64 v20; // r8
  __int64 v21; // rbp
  unsigned int v22; // eax
  unsigned int v23; // edx
  ULONG ProcessorIndexFromNumber; // eax
  unsigned __int8 v25[4]; // [rsp+30h] [rbp-58h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-54h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-50h] BYREF

  v5 = 0;
  PreviousAffinity = 0LL;
  ProcNumber = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  v11 = 0;
  v12 = 0;
  while ( v11 < a2 )
  {
    v13 = a1[v11];
    _m_prefetchw((const void *)(v13 + 104));
    v9 = *(_DWORD *)(v13 + 104) | 1u;
    if ( (_InterlockedOr((volatile signed __int32 *)(v13 + 104), 1u) & 1) != 0 )
    {
      v12 = -2147483611;
      goto LABEL_10;
    }
    ++v11;
  }
  if ( *(_DWORD *)(a3 + 8) )
    return 0LL;
  v16 = *(unsigned int *)(a3 + 64);
  if ( !IsInterruptTypeSecondary )
  {
    v14 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v9, 15LL);
    }
    Number = KeGetPcr()->Prcb.Number;
    v19 = 0;
    v25[0] = CurrentIrql;
    while ( v19 < a2 )
    {
      v20 = a1[v19];
      if ( *(_DWORD *)(v20 + 96) == Number )
      {
        v12 = KiMaskInterruptInternal(*(unsigned int *)(v20 + 88), (unsigned int)v16);
        v14 = 1;
        break;
      }
      ++v19;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v14 )
      goto LABEL_10;
    v21 = *a1;
    if ( KeGetCurrentIrql() < 2u )
    {
      KiAcquireInterruptConnectLock(*(_DWORD *)(v21 + 96), v25, &PreviousAffinity);
      v12 = KiMaskInterruptInternal(*(unsigned int *)(v21 + 88), (unsigned int)v16);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25[0]);
      __writecr8(v25[0]);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      goto LABEL_10;
    }
    if ( !a4 )
      goto LABEL_38;
    v22 = *(_DWORD *)(v21 + 96);
    if ( v22 )
    {
      if ( v22 >= KeMaximumProcessors
        || (v23 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v22)) == 0 )
      {
LABEL_38:
        v12 = -1073741811;
        goto LABEL_10;
      }
      ProcNumber.Group = v23 >> 6;
      ProcNumber.Number = v23 & 0x3F;
    }
    KeRemoveQueueDpcEx((int *)a4, 0);
    *(_DWORD *)a4 = 275;
    *(_QWORD *)(a4 + 24) = KiMaskInterruptDpc;
    *(_QWORD *)(a4 + 32) = 0LL;
    *(_QWORD *)(a4 + 56) = 0LL;
    *(_QWORD *)(a4 + 16) = 0LL;
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
    if ( ProcessorIndexFromNumber != -1 )
    {
      if ( !*(_QWORD *)(a4 + 56) )
        *(_WORD *)(a4 + 2) = ProcessorIndexFromNumber + 2048;
      v12 = 0;
      KiInsertQueueDpc(a4, *(unsigned int *)(v21 + 88), v16, 0LL, 0);
      goto LABEL_10;
    }
    goto LABEL_38;
  }
  v12 = KiMaskSecondaryInterruptInternal(*(_DWORD *)(*a1 + 88), v16);
LABEL_10:
  if ( v12 != 296 )
    return v12;
  return v5;
}
