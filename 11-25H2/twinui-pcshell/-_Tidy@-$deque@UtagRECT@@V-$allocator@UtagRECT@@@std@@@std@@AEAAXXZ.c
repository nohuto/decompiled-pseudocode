/*
 * XREFs of ?_Tidy@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800BCBD4
 * Callers:
 *     ?RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@@Z @ 0x1800BC8EC (-RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewColl.c)
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x1800BC9A4 (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V-$vector@_KV-$a.c)
 *     ??1?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800BD84C (--1-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x180584EA0 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<tagRECT>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  void **v4; // rdi
  _QWORD *v5; // r14
  __int64 v6; // rsi
  void *v7; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = v2 - 1;
    a1[4] = v3;
    if ( !v3 )
      a1[3] = 0LL;
  }
  v4 = (void **)(a1 + 1);
  v5 = a1 + 1;
  if ( a1[1] )
  {
    v6 = a1[2];
    if ( v6 )
    {
      do
      {
        --v6;
        v7 = (void *)*((_QWORD *)*v4 + v6);
        if ( v7 )
          std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x10);
      }
      while ( v6 );
      v5 = a1 + 1;
    }
    std::_Deallocate<16,0>(*v4, (const struct std::nothrow_t *)(8LL * a1[2]));
  }
  a1[2] = 0LL;
  *v5 = 0LL;
}
