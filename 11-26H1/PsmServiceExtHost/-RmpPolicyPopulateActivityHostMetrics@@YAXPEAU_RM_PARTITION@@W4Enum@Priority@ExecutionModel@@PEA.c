/*
 * XREFs of ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180006A40
 * Callers:
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180003E90 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpOfferLazyDecommitQueuePartitionHosts@@YAXPEAU_RM_PARTITION@@PEAU_RM_OFFER_LAZY_DECOMMIT_CONTEXT@@@Z @ 0x18006C418 (-RmpOfferLazyDecommitQueuePartitionHosts@@YAXPEAU_RM_PARTITION@@PEAU_RM_OFFER_LAZY_DECOMMIT_CONT.c)
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006E20C (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008A39C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180006CE0 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180006D80 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int16 __fastcall RmpPolicyPopulateActivityHostMetrics(
        __int64 a1,
        unsigned int a2,
        char **a3,
        unsigned __int16 a4,
        unsigned __int8 (__fastcall *a5)(volatile signed __int64 *, __int64),
        __int64 a6)
{
  unsigned __int16 v8; // r8
  __int16 result; // ax
  __int64 v12; // r8
  void *v13; // rcx
  __int64 v14; // rsi
  volatile signed __int64 **v15; // rdx
  volatile signed __int64 *Next; // rdi
  volatile signed __int64 **i; // rdx
  char *v18; // rax
  unsigned __int64 v19; // rdx
  _QWORD v20[2]; // [rsp+20h] [rbp-38h] BYREF
  void *v21; // [rsp+30h] [rbp-28h]
  volatile signed __int64 **v22; // [rsp+38h] [rbp-20h]

  v8 = *((_WORD *)a3 + 22);
  result = a4 & v8;
  if ( (a4 & v8) != a4 )
  {
    if ( !v8 )
    {
      v12 = *((unsigned int *)a3 + 8);
      v13 = *a3;
      *((_DWORD *)a3 + 9) = 0;
      memset_0(v13, 0, v12 << 6);
      v14 = a1 - 296;
      RtlAcquireSRWLockShared(v14 + 16);
      v15 = *(volatile signed __int64 ***)(v14 + 8);
      v20[0] = v14;
      v22 = v15;
      v20[1] = v14;
      v21 = v15;
      if ( v15 && (Next = *v15, ((unsigned __int8)*v15 & 1) == 0) )
      {
LABEL_9:
        v21 = (void *)Next;
        if ( Next )
        {
          if ( _InterlockedIncrement64(Next + 2) <= 1 )
            __fastfail(0xEu);
          do
          {
            if ( !a5 || a5(Next, a6) )
            {
              v18 = *a3;
              v19 = (unsigned __int64)*((unsigned int *)a3 + 9) << 6;
              *(_QWORD *)&v18[v19] = 0LL;
              *(_QWORD *)&v18[v19 + 8] = 0LL;
              *(_QWORD *)&v18[v19 + 16] = 0LL;
              *(_QWORD *)&v18[v19 + 24] = 0LL;
              *(_QWORD *)&v18[v19 + 32] = 0LL;
              *(_QWORD *)&v18[v19 + 40] = 0LL;
              *(_QWORD *)&v18[v19 + 56] = 0LL;
              *(_QWORD *)&v18[v19 + 48] = Next;
              ++*((_DWORD *)a3 + 9);
            }
            RmpObjectRelease((PVOID)Next);
            Next = (volatile signed __int64 *)RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v20);
          }
          while ( Next );
          v14 = v20[0];
        }
      }
      else
      {
        for ( i = v15 + 1;
              (unsigned __int64)i < *(_QWORD *)(v14 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v14 + 4) >> 5);
              ++i )
        {
          Next = *i;
          if ( ((unsigned __int8)*i & 1) == 0 )
          {
            v22 = i;
            goto LABEL_9;
          }
        }
      }
      result = RtlReleaseSRWLockShared(v14 + 16);
    }
    if ( *((_DWORD *)a3 + 9) )
      return RmpActivityHostPopulateMetrics(a3, a4, a2);
  }
  return result;
}
