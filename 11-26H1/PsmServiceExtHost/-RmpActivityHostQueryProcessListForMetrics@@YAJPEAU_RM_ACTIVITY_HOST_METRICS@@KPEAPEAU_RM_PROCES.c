/*
 * XREFs of ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x180057C30
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180057A7C (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002FF30 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ??$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAKK@Z @ 0x18005835C (--$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpActivityHostQueryProcessListForMetrics(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR **a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  PVOID Heap; // r14
  unsigned int v6; // r13d
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR *v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // r12d
  unsigned int v10; // eax
  char *v11; // r15
  __int64 v12; // rbx
  int v13; // r8d
  unsigned int v14; // ecx
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // [rsp+50h] [rbp-28h] BYREF
  int v24; // [rsp+54h] [rbp-24h]
  unsigned int v25; // [rsp+58h] [rbp-20h] BYREF
  int v26; // [rsp+5Ch] [rbp-1Ch] BYREF
  PVOID v27[3]; // [rsp+60h] [rbp-18h] BYREF

  v23 = 0;
  v4 = a2;
  v24 = 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( Heap )
  {
    v6 = v4;
    v25 = v4;
    v27[0] = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16LL * v4);
    v7 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)v27[0];
    if ( v27[0] )
    {
      v8 = 0;
      v9 = 0;
      while ( 2 )
      {
        if ( v9 >= v4 )
        {
          *a3 = v7;
          v7 = 0LL;
          v18 = 0;
          *a4 = v8;
        }
        else
        {
          v10 = v24;
          v11 = (char *)a1 + 64 * (unsigned __int64)v9;
          v12 = *((_QWORD *)v11 + 6);
          while ( 1 )
          {
            v23 = v10;
            v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int, PVOID, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 40LL) + 72LL))(
                    v12 + 544,
                    *(unsigned int *)(v12 + 612),
                    v12 + 80,
                    *(unsigned int *)(v12 + 616),
                    *(_QWORD *)(v12 + 32),
                    *(_BYTE *)(v12 + 648) != 0 ? 4 : 0,
                    Heap,
                    &v23);
            if ( v13 >= 0 )
              break;
            if ( v13 != -2147483643 )
            {
              if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
              {
                v26 = v21;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                  (__int64)&dword_1800E1278,
                  byte_1800D21A0,
                  v21,
                  v22,
                  (__int64)&v26);
              }
              goto LABEL_11;
            }
            Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Heap, 8LL * v23);
            if ( !Heap )
            {
              v18 = -1073741801;
              goto LABEL_14;
            }
            v10 = v23;
            v24 = v23;
          }
          v14 = v23;
          if ( !v23 )
          {
LABEL_11:
            v4 = a2;
            ++v9;
            continue;
          }
          if ( v6 - v8 >= v23 )
          {
LABEL_9:
            v15 = 0LL;
            if ( v14 )
            {
              do
              {
                v16 = *((_DWORD *)Heap + 2 * v15);
                v15 = (unsigned int)(v15 + 1);
                v17 = v8++;
                v17 *= 2LL;
                *((_DWORD *)v7 + 2 * v17 + 2) = v16;
                *((_QWORD *)v7 + v17) = v11;
              }
              while ( (unsigned int)v15 < v23 );
            }
            goto LABEL_11;
          }
          v20 = RmpArrayGrow<_RM_PROCESS_ID_HOST_METRICS_PAIR>(v27, &v25, v23 + v8);
          v7 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)v27[0];
          v18 = v20;
          if ( !v20 )
          {
            v6 = v25;
            v14 = v23;
            goto LABEL_9;
          }
        }
        break;
      }
    }
    else
    {
      v18 = -1073741801;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_14:
    if ( v7 )
      HampFreeHeap(v7);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v18;
}
