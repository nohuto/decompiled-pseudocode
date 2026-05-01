/*
 * XREFs of ?RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18005F510
 * Callers:
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18006E464 (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpOfferLazyDecommitQueuePartitionHosts@@YAXPEAU_RM_PARTITION@@PEAU_RM_OFFER_LAZY_DECOMMIT_CONTEXT@@@Z @ 0x18006C418 (-RmpOfferLazyDecommitQueuePartitionHosts@@YAXPEAU_RM_PARTITION@@PEAU_RM_OFFER_LAZY_DECOMMIT_CONT.c)
 */

__int64 __fastcall RmpOfferLazyDecommitCheckQueueWork(struct _RM_SERVICE_GLOBALS *a1)
{
  unsigned int v1; // ebx
  struct _RM_OFFER_LAZY_DECOMMIT_CONTEXT *v2; // rdi
  bool v3; // zf
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 216);
  v3 = (*((_BYTE *)a1 + 240) & 1) == 0;
  v6 = 0LL;
  if ( v3 )
  {
    RtlQueryUnbiasedInterruptTime(&v6);
    if ( v6 - *((_QWORD *)v2 + 4) <= 10000 * (unsigned __int64)*((unsigned int *)v2 + 10) )
    {
      return (unsigned int)-1073741199;
    }
    else if ( (*((_BYTE *)a1 + 3536) & 1) != 0 )
    {
      return (unsigned int)-1073741058;
    }
    else
    {
      RmpOfferLazyDecommitQueuePartitionHosts((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312), v2);
      if ( *((struct _RM_OFFER_LAZY_DECOMMIT_CONTEXT **)v2 + 1) == (struct _RM_OFFER_LAZY_DECOMMIT_CONTEXT *)((char *)v2 + 8) )
      {
        return (unsigned int)-1073740704;
      }
      else
      {
        if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 9) != 0 && (qword_1800E1290 & 9) == qword_1800E1290 )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            (__int64)&dword_1800E1278,
            byte_1800D4218);
        TpPostWork(*(_QWORD *)v2);
        *((_DWORD *)v2 + 6) |= 1u;
      }
    }
  }
  else
  {
    return (unsigned int)-1073740682;
  }
  return v1;
}
