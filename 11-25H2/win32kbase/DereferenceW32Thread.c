/*
 * XREFs of DereferenceW32Thread @ 0x140084240
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1400842FC (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     UserDeleteW32Thread @ 0x140084340 (UserDeleteW32Thread.c)
 *     GreIsCurrentProcessSystemCritical @ 0x14008457C (GreIsCurrentProcessSystemCritical.c)
 */

__int64 __fastcall DereferenceW32Thread(volatile signed __int32 *Buffer)
{
  void *v1; // rbp
  unsigned __int32 v3; // ebx
  void *ThreadWin32Thread; // rdi

  v1 = *(void **)Buffer;
  v3 = _InterlockedDecrement(Buffer + 94);
  if ( !v3 )
  {
    if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && (unsigned int)GreIsCurrentProcessSystemCritical() )
    {
      ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
      PsSetThreadWin32Thread(*(_QWORD *)Buffer, 0LL, ThreadWin32Thread);
      GreDeleteFastMutex((char *)Buffer);
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
