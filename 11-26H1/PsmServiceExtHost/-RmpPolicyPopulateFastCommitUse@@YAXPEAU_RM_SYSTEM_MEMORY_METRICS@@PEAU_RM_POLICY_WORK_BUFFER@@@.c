/*
 * XREFs of ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x1800060F4
 * Callers:
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006E20C (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 * Callees:
 *     ?RmpActivityHostIsKillable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006444 (-RmpActivityHostIsKillable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpPolicyPopulateFastCommitUse(struct _RM_SYSTEM_MEMORY_METRICS *a1, struct _RM_POLICY_WORK_BUFFER *a2)
{
  unsigned int i; // edi
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rax

  for ( i = 0; i < *((_DWORD *)a2 + 9); ++i )
  {
    v5 = *(_QWORD *)a2;
    v6 = (unsigned __int64)i << 6;
    v7 = *(_QWORD *)(v6 + *(_QWORD *)a2 + 48);
    if ( RmpActivityHostIsKillable((struct _RM_ACTIVITY_HOST *)v7) && (*(_BYTE *)(v7 + 1168) & 0x40) != 0 )
      v8 = *(_QWORD *)(v6 + v5);
    else
      v8 = *(_QWORD *)(v6 + v5 + 40);
    *((_QWORD *)a1 + 4) += v8;
  }
  *((_DWORD *)a1 + 18) |= 1u;
}
