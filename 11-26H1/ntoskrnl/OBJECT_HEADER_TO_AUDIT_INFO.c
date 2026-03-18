/*
 * XREFs of OBJECT_HEADER_TO_AUDIT_INFO @ 0x1404461F0
 * Callers:
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpAuditObjectAccess @ 0x1409FA54C (ObpAuditObjectAccess.c)
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
