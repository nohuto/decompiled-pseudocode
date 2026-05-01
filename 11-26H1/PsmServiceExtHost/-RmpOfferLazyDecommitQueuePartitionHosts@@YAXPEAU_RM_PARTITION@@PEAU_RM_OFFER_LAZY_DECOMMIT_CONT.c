/*
 * XREFs of ?RmpOfferLazyDecommitQueuePartitionHosts@@YAXPEAU_RM_PARTITION@@PEAU_RM_OFFER_LAZY_DECOMMIT_CONTEXT@@@Z @ 0x18006C418
 * Callers:
 *     ?RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18005F510 (-RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180006A40 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006C548 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall RmpOfferLazyDecommitQueuePartitionHosts(
        struct _RM_PARTITION *a1,
        struct _RM_OFFER_LAZY_DECOMMIT_CONTEXT *a2)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _BYTE v12[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+70h] [rbp-18h]

  memset_0(v12, 0, 0x50uLL);
  v4 = 0;
  *((_WORD *)a1 + 82) = 0;
  RmpPolicyPopulateActivityHostMetrics((__int64)a1, 0, (char **)a1 + 15, 0x40u, 0LL, 0LL);
  RmpSystemMemoryMetricsQuery((struct _RM_SYSTEM_MEMORY_METRICS *)v12);
  v5 = v13 * (unsigned __int64)*((unsigned int *)a2 + 12) / 0x64 / RmpPageSize;
  if ( *((_DWORD *)a1 + 39) )
  {
    do
    {
      v6 = *((_QWORD *)a1 + 15);
      v7 = (unsigned __int64)v4 << 6;
      if ( *(_QWORD *)(v7 + v6 + 40) >= (unsigned __int64)*((unsigned int *)a2 + 11) )
      {
        v8 = *(_QWORD *)(v7 + v6 + 48);
        if ( v14 - *(_QWORD *)(v8 + 1232) >= v5 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 16)) <= 1 )
            __fastfail(0xEu);
          v9 = (_QWORD *)((char *)a2 + 8);
          v10 = (_QWORD *)(v8 + 1280);
          v11 = *((_QWORD *)a2 + 1);
          if ( *(struct _RM_OFFER_LAZY_DECOMMIT_CONTEXT **)(v11 + 8) != (struct _RM_OFFER_LAZY_DECOMMIT_CONTEXT *)((char *)a2 + 8) )
            __fastfail(3u);
          *v10 = v11;
          v10[1] = v9;
          *(_QWORD *)(v11 + 8) = v10;
          *v9 = v10;
        }
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)a1 + 39) );
  }
}
