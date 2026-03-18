/*
 * XREFs of ViPendingDelayCompletion @ 0x140C30308
 * Callers:
 *     VfPendingMoreProcessingRequired @ 0x140C45F00 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1404A5F90 (KeInitializeTimerEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140C30470 (ViPendingQueuePassiveLevelCompletion.c)
 */

__int64 __fastcall ViPendingDelayCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // esi
  ULONG_PTR Pool2; // rax
  _DWORD *v11; // rdi
  struct _KTIMER *v12; // r14
  __int64 v13; // rbx
  void *v14; // rbx

  v8 = 1;
  Pool2 = ExAllocatePool2(64LL, 0xB0uLL, 0x64707249u);
  v11 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    v12 = (struct _KTIMER *)(Pool2 + 104);
    KeInitializeTimerEx((PKTIMER)(Pool2 + 104), SynchronizationTimer);
    *(_DWORD *)(a2 + 56) |= 0x10u;
    *((_QWORD *)v11 + 4) = a5;
    *(_QWORD *)v11 = a2;
    *((_QWORD *)v11 + 1) = a1;
    *((_QWORD *)v11 + 3) = a4;
    *((_QWORD *)v11 + 2) = a3;
    *((_BYTE *)v11 + 172) = *(_BYTE *)(a2 + 185);
    v13 = *(_QWORD *)(a2 + 216);
    if ( v13 && (v14 = *(void **)(v13 + 40)) != 0LL )
      PsReferenceSiloContext(v14);
    else
      v14 = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      v11[42] = 2;
      KeInitializeDpc((PRKDPC)(v11 + 10), (PKDEFERRED_ROUTINE)ViPendingCompleteAtDPC, v11);
      KiSetTimerEx((__int64)v12, -3000LL, 0, 0, (__int64)(v11 + 10));
    }
    else
    {
      v11[42] = 1;
      KiSetTimerEx((__int64)v12, -3000LL, 0, 0, 0LL);
      v8 = ViPendingQueuePassiveLevelCompletion(v11);
      if ( !v8 )
      {
        KeCancelTimer(v12);
        ExFreePoolWithTag(v11, 0);
        *(_DWORD *)(a2 + 56) &= ~0x10u;
        if ( v14 )
          ObfDereferenceObject(v14);
      }
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
