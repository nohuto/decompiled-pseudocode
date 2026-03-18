/*
 * XREFs of SeAuditHeaderRequired @ 0x14044AFD0
 * Callers:
 *     ObpAllocateObject @ 0x1409344A0 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType
      && (*(_WORD *)&SepRmCapTableLock.ApcStateFill[2] || *(_WORD *)&SepRmCapTableLock.ApcStateFill[26]);
}
