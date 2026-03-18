/*
 * XREFs of EtwTraceInputQueueUnLocked @ 0x140152DE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cpq_EtwWriteTransfer @ 0x14003C2E0 (McTemplateK0cpq_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x14003C7A8 (-GetCallbackCount@@YACXZ.c)
 */

void __fastcall EtwTraceInputQueueUnLocked(__int64 a1)
{
  char v1; // di
  PETHREAD *v2; // rcx
  char ThreadId; // bl
  char CallbackCount; // al
  __int64 v5; // rcx
  __int64 v6; // r8

  v1 = a1;
  v2 = *(PETHREAD **)(a1 + 72);
  if ( v2 )
    ThreadId = (unsigned __int8)PsGetThreadId(*v2);
  else
    ThreadId = 0;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    CallbackCount = GetCallbackCount();
    McTemplateK0cpq_EtwWriteTransfer(v5, (__int64)&InputQueueUnLocked, v6, CallbackCount, v1, ThreadId);
  }
}
