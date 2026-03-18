/*
 * XREFs of ?MonitorGetMonitorOrientationsFromTarget@@YAJPEAXIPEAK1@Z @ 0x1402CC298
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401D26C0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x1400985E4 (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorGetMonitorOrientationsFromTarget(
        _QWORD *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  MONITOR_MGR *v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // eax
  struct DXGMONITOR *v12; // rdx
  void *v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+8h]

  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !a1[395] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 782;
  }
  if ( *(_QWORD *)(a1[395] + 112LL) )
  {
    v13 = retaddr;
    v14 = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v13);
    MONITOR_MGR::_GetMonitorInstance(v7, a2, 1, (struct MONITOR_REF_ACCESSOR *)&v13);
    v8 = v14;
    v15 = v14;
    if ( v14 )
      MonitorResourceLock::AcquireShared((PERESOURCE)(v14 + 40));
    v16[0] = retaddr;
    v9 = 2LL;
    do
    {
      v16[1] = v8;
      --v9;
    }
    while ( v9 );
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v16);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v13);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 791;
    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v15, v12);
    v8 = v15;
  }
  if ( v8 )
  {
    if ( a3 )
    {
      v10 = 0;
      if ( *(_DWORD *)(v8 + 312) != *(_DWORD *)(v8 + 304) )
        v10 = *(_DWORD *)(v8 + 312);
      *a3 = v10;
    }
    ExReleaseResourceLite((PERESOURCE)(v8 + 40));
    KeLeaveCriticalRegion();
    v15 = 0LL;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v16);
    if ( v15 )
    {
      ExReleaseResourceLite((PERESOURCE)(v15 + 40));
      KeLeaveCriticalRegion();
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2653;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v16);
    if ( v15 )
    {
      ExReleaseResourceLite((PERESOURCE)(v15 + 40));
      KeLeaveCriticalRegion();
    }
    return 3221226021LL;
  }
}
