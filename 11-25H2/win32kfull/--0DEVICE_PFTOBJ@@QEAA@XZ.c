/*
 * XREFs of ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x14019CA3C
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1402154A8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x1402620D0 (HDEV_DeleteRfontsAndUnloadDeviceFonts.c)
 *     vUnlinkEudcRFONTs @ 0x14030E238 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x14030E324 (vUnlinkEudcRFONTsAndPFEs.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x140312F1C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

DEVICE_PFTOBJ *__fastcall DEVICE_PFTOBJ::DEVICE_PFTOBJ(DEVICE_PFTOBJ *this, __int64 a2)
{
  *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96) + 20424LL);
  return this;
}
