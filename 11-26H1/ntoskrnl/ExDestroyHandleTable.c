/*
 * XREFs of ExDestroyHandleTable @ 0x1409FEA2C
 * Callers:
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14077D3D0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     RtlDestroyAtomTable @ 0x1409B8CD0 (RtlDestroyAtomTable.c)
 *     ObInitProcess @ 0x1409BCC28 (ObInitProcess.c)
 *     ObKillProcess @ 0x1409FE7A8 (ObKillProcess.c)
 * Callees:
 *     ExpFreeHandleTable @ 0x1409BE364 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x140AD119C (ExpRemoveHandleTable.c)
 */

void __fastcall ExDestroyHandleTable(_QWORD *P)
{
  ExpRemoveHandleTable();
  ExpFreeHandleTable(P);
}
