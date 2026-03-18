/*
 * XREFs of NtMITSetKeyboardOverriderState @ 0x1401E15C0
 * Callers:
 *     <none>
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x14013E9E8 (_anonymous_namespace_--GetKeyboardProcessor.c)
 */

__int64 __fastcall NtMITSetKeyboardOverriderState(int a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rbx
  __int64 KeyboardProcessor; // rax

  v7 = 0LL;
  if ( IsInputThread(a1, a2, a3) )
  {
    KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor(v5, v4, v6);
    if ( KeyboardProcessor )
    {
      LOBYTE(v7) = a1 != 0;
      _InterlockedExchange((volatile __int32 *)(KeyboardProcessor + 24), v7);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  return v7;
}
