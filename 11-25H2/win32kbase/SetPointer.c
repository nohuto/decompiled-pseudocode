/*
 * XREFs of SetPointer @ 0x14014A2C0
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14003B130 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     PowerOnMonitor @ 0x14007FA80 (PowerOnMonitor.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall SetPointer(__int64 a1, __int64 a2))(_QWORD)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *result)(_QWORD); // rax

  v2 = a1;
  result = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2400LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD))result(v2);
  return result;
}
