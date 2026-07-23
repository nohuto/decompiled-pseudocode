/*
 * XREFs of KiDoesNodeIntersectAffinity @ 0x1405F215C
 * Callers:
 *     KeSelectNodeForAffinityAndPartition @ 0x1405F1434 (KeSelectNodeForAffinityAndPartition.c)
 *     KiUpdateProcessGlobalIdealNode @ 0x1405F75D4 (KiUpdateProcessGlobalIdealNode.c)
 * Callees:
 *     KiQuerySubNodeActiveAffinity @ 0x140461720 (KiQuerySubNodeActiveAffinity.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14046A570 (KeEnumerateNextSchedulerSubNodeInNode.c)
 */

char __fastcall KiDoesNodeIntersectAffinity(__int64 a1, _WORD *a2)
{
  __int64 v3; // rcx
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  v5[1] = 0LL;
  v5[0] = a1;
  while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((unsigned int *)v5, &v7) )
  {
    KiQuerySubNodeActiveAffinity(v7, (__int64)&v6, 0LL);
    if ( WORD4(v6) >= *a2 )
      v3 = 0LL;
    else
      v3 = *(_QWORD *)&a2[4 * WORD4(v6) + 4];
    if ( (v3 & (unsigned __int64)v6) != 0 )
      return 1;
  }
  return 0;
}
