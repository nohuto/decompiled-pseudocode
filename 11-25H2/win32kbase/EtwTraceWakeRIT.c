/*
 * XREFs of EtwTraceWakeRIT @ 0x140139AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x14003C7A8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cd_EtwWriteTransfer @ 0x14003CA70 (McTemplateK0cd_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceWakeRIT(int a1)
{
  char CallbackCount; // al
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    CallbackCount = GetCallbackCount();
    LODWORD(v5) = a1;
    McTemplateK0cd_EtwWriteTransfer(v3, (__int64)"N", v4, CallbackCount, v5);
  }
}
