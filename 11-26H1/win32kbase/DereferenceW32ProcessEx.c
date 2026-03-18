/*
 * XREFs of DereferenceW32ProcessEx @ 0x140107B90
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     UserDeleteW32Process @ 0x1401C0400 (UserDeleteW32Process.c)
 */

LONG_PTR __fastcall DereferenceW32ProcessEx(volatile signed __int32 *Buffer, int a2)
{
  void *v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = *(void **)Buffer;
  if ( _InterlockedExchangeAdd(Buffer + 2, 0xFFFFFFFF) == 1 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
        UserDeleteW32Process((PVOID)Buffer);
    }
    else
    {
      PsSetProcessWin32Process(*(_QWORD *)Buffer, 0LL, Buffer);
      GreDeleteFastMutex((char *)Buffer, v5, v6, v7);
    }
  }
  return ObfDereferenceObject(v2);
}
