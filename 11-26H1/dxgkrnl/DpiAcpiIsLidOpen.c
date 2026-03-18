/*
 * XREFs of DpiAcpiIsLidOpen @ 0x140252FF4
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

bool DpiAcpiIsLidOpen()
{
  return _InterlockedCompareExchange(&dword_140169460, 0, 0) == 0;
}
