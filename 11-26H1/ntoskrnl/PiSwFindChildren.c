/*
 * XREFs of PiSwFindChildren @ 0x14090DC6C
 * Callers:
 *     PipEnumerateCompleted @ 0x14090D2B4 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x140B249AC (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x14090DE64 (PiSwFindBusRelations.c)
 */

__int64 PiSwFindChildren()
{
  __int64 BusRelations; // rax

  BusRelations = PiSwFindBusRelations();
  return (BusRelations + 16) & -(__int64)(BusRelations != 0);
}
