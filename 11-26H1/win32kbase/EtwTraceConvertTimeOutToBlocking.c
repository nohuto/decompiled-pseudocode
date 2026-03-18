/*
 * XREFs of EtwTraceConvertTimeOutToBlocking @ 0x1401DAA90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1400E62F0 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0c_EtwWriteTransfer @ 0x1401DBD68 (McTemplateK0c_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceConvertTimeOutToBlocking(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v2) = GetCallbackCount(a1, a2);
    McTemplateK0c_EtwWriteTransfer(v4, v3, v5, v2);
  }
}
