/*
 * XREFs of EtwTraceConvertTimeOutToBlocking @ 0x1401B7A70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x14003C7A8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0c_EtwWriteTransfer @ 0x1401B8C50 (McTemplateK0c_EtwWriteTransfer.c)
 */

void EtwTraceConvertTimeOutToBlocking()
{
  __int64 v0; // r9
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v0) = GetCallbackCount();
    McTemplateK0c_EtwWriteTransfer(v2, v1, v3, v0);
  }
}
