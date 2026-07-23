/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x14047F9F8
 * Callers:
 *     SeCompareTokens @ 0x140A3BAE0 (SeCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x140AB9228 (SepIsSiblingTokenByPointer.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
