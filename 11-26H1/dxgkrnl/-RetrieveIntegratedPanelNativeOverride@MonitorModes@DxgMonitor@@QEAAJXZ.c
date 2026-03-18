/*
 * XREFs of ?RetrieveIntegratedPanelNativeOverride@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x14042E078
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403F3AF8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x14003586C (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::RetrieveIntegratedPanelNativeOverride(PERESOURCE Resource)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  int OwnerTable_high; // ecx
  SHORT *p_ActiveCount; // r8
  __int64 v9; // xmm1_8
  struct _ERESOURCE *v10; // rax
  PERESOURCE *SharedWaiters; // rcx
  SHORT *i; // rcx
  SHORT *v13; // rax
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-18h]

  if ( Resource )
    MonitorResourceLock::AcquireExclusive(Resource);
  v2 = *(_QWORD *)&Resource[2].ActiveCount;
  v18 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 40LL))(v3, &v15);
  if ( v4 >= 0 )
  {
    v5 = operator new(0x78uLL, 0x4D677844u, 256LL);
    v6 = v5;
    if ( v5 )
    {
      OwnerTable_high = HIDWORD(Resource[1].OwnerTable);
      p_ActiveCount = &Resource[1].ActiveCount;
      HIDWORD(Resource[1].OwnerTable) = OwnerTable_high + 1;
      *(_DWORD *)v5 = OwnerTable_high;
      *(_OWORD *)(v5 + 8) = v15;
      *(_OWORD *)(v5 + 24) = v16;
      *(_OWORD *)(v5 + 40) = v17;
      v9 = v18;
      *(_DWORD *)(v5 + 68) = 8;
      *(_DWORD *)(v5 + 72) = 8;
      *(_QWORD *)(v5 + 76) = 8LL;
      v10 = (struct _ERESOURCE *)(v5 + 96);
      *(_QWORD *)(v6 + 56) = v9;
      *(_DWORD *)(v6 + 64) = 2;
      *(_DWORD *)(v6 + 84) = 5;
      *(_DWORD *)(v6 + 88) = 1;
      SharedWaiters = (PERESOURCE *)Resource[1].SharedWaiters;
      if ( *SharedWaiters != (PERESOURCE)&Resource[1].ActiveCount )
        __fastfail(3u);
      v10->SystemResourcesList.Flink = (struct _LIST_ENTRY *)p_ActiveCount;
      *(_QWORD *)(v6 + 104) = SharedWaiters;
      *SharedWaiters = v10;
      Resource[1].SharedWaiters = v10;
      ++LODWORD(Resource[1].OwnerTable);
      Resource[1].ExclusiveWaiters = (PVOID)v6;
      for ( i = *(SHORT **)p_ActiveCount; ; i = (SHORT *)*((_QWORD *)v13 + 12) )
      {
        if ( i == p_ActiveCount )
        {
          v13 = 0LL;
        }
        else
        {
          v13 = i - 48;
          if ( !i )
            v13 = 0LL;
        }
        if ( !v13 )
          break;
        if ( *((_DWORD *)v13 + 21) == 2 && *((_DWORD *)v13 + 22) == 1 )
        {
          *((_DWORD *)v13 + 22) = 2;
          break;
        }
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 2037;
      v4 = -1073741801;
    }
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
