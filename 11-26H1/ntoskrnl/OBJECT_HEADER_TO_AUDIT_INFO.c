/*
 * XREFs of OBJECT_HEADER_TO_AUDIT_INFO @ 0x14043ECF0
 * Callers:
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ObpAuditObjectAccess @ 0x14091F14C (ObpAuditObjectAccess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_AUDIT_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 0x20) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x3F];
  else
    return 0LL;
}
