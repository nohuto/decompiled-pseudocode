/*
 * XREFs of EtwTraceBeginDelegateInputCallback @ 0x14003BDF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cpttttttpppqq_EtwWriteTransfer @ 0x14003C650 (McTemplateK0cpttttttpppqq_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x14003C7A8 (-GetCallbackCount@@YACXZ.c)
 */

void __fastcall EtwTraceBeginDelegateInputCallback(__int64 a1)
{
  char v1; // r15
  int v2; // edi
  int v3; // r9d

  v1 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    v2 = *(_DWORD *)(a1 + 100);
    LOBYTE(v3) = GetCallbackCount();
    McTemplateK0cpttttttpppqq_EtwWriteTransfer(
      -__CFSHR__(v2, 7),
      (unsigned int)&BeginDelegateInputCallback,
      -__CFSHR__(v2, 8),
      v3,
      v1);
  }
}
