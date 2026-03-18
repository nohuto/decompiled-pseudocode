/*
 * XREFs of DrvQueryMDEVPowerState @ 0x1400F7AD0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1400F76B4 (DrvProcessDxgkDisplayCallout.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvQueryMDEVPowerState(__int64 a1)
{
  unsigned int i; // edx
  __int64 v2; // rax

  for ( i = 0; i < *(_DWORD *)(a1 + 20); ++i )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(56LL * i + a1 + 40) + 2568LL);
    if ( !v2 )
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(56LL * i + a1 + 40), i);
      WdLogGlobalForLineNumber = 7616;
      return 0LL;
    }
    if ( *(int *)(v2 + 160) < 0 )
      return 0LL;
  }
  return 1LL;
}
