/*
 * XREFs of ?SetChangeContextInfo@CDisplayAnimatedVisual@@QEAAXPEAVCDWMDisplaySet@@AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180088804
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAPEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAXPEAPEBVCDWMDisplay@@_K@Z @ 0x18007C654 (--$_Assign_counted_range@PEAPEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDis.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::SetChangeContextInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char **v4; // rcx

  *(_QWORD *)(a1 + 240) = a2;
  result = a3;
  v4 = (char **)(a1 + 248);
  if ( v4 != (char **)a3 )
    return std::vector<CDWMDisplay const *>::_Assign_counted_range<CDWMDisplay const * *>(
             v4,
             *(char **)a3,
             (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 3);
  return result;
}
