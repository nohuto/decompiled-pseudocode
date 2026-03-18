/*
 * XREFs of ?_GetNextMonitorDescriptorEnumerator@MonitorDescriptorState@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x140402D54
 * Callers:
 *     ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x140402B20 (-AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORD.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::_GetNextMonitorDescriptorEnumerator(
        const struct _D3DKMDT_MONITOR_DESCRIPTOR ****this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3)
{
  const struct _D3DKMDT_MONITOR_DESCRIPTOR **v6; // rbx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v7; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR ***v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r15
  D3DKMDT_MONITOR_DESCRIPTOR_ID v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v16; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR ***v17; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR ***v18; // rdx
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF
  __int128 v20; // [rsp+30h] [rbp-28h]

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1854;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1855;
  }
  v6 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)(this + 21);
  if ( !a2 || (v7 = *v6, *v6 == (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v6) )
  {
LABEL_23:
    WdLogSingleEntry2(2LL, a2, this);
    result = 3223192368LL;
    WdLogGlobalForLineNumber = 1870;
  }
  else
  {
    while ( v7 != &a2[1] )
    {
      if ( v6 == (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)v7 )
        goto LABEL_23;
      v7 = *(const struct _D3DKMDT_MONITOR_DESCRIPTOR **)&v7->Id;
    }
    v8 = this[16];
    if ( !v8
      || (v9 = ((__int64 (__fastcall *)(const struct _D3DKMDT_MONITOR_DESCRIPTOR ***))(*v8)[1])(v8), (v10 = v9) == 0)
      || (v11 = a2->Id + 1, (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) <= v11) )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, a2) + 24) = this;
      WdLogGlobalForLineNumber = 1884;
      goto LABEL_15;
    }
    v19 = 0LL;
    v20 = 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v10 + 32LL))(v10, v11, &v19) )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = this;
      WdLogGlobalForLineNumber = 1898;
LABEL_15:
      *a3 = 0LL;
      return 0LL;
    }
    v15 = operator new(0x30uLL, 0x4D677844u, 256LL);
    v16 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v15;
    if ( v15 )
    {
      *(_DWORD *)v15 = a2->Id + 1;
      *(_DWORD *)(v15 + 4) = DWORD1(v19);
      *(_QWORD *)(v15 + 8) = *((_QWORD *)&v19 + 1);
      *(_QWORD *)(v15 + 16) = v20;
      *(_DWORD *)(v15 + 24) = DWORD2(v20);
      v17 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR ***)(v15 + 32);
      v18 = this[22];
      if ( *v18 != v6 )
        __fastfail(3u);
      *v17 = v6;
      v16[1].DataSize = (SIZE_T)v18;
      *v18 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)v17;
      this[22] = v17;
      *a3 = v16;
      return 0LL;
    }
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 1912;
  }
  return result;
}
