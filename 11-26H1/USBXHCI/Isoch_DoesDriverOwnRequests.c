/*
 * XREFs of Isoch_DoesDriverOwnRequests @ 0x14003DB2C
 * Callers:
 *     Isoch_ProcessTransferCompletion @ 0x14004CE00 (Isoch_ProcessTransferCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall Isoch_DoesDriverOwnRequests(_QWORD *a1)
{
  return (_QWORD *)a1[49] != a1 + 49 || (_QWORD *)a1[51] != a1 + 51 || (_QWORD *)a1[53] != a1 + 53;
}
