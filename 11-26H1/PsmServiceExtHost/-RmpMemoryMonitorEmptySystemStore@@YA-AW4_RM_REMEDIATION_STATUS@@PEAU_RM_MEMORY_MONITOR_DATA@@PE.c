/*
 * XREFs of ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800047BC
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180005000 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180004230 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4444@Z @ 0x1800045CC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z @ 0x1800046E0 (-RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z.c)
 *     ?RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z @ 0x180004A5C (-RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptySystemStore(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r14d
  __int64 v14; // rcx
  unsigned int v15; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-81h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp-71h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-61h] BYREF
  __int64 v21; // [rsp+88h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-49h] BYREF
  void *v23; // [rsp+A0h] [rbp-39h]
  int v24; // [rsp+A8h] [rbp-31h]
  int v25; // [rsp+ACh] [rbp-2Dh]
  unsigned __int64 *v26; // [rsp+B0h] [rbp-29h]
  __int64 v27; // [rsp+B8h] [rbp-21h]
  unsigned __int64 *v28; // [rsp+C0h] [rbp-19h]
  __int64 v29; // [rsp+C8h] [rbp-11h]
  unsigned __int64 *v30; // [rsp+D0h] [rbp-9h]
  __int64 v31; // [rsp+D8h] [rbp-1h]
  unsigned __int64 *v32; // [rsp+E0h] [rbp+7h]
  __int64 v33; // [rsp+E8h] [rbp+Fh]

  v4 = *(_QWORD *)(a2 + 56) - *(_QWORD *)(a3 + 56);
  v16 = 0LL;
  v15 = 0;
  if ( (int)RmpSystemQueryCompressionProcessPrivateWorkingSet(&v16) < 0 )
  {
    return 2;
  }
  else
  {
    v7 = v16;
    v8 = v4 >> 2;
    if ( v16 >= v4 >> 2 )
    {
      if ( v16 < v4 )
        v4 = v16;
      v13 = RmpSystemTrimCompressionProcessPrivateWorkingSet(v4);
      if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 )
      {
        v14 = qword_1800E1290 & 1;
        if ( v14 == qword_1800E1290 )
        {
          v21 = *(_QWORD *)(a3 + 56);
          *(_QWORD *)&EventDescriptor.Id = *(_QWORD *)(a2 + 56);
          v19 = v4;
          v18 = v7;
          v17 = v8;
          LODWORD(v16) = v13;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v14,
            byte_1800D407A,
            v11,
            v12,
            (__int64)&v16,
            (__int64)&EventDescriptor,
            (__int64)&v21,
            (__int64)&v17,
            (__int64)&v18,
            (__int64)&v19);
        }
      }
      if ( v13 < 0
        || (unsigned int)RmpMemoryMonitorWaitForEvents(
                           (struct _RM_MEMORY_MONITOR_DATA *)a1,
                           5,
                           *(_DWORD *)(a1 + 72),
                           (enum _RM_MEMORY_MONITOR_EVENT *)&v15)
        || v15 != 2 )
      {
        return 0;
      }
      else
      {
        return 4;
      }
    }
    else
    {
      v9 = 2;
      if ( (unsigned int)dword_1800E1278 > 5 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
      {
        v18 = *(_QWORD *)(a3 + 56);
        v19 = *(_QWORD *)(a2 + 56);
        v32 = &v16;
        v30 = &v17;
        v28 = &v18;
        v26 = &v19;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_1800E1280;
        v17 = v8;
        v33 = 8LL;
        v31 = 8LL;
        v29 = 8LL;
        v27 = 8LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 1LL;
        UserData.Size = *(unsigned __int16 *)off_1800E1280;
        v23 = &unk_1800D386F;
        UserData.Reserved = 2;
        v24 = 150;
        v25 = 1;
        v15 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
      }
    }
  }
  return v9;
}
