/*
 * XREFs of LdrUnlockLoaderLock @ 0x18002B040
 * Callers:
 *     TppIopExecuteCallback @ 0x18002ABD0 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     LdrpReleaseLoaderLock @ 0x1800854C0 (LdrpReleaseLoaderLock.c)
 *     LdrpLogError @ 0x1800FC390 (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x18015B768 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrUnlockLoaderLock(int a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // r8d
  unsigned __int64 v4; // rcx

  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(3221225711LL);
    return (unsigned int)-1073741585;
  }
  else
  {
    v2 = 0;
    if ( a2 )
    {
      v3 = a1 & 1;
      if ( a2 >= 0x1000000000000000LL
        || (v4 = HIWORD(a2) ^ LODWORD(NtCurrentTeb()->ClientId.UniqueThread), (v4 & 0xFFF) != 0) )
      {
        if ( v3 )
          RtlRaiseStatus(3221225712LL);
        return (unsigned int)-1073741584;
      }
      else if ( v3 )
      {
        LdrpReleaseLoaderLock(v4, 13LL);
      }
      else
      {
        LdrpReleaseLoaderLock(v4, 14LL);
      }
    }
  }
  return v2;
}
