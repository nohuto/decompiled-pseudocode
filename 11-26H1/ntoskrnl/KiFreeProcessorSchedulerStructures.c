/*
 * XREFs of KiFreeProcessorSchedulerStructures @ 0x1405EDBC0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KiFreeIdleSearchStructures @ 0x1405EDB04 (KiFreeIdleSearchStructures.c)
 *     KiFreeLocalSharedReadyQueue @ 0x1405EDB8C (KiFreeLocalSharedReadyQueue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KiFreeProcessorSchedulerStructures(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)a1[4318];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    a1[4318] = 0LL;
  }
  KiFreeIdleSearchStructures((__int64)a1);
  v3 = (void *)a1[1789];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[1789] = 0LL;
  }
  KiFreeLocalSharedReadyQueue((__int64)a1);
  v4 = (void *)a1[4568];
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  v5 = (void *)a1[1799];
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
}
