/*
 * XREFs of KeQueryNodeActiveProcessorCount @ 0x1404D9630
 * Callers:
 *     ExpGetNodeSubQueueConcurrencyCount @ 0x1404D95F8 (ExpGetNodeSubQueueConcurrencyCount.c)
 *     ?ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x14084CFBC (-ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryNodeActiveProcessorCount(unsigned __int16 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r10
  unsigned int i; // r9d
  __int64 v5; // rcx

  if ( a1 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  v1 = 0;
  v2 = KeNodeBlock[a1];
  if ( !v2 )
    return 0LL;
  for ( i = 0; i < *(_DWORD *)(v2 + 48); ++i )
  {
    v5 = i;
    v1 += (unsigned __int16)__popcnt(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v5) + 128LL));
  }
  return v1;
}
