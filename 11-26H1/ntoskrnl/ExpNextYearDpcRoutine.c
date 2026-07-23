/*
 * XREFs of ExpNextYearDpcRoutine @ 0x1406CF210
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
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
