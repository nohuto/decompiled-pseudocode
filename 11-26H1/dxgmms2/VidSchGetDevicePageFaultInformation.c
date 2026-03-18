/*
 * XREFs of VidSchGetDevicePageFaultInformation @ 0x1400C2070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchGetDevicePageFaultInformation(__int64 a1, _OWORD *a2)
{
  *a2 = *(_OWORD *)(a1 + 216);
  a2[1] = *(_OWORD *)(a1 + 232);
}
