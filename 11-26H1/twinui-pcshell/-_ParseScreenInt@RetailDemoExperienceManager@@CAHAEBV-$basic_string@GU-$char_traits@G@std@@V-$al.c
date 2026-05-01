/*
 * XREFs of ?_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x18039E914
 * Callers:
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18039E670 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18039EA40 (-_ParseScreenRect@RetailDemoExperienceManager@@CA-AUtagRECT@@AEBV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall RetailDemoExperienceManager::_ParseScreenInt(const wchar_t *a1, char a2, char a3)
{
  HMONITOR v6; // rax
  const wchar_t *v7; // rcx
  double v8; // xmm0_8
  const wchar_t *v9; // rdx
  double v10; // xmm1_8
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  v6 = MonitorFromPoint(0LL, 1u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  GetMonitorInfoW(v6, &mi);
  v7 = a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v7 = *(const wchar_t **)a1;
  v8 = _wtof(v7);
  v9 = a1;
  v10 = v8;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v9 = *(const wchar_t **)a1;
  if ( v9[*((_QWORD *)a1 + 2) - 1] == 37 && v8 <= 100.0 )
  {
    if ( !a2 )
    {
      v10 = v8 * (double)(mi.rcMonitor.bottom - mi.rcMonitor.top) / 100.0;
      return (unsigned int)(int)v10;
    }
    v10 = v8 * (double)(mi.rcMonitor.right - mi.rcMonitor.left) / 100.0;
  }
  else if ( !a2 )
  {
    return (unsigned int)(int)v10;
  }
  if ( a3 )
    v10 = (double)(mi.rcMonitor.right - mi.rcMonitor.left) - v10;
  return (unsigned int)(int)v10;
}
