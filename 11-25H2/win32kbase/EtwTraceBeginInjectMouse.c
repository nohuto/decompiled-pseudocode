/*
 * XREFs of EtwTraceBeginInjectMouse @ 0x14012B680
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cddd_EtwWriteTransfer @ 0x14003BBB0 (McTemplateK0cddd_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x14003C7A8 (-GetCallbackCount@@YACXZ.c)
 */

void __fastcall EtwTraceBeginInjectMouse(char a1, char a2, char a3)
{
  char CallbackCount; // al
  __int64 v7; // rcx
  __int64 v8; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    CallbackCount = GetCallbackCount();
    McTemplateK0cddd_EtwWriteTransfer(v7, (__int64)"Q", v8, CallbackCount, a1, a2, a3);
  }
}
