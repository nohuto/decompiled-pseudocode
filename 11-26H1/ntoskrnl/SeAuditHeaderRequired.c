/*
 * XREFs of SeAuditHeaderRequired @ 0x140443100
 * Callers:
 *     ObpAllocateObject @ 0x140910050 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (WORD1(SepRmCapTableLock.StackBase) || HIWORD(SepRmCapTableLock.CurrentRunTime));
}
