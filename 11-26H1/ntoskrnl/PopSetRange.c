/*
 * XREFs of PopSetRange @ 0x1404AFFB4
 * Callers:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140600824 (PopInternalAddToDumpFile.c)
 *     PopSetBootPhaseRange @ 0x140BFC79C (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x140C05B98 (PopDiscardRange.c)
 *     PopCloneRange @ 0x140C081E0 (PopCloneRange.c)
 */

__int64 __fastcall PopSetRange(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  if ( *(_BYTE *)(BugCheckParameter3 + 24) )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 496LL, 0LL);
    KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  if ( (a2 & 0x8000) != 0 )
    return PopDiscardRange(BugCheckParameter3, a3, a4);
  if ( (a2 & 2) != 0 )
    return PopCloneRange(BugCheckParameter3, a3, a4, a5);
  if ( (a2 & 0x10000) == 0 )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 496LL, 0LL);
    KeBugCheckEx(0xA0u, 0x105uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  return PopSetBootPhaseRange(BugCheckParameter3, a3, a4);
}
