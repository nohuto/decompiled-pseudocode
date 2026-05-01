/*
 * XREFs of ?CensorAppID@MultitaskingViewTelemetry@@SAPEBGPEBG@Z @ 0x1804C5460
 * Callers:
 *     ?SwitchItemInvoked_@MultitaskingViewTelemetry@@QEBAX_KIPEBG@Z @ 0x1804D6DC8 (-SwitchItemInvoked_@MultitaskingViewTelemetry@@QEBAX_KIPEBG@Z.c)
 *     ?ReverseAppToAppSwitch_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@W4AppCloseMethod@@@Z @ 0x18051A540 (-ReverseAppToAppSwitch_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@W4AppClo.c)
 *     ?StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x18051B6FC (-StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall MultitaskingViewTelemetry::CensorAppID(LPCWSTR pszPath)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( pszPath )
  {
    if ( PathIsFileSpecW(pszPath) )
      return pszPath;
    else
      return PathFindFileNameW(pszPath);
  }
  return (const unsigned __int16 *)v1;
}
