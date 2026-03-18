/*
 * XREFs of ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x1802066B0
 * Callers:
 *     ?ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ @ 0x1801491D8 (-ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x18014ADBC (-CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x18020A120 (-ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ.c)
 *     ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1802532E0 (-ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARG.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18014AED4 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     ??1?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAA@XZ @ 0x1802067D0 (--1-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@std@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@VCSyncLockGroup@@@std@@$0A@@?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802379E8 (--$-4U-$default_delete@VCSyncLockGroup@@@std@@$0A@@-$unique_ptr@VCSyncLockGroup@@U-$default_dele.c)
 */

void __fastcall CSyncLockGroup::RemoveRenderTarget(CSyncLockGroup *this, struct IMonitorTarget *a2)
{
  __int64 *v2; // rbx
  struct IMonitorTarget **v4; // rax
  struct IMonitorTarget **v5; // rcx
  struct IMonitorTarget **v6; // rdx
  __int64 v7; // rdi
  __int64 i; // rbx
  __int64 v9; // rsi
  __int64 v10; // rbx

  v2 = (__int64 *)((char *)this + 16);
  v4 = (struct IMonitorTarget **)*((_QWORD *)this + 2);
  v5 = (struct IMonitorTarget **)*((_QWORD *)this + 3);
  while ( v4 != v5 && *v4 != a2 )
    ++v4;
  v6 = v4;
  if ( v4 != v5 )
  {
    while ( ++v4 != v5 )
    {
      if ( *v4 != a2 )
        *v6++ = *v4;
    }
  }
  detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
    v2,
    ((__int64)v6 - *v2) >> 3,
    1LL);
  if ( v2[1] == *v2 )
  {
    v7 = xmmword_1803E26A0;
    for ( i = CSyncLockGroup::g_syncLockGroups;
          i != (_QWORD)xmmword_1803E26A0 && *(_QWORD *)(*(_QWORD *)i + 24LL) != *(_QWORD *)(*(_QWORD *)i + 16LL);
          i += 8LL )
    {
      ;
    }
    if ( i != (_QWORD)xmmword_1803E26A0 )
    {
      v9 = i + 8;
      if ( i + 8 != (_QWORD)xmmword_1803E26A0 )
      {
        do
        {
          if ( *(_QWORD *)(*(_QWORD *)v9 + 24LL) != *(_QWORD *)(*(_QWORD *)v9 + 16LL) )
          {
            std::unique_ptr<CSyncLockGroup>::operator=<std::default_delete<CSyncLockGroup>,0>(i, v9);
            i += 8LL;
          }
          v9 += 8LL;
        }
        while ( v9 != v7 );
        v7 = xmmword_1803E26A0;
      }
    }
    v10 = i + 8;
    if ( v10 != v7 )
    {
      do
      {
        std::unique_ptr<CSyncLockGroup>::operator=<std::default_delete<CSyncLockGroup>,0>(v10 - 8, v10);
        v10 += 8LL;
      }
      while ( v10 != v7 );
      v7 = xmmword_1803E26A0;
    }
    std::unique_ptr<CSyncLockGroup>::~unique_ptr<CSyncLockGroup>(v7 - 8);
    *(_QWORD *)&xmmword_1803E26A0 = xmmword_1803E26A0 - 8;
  }
}
