/*
 * XREFs of McTemplateK0d_EtwWriteTransfer @ 0x140498420
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x14095A610 (PiCMGetDeviceInterfaceList.c)
 *     PiSwIrpStartCreate @ 0x140A8C99C (PiSwIrpStartCreate.c)
 *     PiCMGetDeviceIdList @ 0x140AA1B80 (PiCMGetDeviceIdList.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0d_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+88h] [rbp+20h] BYREF

  v6 = a4;
  v5[3] = 4LL;
  v5[2] = &v6;
  return McGenEventWrite_EtwWriteTransfer(&MS_KernelPnP_Provider_Context, a2, 0LL, 2LL, v5);
}
