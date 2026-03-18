/*
 * XREFs of ObFastReferenceObjectLocked @ 0x14048CC4C
 * Callers:
 *     MiPrepareToFlushSubsection @ 0x1404EBD20 (MiPrepareToFlushSubsection.c)
 *     MiNotifyUserOfLostData @ 0x140527B18 (MiNotifyUserOfLostData.c)
 *     MiNoPagesLastChance @ 0x140703B60 (MiNoPagesLastChance.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     PspReferenceSystemDll @ 0x140962FE8 (PspReferenceSystemDll.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1, ULONG a2)
{
  unsigned __int64 v2; // rbx

  v2 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v2 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), a2);
  return v2;
}
