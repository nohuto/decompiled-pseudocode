/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1402015F4
 * Callers:
 *     ?SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@PEAGI@Z @ 0x1401C8FC4 (-SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracin.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x140200920 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x140200C80 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x140200F0C (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x140201148 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     UpdateWinIniInt @ 0x140201560 (UpdateWinIniInt.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 *     xxxResolveDesktop @ 0x1402A52F0 (xxxResolveDesktop.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1402ACF70 (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1402AD1A8 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1402AD2B4 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 RtlStringCchPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = _vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 >= 0 )
    {
      if ( v6 == v4 )
      {
LABEL_7:
        a1[v4] = 0;
        return v5;
      }
      if ( v6 <= v4 )
        return v5;
    }
    v5 = -2147483643;
    goto LABEL_7;
  }
  v5 = -1073741811;
  if ( a2 )
    *a1 = 0;
  return v5;
}
