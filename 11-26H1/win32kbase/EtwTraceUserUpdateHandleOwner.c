/*
 * XREFs of EtwTraceUserUpdateHandleOwner @ 0x140094E50
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x140094AC0 (HMChangeOwnerThreadWorker.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1400CFF28 (HMChangeOwnerPheProcessWorker.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14001E448 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall EtwTraceUserUpdateHandleOwner(__int64 a1, int a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-28h]
  int CurrentWin32kSessionId; // [rsp+28h] [rbp-20h]

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(a1);
    v7 = a2;
    McTemplateK0pqqq_EtwWriteTransfer(v5, (__int64)&UserUpdateHandleOwner, v6, a1, v7, CurrentWin32kSessionId, a3);
  }
}
