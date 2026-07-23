/*
 * XREFs of SeAuditingFileEvents @ 0x1408192E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( BYTE4(SepRmCapTableLock.SListFaultAddress) && AccessGranted
    || BYTE5(SepRmCapTableLock.SListFaultAddress) && !AccessGranted
    || BYTE6(SepRmCapTableLock.SListFaultAddress) && AccessGranted
    || HIBYTE(SepRmCapTableLock.SListFaultAddress) && !AccessGranted )
  {
    return 1;
  }
  return result;
}
