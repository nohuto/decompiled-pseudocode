/*
 * XREFs of PowerOnGdi @ 0x1400EB39C
 * Callers:
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400EA060 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PowerOnGdi(__int64 a1, unsigned int a2, unsigned int a3))(__int64, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 1968LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))result(a1, a2, a3);
  return result;
}
