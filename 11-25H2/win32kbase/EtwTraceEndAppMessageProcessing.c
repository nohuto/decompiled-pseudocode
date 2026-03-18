/*
 * XREFs of EtwTraceEndAppMessageProcessing @ 0x14003CAF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cd_EtwWriteTransfer @ 0x14003CA70 (McTemplateK0cd_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall EtwTraceEndAppMessageProcessing(int a1)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // r9
  __int64 v6; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged && (v3 = *CurrentThreadNonPaged) != 0 )
      v5 = *(_BYTE *)(v3 + 1456);
    else
      v5 = -1;
    LODWORD(v6) = a1;
    McTemplateK0cd_EtwWriteTransfer(v3, (__int64)&EndAppMessageProcessing, v4, v5, v6);
  }
}
