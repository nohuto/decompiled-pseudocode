/*
 * XREFs of Bulk_DoesDriverOwnRequests @ 0x1400312E0
 * Callers:
 *     Bulk_Cleanup @ 0x140031230 (Bulk_Cleanup.c)
 * Callees:
 *     <none>
 */

bool __fastcall Bulk_DoesDriverOwnRequests(_QWORD *a1)
{
  return (_QWORD *)a1[47] != a1 + 47 || (_QWORD *)a1[49] != a1 + 49 || (_QWORD *)a1[51] != a1 + 51;
}
