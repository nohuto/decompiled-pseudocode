/*
 * XREFs of ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1402CAFA0
 * Callers:
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1402AAE98 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x1400985E4 (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AddingMonitorOrientation(
        ADAPTER_DISPLAY *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  char v4; // bl
  char v6; // r15
  int v7; // r14d
  MONITOR_MGR *v8; // r10
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // edi
  struct DXGMONITOR *v13; // rdx
  void *v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]

  v3 = *((_QWORD *)this + 2);
  v4 = 0;
  v6 = a2;
  LOBYTE(v7) = 0;
  if ( !v3 || a3 == -1 )
  {
    v11 = -1073741811;
  }
  else
  {
    if ( !*(_QWORD *)(v3 + 3160) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 782;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 3160) + 112LL) )
    {
      v14 = retaddr;
      v15 = 0LL;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v14);
      MONITOR_MGR::_GetMonitorInstance(v8, a3, 1u, (struct MONITOR_REF_ACCESSOR *)&v14);
      v9 = v15;
      v16 = v15;
      if ( v15 )
        MonitorResourceLock::AcquireShared((PERESOURCE)(v15 + 40));
      v17[0] = retaddr;
      v10 = 2LL;
      do
      {
        v17[1] = v9;
        --v10;
      }
      while ( v10 );
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v17);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v14);
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 791;
      CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v16, v13);
      v9 = v16;
    }
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 312) != *(_DWORD *)(v9 + 304) )
        v7 = *(_DWORD *)(v9 + 312);
      ExReleaseResourceLite((PERESOURCE)(v9 + 40));
      KeLeaveCriticalRegion();
      v16 = 0LL;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v17);
      if ( v16 )
      {
        ExReleaseResourceLite((PERESOURCE)(v16 + 40));
        KeLeaveCriticalRegion();
      }
      v11 = 0;
    }
    else
    {
      v11 = -1073741275;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2653;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v17);
      if ( v16 )
      {
        ExReleaseResourceLite((PERESOURCE)(v16 + 40));
        KeLeaveCriticalRegion();
      }
    }
  }
  if ( v11 >= 0 )
    v4 = v7;
  return ((v4 + v6 - 1) & 3u) + 1;
}
