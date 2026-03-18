/*
 * XREFs of ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x140346A10
 * Callers:
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x140191E54 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x14034688C (-MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x140408A2C (-_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGMONITOR::GetCCDMonitorID(DXGMONITOR *this, unsigned __int8 a2, int a3, unsigned __int16 *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  NTSTATUS appended; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  const WCHAR *v20; // rdx
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2431;
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2432;
  }
  a4[a3 - 1] = 0;
  v8 = *((_QWORD *)this + 19);
  *(_QWORD *)&Destination.Length = 0LL;
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(2 * a3 - 2);
  Destination.Buffer = a4;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8) )
    goto LABEL_6;
  v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19));
  v20 = L"MSNIL";
  if ( !v19 )
    v20 = L"MSBDD_";
  appended = RtlAppendUnicodeToString(&Destination, v20);
  if ( appended < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2472;
  }
  else
  {
LABEL_6:
    v9 = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 16 * (v4 ^ 1) + 376));
    appended = v9;
    if ( v9 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10) + 24) = v9;
      WdLogGlobalForLineNumber = 2493;
    }
    else
    {
      v13 = *((_QWORD *)this + 53);
      if ( v13 && !*(_DWORD *)(v13 + 16) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2503;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19))
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 80LL))(*((_QWORD *)this + 19)) )
      {
        v14 = *((_QWORD *)this + 53);
        if ( v14 )
        {
          if ( *(_DWORD *)(v14 + 16) <= 1u )
            return 0LL;
        }
      }
      v16 = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 408));
      appended = v16;
      if ( v16 >= 0 )
        return 0LL;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17) + 24) = v16;
      WdLogGlobalForLineNumber = 2512;
    }
  }
  return (unsigned int)appended;
}
