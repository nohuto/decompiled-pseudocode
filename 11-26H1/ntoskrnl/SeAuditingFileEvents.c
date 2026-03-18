/*
 * XREFs of SeAuditingFileEvents @ 0x140813480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( SepRmCapTableLock.Tag && AccessGranted
    || SepRmCapTableLock.SameThreadTransientFlags && !AccessGranted
    || *((_BYTE *)&SepRmCapTableLock.0 + 1) && AccessGranted
    || *((_BYTE *)&SepRmCapTableLock.125 + 2) && !AccessGranted )
  {
    return 1;
  }
  return result;
}
