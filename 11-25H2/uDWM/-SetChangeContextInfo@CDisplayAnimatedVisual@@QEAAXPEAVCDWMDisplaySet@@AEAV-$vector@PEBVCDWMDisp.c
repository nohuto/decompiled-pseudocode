/*
 * XREFs of ?SetChangeContextInfo@CDisplayAnimatedVisual@@QEAAXPEAVCDWMDisplaySet@@AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180096070
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAPEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAXPEAPEBVCDWMDisplay@@_K@Z @ 0x18008DCE0 (--$_Assign_counted_range@PEAPEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDis.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::SetChangeContextInfo(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  *(_QWORD *)(a1 + 272) = a2;
  result = (__int64)a3;
  v4 = (__int64 *)(a1 + 280);
  if ( v4 != a3 )
    return std::vector<CDWMDisplay const *>::_Assign_counted_range<CDWMDisplay const * *>(v4, *a3, (a3[1] - *a3) >> 3);
  return result;
}
