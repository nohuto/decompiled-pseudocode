/*
 * XREFs of MiLockWorkingSetExclusiveAtDpc @ 0x1404C31C0
 * Callers:
 *     MiMapWithLargePages @ 0x1402A2694 (MiMapWithLargePages.c)
 *     MiFastTrimWorkingSet @ 0x14031F690 (MiFastTrimWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x1403270E0 (MiWalkPageTablesRecursively.c)
 *     MiQueryVpabAccessedState @ 0x1404646AC (MiQueryVpabAccessedState.c)
 *     MmStealTopLevelPage @ 0x1404C2F84 (MmStealTopLevelPage.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x1406E8B80 (MiFreedUnusedPfnPagesDpc.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiLockWorkingSetExclusiveAtDpc(__int64 a1)
{
  volatile LONG **v1; // rbx
  volatile LONG *v2; // rbx
  volatile LONG *v3; // rbx
  __int64 v4; // rdi

  v1 = (volatile LONG **)&qword_140E37800;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v1 = (volatile LONG **)(a1 + 192);
  v2 = *v1;
  ExAcquireSpinLockExclusiveAtDpcLevel(v2);
  v3 = v2 + 16;
  v4 = 3LL;
  do
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
    v3 += 16;
    --v4;
  }
  while ( v4 );
}
