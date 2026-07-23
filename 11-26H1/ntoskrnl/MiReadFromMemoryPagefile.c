/*
 * XREFs of MiReadFromMemoryPagefile @ 0x1404FC998
 * Callers:
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 *     MiReadPagefilePage @ 0x1406E9750 (MiReadPagefilePage.c)
 *     MiPfExecuteReadList @ 0x140A5AB58 (MiPfExecuteReadList.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiTransferMemoryPagefileData @ 0x1404FC9E8 (MiTransferMemoryPagefileData.c)
 */

LONG __fastcall MiReadFromMemoryPagefile(__int64 a1, __int64 a2)
{
  MiTransferMemoryPagefileData(a1, a2 + 272, *(_QWORD *)(a2 + 96) >> 12, 1LL);
  *(_QWORD *)(a2 + 88) = *(unsigned int *)(a2 + 312);
  *(_DWORD *)(a2 + 80) = 0;
  return KeSetEvent((PRKEVENT)(a2 + 32), 0, 0);
}
