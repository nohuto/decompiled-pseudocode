/*
 * XREFs of DxgkMapMdlToIoMmuCB @ 0x14003EDD0
 * Callers:
 *     <none>
 * Callees:
 *     SmmCreatePhysicalObjectForMdl @ 0x14003FBD0 (SmmCreatePhysicalObjectForMdl.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x1400407B4 (DpiGetSysMmAdapterFromDevice.c)
 */

__int64 __fastcall DxgkMapMdlToIoMmuCB(__int64 a1, __int64 a2)
{
  struct SYSMM_ADAPTER *SysMmAdapterFromDevice; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0LL;
  SysMmAdapterFromDevice = (struct SYSMM_ADAPTER *)DpiGetSysMmAdapterFromDevice();
  result = SmmCreatePhysicalObjectForMdl(SysMmAdapterFromDevice, 0LL, 0, (__int64)&v5, (__int64)&v6);
  *(_QWORD *)(a2 + 8) = v5;
  return result;
}
