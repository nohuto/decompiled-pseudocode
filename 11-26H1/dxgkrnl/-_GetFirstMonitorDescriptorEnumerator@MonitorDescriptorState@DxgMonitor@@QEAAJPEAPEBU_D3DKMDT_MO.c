/*
 * XREFs of ?_GetFirstMonitorDescriptorEnumerator@MonitorDescriptorState@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x14040FE88
 * Callers:
 *     ?AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x140415CE0 (-AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::_GetFirstMonitorDescriptorEnumerator(
        DxgMonitor::MonitorDescriptorState *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v10; // rdx
  char *v11; // rdi
  char *v12; // rax
  char **v13; // rcx
  __int64 result; // rax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int128 v16; // [rsp+30h] [rbp-18h]

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1760;
  }
  v4 = *((_QWORD *)this + 20);
  if ( !v4 || !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4) )
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 1764;
    goto LABEL_13;
  }
  v5 = *((_QWORD *)this + 20);
  v15 = 0LL;
  v16 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v6 + 32LL))(v6, 0LL, &v15) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7) + 24) = this;
    WdLogGlobalForLineNumber = 1788;
LABEL_13:
    *a2 = 0LL;
    return 0LL;
  }
  v9 = operator new(0x30uLL, 0x4D677844u, 256LL);
  v10 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v9;
  if ( !v9 )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 1802;
    return result;
  }
  v11 = (char *)this + 168;
  *(_OWORD *)v9 = 0LL;
  *(_OWORD *)(v9 + 16) = 0LL;
  *(_OWORD *)(v9 + 32) = 0LL;
  *(_OWORD *)v9 = v15;
  *(_QWORD *)(v9 + 16) = v16;
  *(_DWORD *)(v9 + 24) = DWORD2(v16);
  v12 = (char *)(v9 + 32);
  v13 = (char **)*((_QWORD *)v11 + 1);
  if ( *v13 != v11 )
    __fastfail(3u);
  *(_QWORD *)v12 = v11;
  v10[1].DataSize = (SIZE_T)v13;
  *v13 = v12;
  *((_QWORD *)v11 + 1) = v12;
  *a2 = v10;
  return 0LL;
}
