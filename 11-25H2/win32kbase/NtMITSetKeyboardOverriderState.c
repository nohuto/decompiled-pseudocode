/*
 * XREFs of NtMITSetKeyboardOverriderState @ 0x1401BB500
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x140106DC8 (_anonymous_namespace_--GetKeyboardProcessor.c)
 */

__int64 __fastcall NtMITSetKeyboardOverriderState(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 KeyboardProcessor; // rax

  v2 = a1;
  v5 = 0LL;
  if ( IsInputThread(a1, a2) )
  {
    KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor(v4, v3);
    if ( KeyboardProcessor )
    {
      LOBYTE(v5) = v2 != 0;
      _InterlockedExchange((volatile __int32 *)(KeyboardProcessor + 24), v5);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  return v5;
}
