/*
 * XREFs of McTemplateK0p_EtwWriteTransfer @ 0x14049E704
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x14098F320 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryRelease @ 0x14098FF78 (PiDqQueryRelease.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14049F320 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
