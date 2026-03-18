/*
 * XREFs of MiStoreRundownWritesApc @ 0x14070AE30
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404096F8 (MiStoreDecrementOutstandingWrites.c)
 */

LONG __fastcall MiStoreRundownWritesApc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 48);
  --CurrentThread->SpecialApcDisable;
  ++*(_DWORD *)(v3 + 1324);
  *(_QWORD *)(v3 + 1400) = a1;
  MiStoreDecrementOutstandingWrites(v3);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v5, v4);
  return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
