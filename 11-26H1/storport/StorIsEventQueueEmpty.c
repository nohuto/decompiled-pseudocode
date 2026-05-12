/*
 * XREFs of StorIsEventQueueEmpty @ 0x1400AAC58
 * Callers:
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1400A6A10 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1400A8384 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     <none>
 */

char __fastcall StorIsEventQueueEmpty(__int64 a1)
{
  char v1; // dl
  unsigned int i; // r8d

  v1 = 1;
  for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
  {
    if ( *(_QWORD *)(a1 + ((i + 1LL) << 6)) != a1 + ((i + 1LL) << 6) )
      return 0;
  }
  return v1;
}
