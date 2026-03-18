/*
 * XREFs of EtwTraceUserUpdateHandleOwner @ 0x14003AE50
 * Callers:
 *     HMChangeOwnerPheProcessWorker @ 0x14003ACDC (HMChangeOwnerPheProcessWorker.c)
 *     HMChangeOwnerThreadWorker @ 0x1401A5428 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14003E28C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall EtwTraceUserUpdateHandleOwner(int a1, char a2, char a3)
{
  char CurrentWin32kSessionId; // al
  int v7; // ecx
  int v8; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    McTemplateK0pqqq_EtwWriteTransfer(v7, (unsigned int)&UserUpdateHandleOwner, v8, a1, a2, CurrentWin32kSessionId, a3);
  }
}
