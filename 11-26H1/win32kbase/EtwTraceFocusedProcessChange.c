/*
 * XREFs of EtwTraceFocusedProcessChange @ 0x140065880
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140066268 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceFocusedProcessChange(__int64 a1, char a2)
{
  char v3; // di
  int CurrentWin32kSessionId; // eax
  int v5; // ecx
  int v6; // r8d

  v3 = a1;
  if ( (W32kEtwEnabledKeyword & 0x8000000000020000uLL) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x8000000000020000uLL) != 0
    && (qword_1402A9DC8 & 0x8000000000020000uLL) == qword_1402A9DC8
    && (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(a1);
    McTemplateK0qqq_EtwWriteTransfer(v5, (unsigned int)&FocusedProcessChangeEvent, v6, CurrentWin32kSessionId, v3, a2);
  }
}
