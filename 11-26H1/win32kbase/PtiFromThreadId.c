/*
 * XREFs of PtiFromThreadId @ 0x1401200F0
 * Callers:
 *     NtMITPostThreadEventMessage @ 0x1401E1340 (NtMITPostThreadEventMessage.c)
 *     NtMITSetLastInputRecipient @ 0x1401E1610 (NtMITSetLastInputRecipient.c)
 *     GetKeyboardDelegationTargetQ @ 0x14021B5F0 (GetKeyboardDelegationTargetQ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiFromThreadId(int a1)
{
  HANDLE v1; // rsi
  __int64 v2; // rcx
  NTSTATUS v3; // edi
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax
  PETHREAD Thread; // [rsp+48h] [rbp+10h] BYREF

  Thread = 0LL;
  v1 = (HANDLE)a1;
  v3 = PsLookupThreadByThreadId((HANDLE)a1, &Thread);
  if ( v3 >= 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v2);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    if ( (unsigned int)PsGetThreadSessionId(Thread) != ProcessSessionId )
    {
      ObfDereferenceObject(Thread);
      return 0LL;
    }
  }
  if ( v3 < 0 )
    return 0LL;
  v6 = 0LL;
  if ( !PsIsThreadTerminating(Thread) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
    if ( v6 )
    {
      if ( PsGetThreadId(*(PETHREAD *)v6) == v1
        && (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 520), 0, 0) & 0x1000000) != 0 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 520), 0, 0) & 1) != 0 )
          v6 = 0LL;
      }
      else
      {
        v6 = 0LL;
      }
    }
  }
  ObfDereferenceObject(Thread);
  return v6;
}
