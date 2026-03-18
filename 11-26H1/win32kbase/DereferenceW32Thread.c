/*
 * XREFs of DereferenceW32Thread @ 0x140091190
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x14009124C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     UserDeleteW32Thread @ 0x140091290 (UserDeleteW32Thread.c)
 *     GreIsCurrentProcessSystemCritical @ 0x140091444 (GreIsCurrentProcessSystemCritical.c)
 */

__int64 __fastcall DereferenceW32Thread(volatile signed __int32 *Buffer)
{
  void *v1; // rbp
  unsigned __int32 v3; // ebx
  void *ThreadWin32Thread; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v1 = *(void **)Buffer;
  v3 = _InterlockedDecrement(Buffer + 92);
  if ( !v3 )
  {
    if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && (unsigned int)GreIsCurrentProcessSystemCritical() )
    {
      ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
      PsSetThreadWin32Thread(*(_QWORD *)Buffer, 0LL, ThreadWin32Thread);
      GreDeleteFastMutex((char *)Buffer, v6, v7, v8);
      ExFreePoolWithTag(ThreadWin32Thread, 0);
    }
    else
    {
      UserDeleteW32Thread((PVOID)Buffer);
    }
  }
  ObfDereferenceObject(v1);
  return v3;
}
