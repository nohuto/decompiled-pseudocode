/*
 * XREFs of EtwTraceEndRetrieveSendMessage @ 0x140107C60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cp_EtwWriteTransfer @ 0x140107CB8 (McTemplateK0cp_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceEndRetrieveSendMessage(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
    if ( CurrentThreadWin32Thread && (v6 = *CurrentThreadWin32Thread) != 0 )
      LOBYTE(v6) = *(_BYTE *)(v6 + 1456);
    else
      LOBYTE(v6) = -1;
    McTemplateK0cp_EtwWriteTransfer(v4, &EndRetrieveSendMessage, v5, v6, a1);
  }
}
