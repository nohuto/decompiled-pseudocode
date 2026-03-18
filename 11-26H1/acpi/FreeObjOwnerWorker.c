/*
 * XREFs of FreeObjOwnerWorker @ 0x14006E090
 * Callers:
 *     <none>
 * Callees:
 *     FreeObjOwner @ 0x14000C7F0 (FreeObjOwner.c)
 *     AMLIRestartContext @ 0x14004A10C (AMLIRestartContext.c)
 */

void __fastcall FreeObjOwnerWorker(struct _EX_RUNDOWN_REF *StartContext)
{
  _QWORD *Count; // rbx

  Count = (_QWORD *)StartContext[7].Count;
  FreeObjOwner(0LL, StartContext);
  AMLIRestartContext(Count);
}
