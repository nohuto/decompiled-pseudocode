/*
 * XREFs of HaliGetDmaAdapter @ 0x14057F460
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFindDeviceObjectByToken @ 0x14057C928 (HalpDmaFindDeviceObjectByToken.c)
 *     HalpGetAdapter @ 0x14078379C (HalpGetAdapter.c)
 */

__int64 __fastcall HaliGetDmaAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DeviceObjectByToken; // rax

  DeviceObjectByToken = HalpDmaFindDeviceObjectByToken((__int64)KeGetCurrentThread(), 0, 0);
  return HalpGetAdapter(a2, DeviceObjectByToken, a3);
}
