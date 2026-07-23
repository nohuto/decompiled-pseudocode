/*
 * XREFs of PiSwFindChildren @ 0x1409AFD9C
 * Callers:
 *     PipEnumerateCompleted @ 0x1409AF3E4 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x140B26E4C (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1409AFF94 (PiSwFindBusRelations.c)
 */

__int64 PiSwFindChildren()
{
  __int64 BusRelations; // rax

  BusRelations = PiSwFindBusRelations();
  return (BusRelations + 16) & -(__int64)(BusRelations != 0);
}
