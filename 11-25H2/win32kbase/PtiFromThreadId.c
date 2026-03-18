/*
 * XREFs of PtiFromThreadId @ 0x1400D8EE0
 * Callers:
 *     NtMITPostThreadEventMessage @ 0x1401BB050 (NtMITPostThreadEventMessage.c)
 *     NtMITSetLastInputRecipient @ 0x1401BB550 (NtMITSetLastInputRecipient.c)
 *     GetKeyboardDelegationTargetQ @ 0x1402161D0 (GetKeyboardDelegationTargetQ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiFromThreadId(int a1)
{
  HANDLE v1; // rsi
  NTSTATUS v2; // edi
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  PETHREAD Thread; // [rsp+58h] [rbp+10h] BYREF

  Thread = 0LL;
  v1 = (HANDLE)a1;
  v2 = PsLookupThreadByThreadId((HANDLE)a1, &Thread);
  if ( v2 >= 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    if ( (unsigned int)PsGetThreadSessionId(Thread) != ProcessSessionId )
    {
      ObfDereferenceObject(Thread);
      return 0LL;
    }
  }
  if ( v2 < 0 )
    return 0LL;
  v5 = 0LL;
  if ( !PsIsThreadTerminating(Thread) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
    if ( v5 )
    {
      if ( PsGetThreadId(*(PETHREAD *)v5) == v1
        && (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 0x1000000) != 0 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 1) != 0 )
          v5 = 0LL;
      }
      else
      {
        v5 = 0LL;
      }
    }
  }
  ObfDereferenceObject(Thread);
  return v5;
}
