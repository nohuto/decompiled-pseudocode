/*
 * XREFs of HaliGetDmaAdapter @ 0x14057CF40
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFindDeviceObjectByToken @ 0x14057A3F8 (HalpDmaFindDeviceObjectByToken.c)
 *     HalpGetAdapter @ 0x140780C9C (HalpGetAdapter.c)
 */

__int64 __fastcall HaliGetDmaAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DeviceObjectByToken; // rax

  DeviceObjectByToken = HalpDmaFindDeviceObjectByToken((__int64)KeGetCurrentThread(), 0, 0);
  return HalpGetAdapter(a2, DeviceObjectByToken, a3);
}
