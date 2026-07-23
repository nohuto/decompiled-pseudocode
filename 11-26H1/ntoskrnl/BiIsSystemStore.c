/*
 * XREFs of BiIsSystemStore @ 0x1409A1114
 * Callers:
 *     BiLoadSystemStore @ 0x1409A0DF0 (BiLoadSystemStore.c)
 *     BcdCloseStore @ 0x1409A1068 (BcdCloseStore.c)
 *     BiCleanupLoadedStores @ 0x1409A4348 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x1409A53B4 (BiOpenSystemStore.c)
 *     BcdForciblyUnloadStore @ 0x140B6D9BC (BcdForciblyUnloadStore.c)
 * Callees:
 *     BiIsSystemStoreCandidate @ 0x1409A119C (BiIsSystemStoreCandidate.c)
 *     BiGetRegistryValue @ 0x1409A6CB4 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

bool __fastcall BiIsSystemStore(__int64 a1)
{
  char v1; // di
  int v3; // ebx
  int v5; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  P = 0LL;
  v5 = 0;
  if ( (unsigned __int8)BiIsSystemStoreCandidate()
    && (int)BiGetRegistryValue(a1, L"TreatAsSystem", L"Description", 4LL, &P, &v5) >= 0 )
  {
    v3 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    return v3 != 0;
  }
  return v1;
}
