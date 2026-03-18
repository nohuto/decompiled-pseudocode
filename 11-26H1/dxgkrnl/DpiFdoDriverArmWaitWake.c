/*
 * XREFs of DpiFdoDriverArmWaitWake @ 0x140255578
 * Callers:
 *     DpiFdoArmWaitWake @ 0x140255350 (DpiFdoArmWaitWake.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiFdoDriverArmWaitWake(__int64 a1)
{
  int v1; // edx
  int v2; // ebx

  v1 = *(_DWORD *)(a1 + 2776);
  v2 = 0;
  *(_DWORD *)(a1 + 2776) = v1 + 1;
  if ( !v1 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 2816))(*(_QWORD *)(a1 + 2792));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventDpiDxgkDdiWaitWakeArming);
    if ( v2 < 0 )
    {
      WdLogSingleEntry1(2LL);
      --*(_DWORD *)(a1 + 2776);
      WdLogGlobalForLineNumber = 728;
    }
  }
  return (unsigned int)v2;
}
