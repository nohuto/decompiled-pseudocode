/*
 * XREFs of McTemplateK0p_EtwWriteTransfer @ 0x140498254
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x14094FD80 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryRelease @ 0x1409509D8 (PiDqQueryRelease.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 McTemplateK0p_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _QWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  v4[3] = 8LL;
  va_copy((va_list)&v4[2], va);
  return McGenEventWrite_EtwWriteTransfer(&MS_KernelPnP_Provider_Context, a2, a3, 2LL, v4);
}
