/*
 * XREFs of MiLockWorkingSetExclusiveAtDpc @ 0x1404BCA10
 * Callers:
 *     MiMapWithLargePages @ 0x1402A1BE4 (MiMapWithLargePages.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 *     MiQueryVpabAccessedState @ 0x14045D66C (MiQueryVpabAccessedState.c)
 *     MmStealTopLevelPage @ 0x1404BC7D4 (MmStealTopLevelPage.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x1406ED820 (MiFreedUnusedPfnPagesDpc.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiLockWorkingSetExclusiveAtDpc(__int64 a1)
{
  volatile LONG **v1; // rbx
  volatile LONG *v2; // rbx
  volatile LONG *v3; // rbx
  __int64 v4; // rdi

  v1 = (volatile LONG **)&qword_140E37980;
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
