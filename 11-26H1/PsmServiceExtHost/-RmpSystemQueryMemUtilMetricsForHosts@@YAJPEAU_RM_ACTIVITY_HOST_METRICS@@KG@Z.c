/*
 * XREFs of ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180057A7C
 * Callers:
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180006D80 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180057A04 (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002FF30 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x180057C30 (-RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCES.c)
 *     ?RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU_MEMUTIL_PROCESS_METRICS@@G@Z @ 0x180057F2C (-RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall RmpSystemQueryMemUtilMetricsForHosts(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        unsigned __int16 a3)
{
  int v4; // eax
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR *v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // r14
  struct _MEMUTIL_PROCESS_METRICS *Heap; // rax
  struct _MEMUTIL_PROCESS_METRICS *v10; // rdi
  struct _MEMUTIL_PROCESS_METRICS *v11; // rcx
  int *v12; // rdx
  int v13; // eax
  unsigned int v14; // r9d
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  PVOID P; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+20h] BYREF

  v21 = 0;
  P = 0LL;
  v4 = RmpActivityHostQueryProcessListForMetrics(a1, a2, (struct _RM_PROCESS_ID_HOST_METRICS_PAIR **)&P, &v21);
  v5 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = v21;
    if ( v21 )
    {
      v8 = v21;
      Heap = (struct _MEMUTIL_PROCESS_METRICS *)RtlAllocateHeap(
                                                  NtCurrentPeb()->ProcessHeap,
                                                  0,
                                                  (unsigned __int64)v21 << 6);
      v10 = Heap;
      if ( Heap )
      {
        memset_0(Heap, 0, (unsigned __int64)v7 << 6);
        if ( v7 )
        {
          v11 = v10;
          v12 = (int *)((char *)v5 + 8);
          do
          {
            v13 = *v12;
            v12 += 4;
            *(_DWORD *)v11 = v13;
            v11 = (struct _MEMUTIL_PROCESS_METRICS *)((char *)v11 + 64);
            --v8;
          }
          while ( v8 );
        }
        v14 = (2 * (a3 & 4)) | 1;
        if ( (a3 & 8) == 0 )
          v14 = 2 * (a3 & 4);
        v15 = v14 | 0x40;
        if ( (a3 & 0x20) == 0 )
          v15 = v14;
        if ( (unsigned int)MemUtilQueryProcessMetrics(v10, v7, v15) )
        {
          if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
          {
            v21 = v18;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
              v17,
              byte_1800D44E0,
              v18,
              v19,
              (__int64)&v21);
          }
          v6 = -1073741823;
        }
        else
        {
          RmpActivityHostAggregateMemUtilMetricsByProcess(v5, v7, v10, a3);
          v6 = 0;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      }
      else
      {
        v6 = -1073741801;
      }
    }
    else
    {
      v6 = 0;
    }
  }
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return v6;
}
