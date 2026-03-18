/*
 * XREFs of Interrupter_WdfEvtCleanupCallback @ 0x1400499C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x140038B04 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Interrupter_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v2; // rbx
  struct _PCW_INSTANCE *v3; // rcx

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B178);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      5u,
      9u,
      0x27u,
      (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
      a1,
      v2);
  v3 = *(struct _PCW_INSTANCE **)(v2 + 88);
  if ( v3 )
    PcwCloseInstance(v3);
  if ( !*(_DWORD *)(v2 + 32) )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
      WdfDriverGlobals,
      a1,
      off_14006AFC0);
}
