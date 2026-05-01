/*
 * XREFs of ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x180047450
 * Callers:
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x1800470F4 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180047190 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEAXPEBX1@Z @ 0x180047440 (-RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEAXPEBX1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPolicyCompareActivityHostsByPriorityAndCommitEx(
        struct _RM_POLICY_RECLAIM_CONTEXT *a1,
        const struct _RM_ACTIVITY_HOST_METRICS *a2,
        const struct _RM_ACTIVITY_HOST_METRICS *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // r14d
  __int64 v5; // rbp
  int v8; // r9d
  int v9; // r10d
  char v10; // si
  int v12; // edx
  int v13; // r9d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int8 v18; // dl

  v3 = *((_QWORD *)a2 + 6);
  v4 = 0;
  v5 = *((_QWORD *)a3 + 6);
  if ( a1 )
  {
    v8 = *((_DWORD *)a1 + 2);
    v9 = *((_DWORD *)a1 + 3);
    v10 = *((_BYTE *)a1 + 20);
    LOWORD(a1) = *(_WORD *)(v5 + 1168);
    if ( v8 == 1 )
    {
      if ( (*(_WORD *)(v3 + 1168) & 0x10) != 0 && ((unsigned __int8)a1 & 0x10) == 0 )
        return 0xFFFFFFFFLL;
      if ( (((unsigned __int16)a1 >> 4) & 1) != 0 && (*(_WORD *)(v3 + 1168) & 0x10) == 0 )
        return 1LL;
    }
  }
  else
  {
    a1 = (struct _RM_POLICY_RECLAIM_CONTEXT *)*(unsigned __int16 *)(v5 + 1168);
    v8 = 0;
    v10 = 0;
    v9 = 2;
  }
  v12 = *((_DWORD *)a3 + 14);
  if ( *((_DWORD *)a2 + 14) > v12 )
    return 0xFFFFFFFFLL;
  if ( *((_DWORD *)a2 + 14) != v12 )
    return 1LL;
  if ( v10 )
  {
    v18 = *(_BYTE *)(v5 + 1442);
    if ( *(_BYTE *)(v3 + 1442) < v18 )
      return 0xFFFFFFFFLL;
    if ( *(_BYTE *)(v3 + 1442) > v18 )
      return 1LL;
  }
  v13 = v8 - 2;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      if ( ((unsigned __int8)a1 & 0x20) == 0 && (*(_WORD *)(v3 + 1168) & 0x20) != 0 )
        return 0xFFFFFFFFLL;
      if ( ((unsigned __int8)a1 & 0x20) != 0 && (*(_WORD *)(v3 + 1168) & 0x20) == 0 )
        return 1LL;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 0x10) == 0 && (*(_WORD *)(v3 + 1168) & 0x10) != 0 )
      return 0xFFFFFFFFLL;
    if ( ((unsigned __int8)a1 & 0x10) != 0 && (*(_WORD *)(v3 + 1168) & 0x10) == 0 )
      return 1LL;
  }
  if ( v9 != 1 )
  {
    v14 = *(_QWORD *)(v3 + 1216);
    if ( v14 <= *(_QWORD *)(v5 + 1216) )
    {
      if ( v14 < *(_QWORD *)(v5 + 1216) )
        return 1LL;
      if ( v9 == 2 || !v9 )
      {
        v15 = *(_QWORD *)a2 >> 1;
        if ( (*(_WORD *)(v3 + 1440) & 0x100) == 0 )
          v15 = *(_QWORD *)a2;
        if ( v9 == 2 )
          goto LABEL_19;
      }
      else
      {
        v15 = 0LL;
      }
      if ( v9 )
      {
        v16 = 0LL;
        goto LABEL_20;
      }
LABEL_19:
      v16 = *(_QWORD *)a3;
      goto LABEL_20;
    }
    return 0xFFFFFFFFLL;
  }
  v15 = *((_QWORD *)a2 + 5) >> 1;
  if ( (*(_WORD *)(v3 + 1440) & 0x100) == 0 )
    v15 = *((_QWORD *)a2 + 5);
  v16 = *((_QWORD *)a3 + 5);
LABEL_20:
  v17 = v16 >> 1;
  if ( (*(_WORD *)(v5 + 1440) & 0x100) == 0 )
    v17 = v16;
  if ( v15 > v17 )
    return 0xFFFFFFFFLL;
  LOBYTE(v4) = v15 < v17;
  return v4;
}
