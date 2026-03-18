/*
 * XREFs of DxgkSetDeviceCandidateTarget @ 0x1400624B8
 * Callers:
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1402D6CC0 (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 * Callees:
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400624D8 (DpiFdoIsMsBddAnchoredDevice.c)
 */

__int64 DxgkSetDeviceCandidateTarget()
{
  __int64 result; // rax
  int v1; // edx

  result = DpiFdoIsMsBddAnchoredDevice();
  if ( (_BYTE)result )
    dword_1401691D4 = v1;
  return result;
}
