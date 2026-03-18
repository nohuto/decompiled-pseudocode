/*
 * XREFs of ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x140412E24
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1480 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140039FEC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringLengthWorkerW @ 0x14004D50C (RtlStringLengthWorkerW.c)
 *     __report_rangecheckfailure @ 0x14006E400 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x140191220 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x1403EBA64 (-MonitorLogBadEDID@@YAXJ@Z.c)
 *     ?MonitorUnifyCCDMonitorString@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1403F9AEC (-MonitorUnifyCCDMonitorString@@YAXPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_PrepareMonitorCCDName(DXGMONITOR *this)
{
  struct _UNICODE_STRING *v1; // r15
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  int v5; // esi
  const WCHAR *v6; // rdx
  size_t v7; // rsi
  int v8; // r14d
  unsigned int v9; // edx
  unsigned int v10; // ecx
  size_t v11; // rsi
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rsi
  struct _LIST_ENTRY *Flink; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 result; // rax
  __int64 *v18; // rax
  char v19; // al
  _QWORD *v20; // rdx
  __int64 v21; // r8
  const UNICODE_STRING *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  ULONG v26; // ecx
  unsigned __int16 v27; // r14
  __int64 v28; // rax
  _BYTE v29[4]; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int16 v30; // [rsp+2Ch] [rbp-75h] BYREF
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-71h] BYREF
  _BYTE v32[24]; // [rsp+40h] [rbp-61h] BYREF
  size_t pcchLength[2]; // [rsp+58h] [rbp-49h] BYREF
  WCHAR psz[40]; // [rsp+68h] [rbp-39h] BYREF
  __int16 v35; // [rsp+B8h] [rbp+17h] BYREF

  v1 = (struct _UNICODE_STRING *)((char *)this + 392);
  if ( *((_QWORD *)this + 50) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2549;
  }
  if ( *((_DWORD *)this + 70) != 1 )
  {
    v6 = L"SIMULATED";
    goto LABEL_50;
  }
  v3 = (_QWORD *)*((_QWORD *)this + 27);
  if ( !v3[20] )
  {
LABEL_10:
    v6 = L"NOEDID";
LABEL_50:
    *((_QWORD *)this + 55) = 0LL;
    RtlInitUnicodeString(v1, v6);
    v19 = 0;
    goto LABEL_51;
  }
  pcchLength[0] = 0LL;
  memset(psz, 0, 0x46uLL);
  v4 = v3[16];
  if ( !v4 )
    v4 = v3[17];
  *(_QWORD *)v32 = 4587520LL;
  *(_QWORD *)&v32[8] = psz;
  v5 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 64LL))(v4, v32);
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2599;
LABEL_9:
    MonitorLogBadEDID(v5);
    goto LABEL_10;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 72LL))(v4, v32);
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2612;
    goto LABEL_9;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 80LL))(v4, v32);
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2624;
    goto LABEL_9;
  }
  if ( RtlStringLengthWorkerW(psz, 0x23uLL, pcchLength) >= 0 )
  {
    v7 = pcchLength[0];
  }
  else
  {
    v7 = 0LL;
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2636;
  }
  if ( v7 > 0x17 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2637;
  }
  v29[0] = 0;
  v30 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *, unsigned __int16 *))(*(_QWORD *)v4 + 88LL))(v4, v29, &v30);
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2658;
    MonitorLogBadEDID(v8);
  }
  v9 = v30;
  v10 = v29[0];
  psz[v7] = 95;
  v11 = v7 + 1;
  psz[v11++] = a0123456789abcd[(unsigned __int64)v10 >> 4];
  psz[v11++] = a0123456789abcd[v10 & 0xF];
  psz[v11++] = 95;
  psz[v11++] = a0123456789abcd[(unsigned __int64)v9 >> 12];
  psz[v11++] = a0123456789abcd[(v9 >> 8) & 0xF];
  psz[v11++] = a0123456789abcd[(unsigned __int8)v9 >> 4];
  psz[v11++] = a0123456789abcd[v9 & 0xF];
  psz[v11++] = 95;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4);
  psz[v11++] = a0123456789abcd[(unsigned __int64)v12 >> 4];
  psz[v11] = a0123456789abcd[v12 & 0xF];
  v13 = v11 + 1;
  if ( 2 * v13 >= 0x46 )
    _report_rangecheckfailure();
  psz[v13] = 0;
  if ( v13 >= 0x23 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2690;
  }
  KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  Flink = DXGMONITOR::_UniqueEntryList.Flink;
  v15 = 0LL;
  while ( Flink != &DXGMONITOR::_UniqueEntryList )
  {
    v15 = (__int64)Flink;
    if ( HIDWORD(Flink[1].Flink) == v13 && !memcmp(&Flink[1].Blink, psz, 2 * v13) )
      goto LABEL_31;
    Flink = Flink->Flink;
  }
  if ( !Flink )
  {
LABEL_31:
    if ( !v15 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2726;
    }
    if ( !*(_DWORD *)(v15 + 16) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2727;
    }
    ++*(_DWORD *)(v15 + 16);
    if ( !v15 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2765;
    }
    goto LABEL_45;
  }
  v16 = operator new[](2 * v13 + 32, 0x4D677844u, 256LL);
  v15 = v16;
  if ( !v16 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2744;
    KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
    return 3221225495LL;
  }
  *(_DWORD *)(v16 + 20) = v13;
  *(_DWORD *)(v16 + 16) = 1;
  if ( (int)RtlStringCchCopyW((char *)(v16 + 24), v13 + 1, (char *)psz) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2754;
  }
  *(_WORD *)(v15 + 2 * v13 + 24) = 0;
  v18 = (__int64 *)qword_140168750;
  if ( *(struct _LIST_ENTRY **)qword_140168750 != &DXGMONITOR::_UniqueEntryList )
    __fastfail(3u);
  *(_QWORD *)v15 = &DXGMONITOR::_UniqueEntryList;
  *(_QWORD *)(v15 + 8) = v18;
  *v18 = v15;
  qword_140168750 = v15;
LABEL_45:
  *((_QWORD *)this + 55) = v15;
  KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  if ( !RtlCreateUnicodeString(v1, psz) )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2778;
    return 3221225495LL;
  }
  v19 = 1;
LABEL_51:
  *((_BYTE *)this + 384) = v19;
  if ( *((_QWORD *)this + 50) && v19 )
    MonitorUnifyCCDMonitorString(v1);
  *(struct _UNICODE_STRING *)((char *)this + 408) = *v1;
  if ( *((_BYTE *)this + 384) )
    *((_WORD *)this + 204) -= 6;
  v20 = (_QWORD *)*((_QWORD *)this + 21);
  v21 = *(_QWORD *)(*(_QWORD *)(v20[3] + 16LL) + 216LL);
  v22 = (const UNICODE_STRING *)((*(_QWORD *)(v21 + 64) + 4912LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)(v21 + 64) + 4920LL) != 0LL));
  if ( !v22 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 2841;
    return result;
  }
  v23 = *((_QWORD *)this + 21);
  String = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*v20 + 80LL))(v23) )
  {
    v24 = *((unsigned int *)this + 45);
    v25 = *((_QWORD *)this + 21);
    memset(v32, 0, sizeof(v32));
    DXGADAPTER::GetVirtualMonitorInfo(
      *(DXGADAPTER **)(*(_QWORD *)(v25 + 24) + 16LL),
      v24,
      (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)v32);
    if ( *(_WORD *)&v32[8] )
      String = *(struct _UNICODE_STRING *)&v32[8];
  }
  v35 = 0;
  if ( !String.Length )
  {
    v26 = *((_DWORD *)this + 45);
    *(_QWORD *)&String.Length = 1310720LL;
    String.Buffer = (wchar_t *)&v35;
    if ( RtlIntegerToUnicodeString(v26, 0x10u, &String) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2874;
    }
  }
  v27 = v22->Length + String.Length + 8;
  v28 = operator new[](v27, 0x4D677844u, 256LL);
  if ( !v28 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2886;
    return 3221225495LL;
  }
  *(_OWORD *)((char *)this + 424) = 0LL;
  *((_WORD *)this + 213) = v27;
  *((_QWORD *)this + 54) = v28;
  RtlAppendUnicodeToString((PUNICODE_STRING)((char *)this + 424), L"_");
  RtlAppendUnicodeStringToString((PUNICODE_STRING)((char *)this + 424), v22);
  RtlAppendUnicodeToString((PUNICODE_STRING)((char *)this + 424), L"_");
  RtlAppendUnicodeStringToString((PUNICODE_STRING)((char *)this + 424), &String);
  return 0LL;
}
