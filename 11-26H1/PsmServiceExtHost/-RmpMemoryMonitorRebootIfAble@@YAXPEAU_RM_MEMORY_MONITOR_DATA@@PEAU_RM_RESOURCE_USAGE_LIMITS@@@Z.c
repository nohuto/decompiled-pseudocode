/*
 * XREFs of ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180003B84
 * Callers:
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180003E90 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180003590 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180004230 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004028C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006C548 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpMemoryMonitorRebootIfAble(struct _RM_MEMORY_MONITOR_DATA *a1, struct _RM_RESOURCE_USAGE_LIMITS *a2)
{
  __int64 v4; // rsi
  char v5; // di
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // r9d
  int v10; // [rsp+68h] [rbp-A0h] BYREF
  DWORD cbData; // [rsp+6Ch] [rbp-9Ch] BYREF
  BYTE Data[8]; // [rsp+70h] [rbp-98h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp-90h] BYREF
  __int64 v14; // [rsp+80h] [rbp-88h] BYREF
  __int64 v15; // [rsp+88h] [rbp-80h] BYREF
  __int64 v16; // [rsp+90h] [rbp-78h] BYREF
  __int64 v17; // [rsp+98h] [rbp-70h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v20[16]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+C8h] [rbp-40h]
  _BYTE SystemInformation[8]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v23; // [rsp+110h] [rbp+8h]
  _BYTE v24[48]; // [rsp+148h] [rbp+40h] BYREF
  int v25; // [rsp+178h] [rbp+70h]
  int v26; // [rsp+17Ch] [rbp+74h]
  int v27; // [rsp+180h] [rbp+78h]
  int v28; // [rsp+1B8h] [rbp+B0h]
  int v29; // [rsp+1BCh] [rbp+B4h]
  __int64 v30; // [rsp+298h] [rbp+190h]

  memset_0(SystemInformation, 0, 0x40uLL);
  memset(Data, 0, sizeof(Data));
  cbData = 0;
  memset_0(v20, 0, 0x50uLL);
  memset_0(v24, 0, 0x178uLL);
  v4 = *(_QWORD *)a1;
  v5 = 0;
  phkResult = 0LL;
  if ( dword_1800E1278 )
  {
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    NtQuerySystemInformation(SystemPerformanceInformation, v24, 0x178u, 0LL);
    if ( (*((_BYTE *)a1 + 92) & 2) == 0 )
    {
      if ( (unsigned int)dword_1800E1278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 0x400000000009LL) )
      {
        LOBYTE(v10) = *(_BYTE *)(v4 + 308) & 1;
        v15 = v28 * v23;
        v16 = v23 * v29;
        v17 = v30 * v23;
        v18 = v23 * v26;
        v19 = v23 * v27;
        v14 = v23 * v25;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          v23,
          (__int64)&unk_1800D3AF9,
          v6,
          v7,
          (__int64)&v14,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v10);
      }
      *((_DWORD *)a1 + 23) |= 2u;
      v5 = 1;
    }
  }
  if ( (*(_BYTE *)(v4 + 308) & 1) != 0 )
  {
    if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult)
      || (cbData = 4, RegQueryValueExW(phkResult, L"RebootOnLowCommit", 0LL, 0LL, Data, &cbData))
      || *(_DWORD *)Data )
    {
      if ( RmpMemoryMonitorWaitForEvents(a1, 0x34u, *((_DWORD *)a1 + 18), (enum _RM_MEMORY_MONITOR_EVENT *)&Data[4]) )
      {
        RmpSystemMemoryMetricsQuery((struct _RM_SYSTEM_MEMORY_METRICS *)v20);
        if ( v21 >= *((_QWORD *)a2 + 15) )
          __fastfail(0xC00001AD);
        if ( v5
          && (unsigned int)dword_1800E1278 > 4
          && (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 0x400000000009LL) )
        {
          v14 = v8;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1800E1278,
            (unsigned int)&unk_1800D3ABB,
            v8,
            v9,
            (__int64)&v14);
        }
      }
    }
  }
  if ( phkResult )
    RegCloseKey(phkResult);
}
