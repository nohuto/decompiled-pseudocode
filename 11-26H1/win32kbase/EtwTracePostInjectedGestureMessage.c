/*
 * XREFs of EtwTracePostInjectedGestureMessage @ 0x1401DB490
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1400E62F0 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cpp_EtwWriteTransfer @ 0x1401DBDCC (McTemplateK0cpp_EtwWriteTransfer.c)
 */

void __fastcall EtwTracePostInjectedGestureMessage(__int64 *a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rbx
  int v4; // r9d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  v2 = a2;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    v3 = *a1;
    LOBYTE(v4) = GetCallbackCount((__int64)a1, a2);
    McTemplateK0cpp_EtwWriteTransfer(v6, v5, v7, v4, v3, v2);
  }
}
