/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x14024955C
 * Callers:
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall xxxBroadcastDisplaySettingsChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4))(__int64, _QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD, _QWORD, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                     + 3384LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))result(a1, 0LL, 0LL, a4);
  return result;
}
