/*
 * XREFs of ObFastReferenceObjectLocked @ 0x14048678C
 * Callers:
 *     MiPrepareToFlushSubsection @ 0x1404E5300 (MiPrepareToFlushSubsection.c)
 *     MiNotifyUserOfLostData @ 0x14052A188 (MiNotifyUserOfLostData.c)
 *     MiNoPagesLastChance @ 0x140708830 (MiNoPagesLastChance.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     PspReferenceSystemDll @ 0x140A08E70 (PspReferenceSystemDll.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1, ULONG a2)
{
  unsigned __int64 v2; // rbx

  v2 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v2 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), a2);
  return v2;
}
