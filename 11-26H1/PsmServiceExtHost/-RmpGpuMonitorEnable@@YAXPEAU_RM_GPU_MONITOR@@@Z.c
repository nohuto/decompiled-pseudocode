/*
 * XREFs of ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180089EAC
 * Callers:
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180089F38 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 */

void __fastcall RmpGpuMonitorEnable(struct _RM_GPU_MONITOR *a1)
{
  __int64 v2; // rcx

  *((_DWORD *)a1 + 11) |= 1u;
  if ( (*((_BYTE *)a1 + 44) & 2) == 0 )
  {
    if ( (int)MemUtilQueryGpuUtilization((char *)a1 + 16) >= 0 )
      RtlQueryUnbiasedInterruptTime((char *)a1 + 24);
    *((_DWORD *)a1 + 11) |= 2u;
    TpSetTimer(*(_QWORD *)a1, (char *)a1 + 8, 0LL, *((unsigned int *)a1 + 10));
  }
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v2,
      byte_1800D35CD);
}
