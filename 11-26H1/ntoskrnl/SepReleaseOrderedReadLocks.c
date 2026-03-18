/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x140486088
 * Callers:
 *     SeCompareTokens @ 0x140A28A40 (SeCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x140AB7BE8 (SepIsSiblingTokenByPointer.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8

  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4);
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6);
}
