/*
 * XREFs of NVMeIsDeviceGone @ 0x140006B90
 * Callers:
 *     ControllerReset @ 0x140007840 (ControllerReset.c)
 *     NVMeControllerRemove @ 0x14000E0B0 (NVMeControllerRemove.c)
 *     NVMeControllerPreparePLDR @ 0x140017420 (NVMeControllerPreparePLDR.c)
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeIsDeviceGone(__int64 a1)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 176) + 40LL) != -1LL )
    return 0;
  *(_DWORD *)(a1 + 24) |= 0x1000000u;
  return 1;
}
