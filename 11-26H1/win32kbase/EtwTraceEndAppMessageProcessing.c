/*
 * XREFs of EtwTraceEndAppMessageProcessing @ 0x14001FD20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cd_EtwWriteTransfer @ 0x14001FD78 (McTemplateK0cd_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceEndAppMessageProcessing(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
    if ( CurrentThreadWin32Thread && (v4 = *CurrentThreadWin32Thread) != 0 )
      v6 = *(unsigned __int8 *)(v4 + 1456);
    else
      LOBYTE(v6) = -1;
    McTemplateK0cd_EtwWriteTransfer(v4, &EndAppMessageProcessing, v5, v6, v2);
  }
}
