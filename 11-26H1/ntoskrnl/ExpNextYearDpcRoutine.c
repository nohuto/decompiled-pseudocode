/*
 * XREFs of ExpNextYearDpcRoutine @ 0x1406CB1E0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall ExpNextYearDpcRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  void *v3; // rcx
  __int64 v4; // rbx

  v4 = *((_QWORD *)PsGetServerSiloGlobals(a2) + 153);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 928)) == 1 )
  {
    if ( v2 )
      ObfReferenceObjectWithTag(v3, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 896), DelayedWorkQueue);
  }
}
