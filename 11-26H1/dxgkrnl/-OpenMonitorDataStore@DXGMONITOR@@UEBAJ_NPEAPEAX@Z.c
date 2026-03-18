/*
 * XREFs of ?OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z @ 0x1403C3A20
 * Callers:
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x14027FA6C (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1403C3988 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1400546F4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x140098748 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGMONITOR::OpenMonitorDataStore(DXGMONITOR *this, char a2, void **a3)
{
  bool v3; // zf
  char v7; // bp
  unsigned __int16 v8; // ax
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  NTSTATUS v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_DWORD *)this + 64) == 1;
  Destination = 0LL;
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 531;
  }
  if ( !*((_WORD *)this + 184) )
  {
    WdLogSingleEntry2(2LL, (char *)this - 24, -1073741637LL);
    WdLogGlobalForLineNumber = 539;
    return 3221225659LL;
  }
  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 80LL))(*((_QWORD *)this + 18)) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 96LL))(*((_QWORD *)this + 18)) )
    {
      v7 = 1;
      goto LABEL_5;
    }
    v15 = WdLogNewEntry5_WdTrace(v14, v13);
    *(_QWORD *)(v15 + 24) = (char *)this - 24;
    *(_QWORD *)(v15 + 32) = -1073741637LL;
    WdLogGlobalForLineNumber = 550;
    return 3221225659LL;
  }
LABEL_5:
  v8 = *((_WORD *)this + 184) + 170;
  Destination.MaximumLength = v8;
  if ( v7 )
  {
    v8 += *((_WORD *)this + 200);
    Destination.MaximumLength = v8;
  }
  Destination.Buffer = (wchar_t *)operator new[](v8, 0x4D677844u, 256LL);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeToString(
      &Destination,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore");
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)this + 23);
    if ( v7 )
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)this + 25);
    v9 = a2 != 0 ? 0xFFF2FFDA : 0;
    v12 = DxgkOpenRegistrySubkey(a3, v9 + 983103, 0LL, &Destination);
    if ( v12 == -1073741772
      && (a2 || (v12 = DxgkCreateRegistrySubkey(a3, v9 + 983103, 0LL, &Destination), v12 == -1073741772)) )
    {
      v17 = WdLogNewEntry5_WdTrace(v11, v10);
      *(_QWORD *)(v17 + 24) = (char *)this - 24;
      *(_QWORD *)(v17 + 32) = -1073741772LL;
      WdLogGlobalForLineNumber = 616;
    }
    else if ( v12 < 0 )
    {
      WdLogSingleEntry2(2LL, (char *)this - 24, v12);
      WdLogGlobalForLineNumber = 620;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Destination.Buffer);
    return (unsigned int)v12;
  }
  else
  {
    WdLogSingleEntry1(6LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 575;
  }
  return result;
}
