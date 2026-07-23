/*
 * XREFs of EtwpCovSampCaptureQueueApc @ 0x1406CC720
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x1406CC924 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     EtwpCovSampCaptureApcRelease @ 0x140260DB8 (EtwpCovSampCaptureApcRelease.c)
 *     ExSaDecodeHandle @ 0x14030C290 (ExSaDecodeHandle.c)
 *     EtwpCovSampLookasidePop @ 0x14030CB08 (EtwpCovSampLookasidePop.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeIsThreadRunning @ 0x1403F0C80 (KeIsThreadRunning.c)
 *     KeTryToInsertQueueApc @ 0x1403F0DB8 (KeTryToInsertQueueApc.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 */

__int64 __fastcall EtwpCovSampCaptureQueueApc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v2; // r15d
  struct _LIST_ENTRY *Blink; // r13
  int v5; // esi
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // edi
  unsigned __int64 v8; // rbp
  PSLIST_ENTRY v9; // rax
  PSLIST_ENTRY v10; // r14
  __int64 v11; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v13; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  Blink = ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  v5 = 1;
  if ( CurrentThread->Process->FreezeCount + ((*(_DWORD *)&CurrentThread->Process->0 >> 3) & 1)
    || CurrentThread->SuspendCount
    || (CurrentThread->MiscFlags & 0x4000) == 0 )
  {
    return (unsigned int)-1073741637;
  }
  v6 = (volatile signed __int32 *)(&CurrentThread[1].SwapListEntry + 1);
  if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x17u) )
  {
    v8 = (ExSaDecodeHandle((unsigned int)Blink->Blink) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = EtwpCovSampLookasidePop((__int64)Blink, v8 + 16);
    v10 = v9;
    if ( !v9 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v8 + 308), 1u);
      v7 = -1073741670;
      goto LABEL_23;
    }
    v11 = (__int64)(&v9[3].Next + 1);
    KeInitializeApc(
      (__int64)(&v9[3].Next + 1),
      (__int64)CurrentThread,
      0,
      (__int64)EtwpCovSampCaptureApc,
      (__int64)EtwpCovSampCaptureApcRundown,
      (__int64)EtwpCovSampCaptureApc,
      0,
      (__int64)Blink);
    *((_QWORD *)&v10[7].Next + 1) = 0LL;
    LODWORD(v10[9].Next) = MEMORY[0xFFFFF78000000320];
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      if ( CurrentIrql < 2u )
      {
        v13 = KeGetCurrentThread();
        v2 = 1;
        --v13->KernelApcDisable;
      }
      if ( !(unsigned __int8)KeInsertQueueApc(v11, a1, 0LL, 0) )
      {
        v7 = -1073741823;
        goto LABEL_18;
      }
    }
    else if ( !KeTryToInsertQueueApc(v11, a1, 0LL) )
    {
      if ( (CurrentThread->MiscFlags & 0x4000) != 0 )
        KeIsThreadRunning((__int64)CurrentThread);
      v7 = -1073741823;
      goto LABEL_21;
    }
    v5 = 0;
    v10 = 0LL;
    v7 = 0;
LABEL_18:
    if ( v2 )
      KeLeaveCriticalRegion();
    if ( !v10 )
    {
LABEL_22:
      if ( !v5 )
        return v7;
LABEL_23:
      _InterlockedAnd(v6, 0xFF7FFFFF);
      return v7;
    }
LABEL_21:
    EtwpCovSampCaptureApcRelease(v10);
    goto LABEL_22;
  }
  return (unsigned int)-1073740008;
}
