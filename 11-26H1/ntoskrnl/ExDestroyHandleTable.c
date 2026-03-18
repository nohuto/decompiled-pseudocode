/*
 * XREFs of ExDestroyHandleTable @ 0x140959168
 * Callers:
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14077A4A0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ObKillProcess @ 0x140958EE4 (ObKillProcess.c)
 *     ObInitProcess @ 0x140971938 (ObInitProcess.c)
 *     RtlDestroyAtomTable @ 0x1409E0A60 (RtlDestroyAtomTable.c)
 * Callees:
 *     ExpRemoveHandleTable @ 0x1409587E8 (ExpRemoveHandleTable.c)
 *     ExpFreeHandleTable @ 0x1409588DC (ExpFreeHandleTable.c)
 */

void __fastcall ExDestroyHandleTable(_QWORD *P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ExpRemoveHandleTable((__int64)P, a2, a3, a4);
  ExpFreeHandleTable(P);
}
