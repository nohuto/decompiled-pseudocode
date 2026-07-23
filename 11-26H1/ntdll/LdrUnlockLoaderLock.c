/*
 * XREFs of LdrUnlockLoaderLock @ 0x180016140
 * Callers:
 *     TppIopExecuteCallback @ 0x180015CD0 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     LdrpReleaseLoaderLock @ 0x18007C860 (LdrpReleaseLoaderLock.c)
 *     LdrpLogError @ 0x1800FBAE0 (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 */

NTSTATUS __cdecl LdrUnlockLoaderLock(ULONG Flags, PVOID Cookie)
{
  NTSTATUS v2; // ebx
  ULONG v3; // r8d
  unsigned __int64 v4; // rcx

  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return -1073741585;
  }
  else
  {
    v2 = 0;
    if ( Cookie )
    {
      v3 = Flags & 1;
      if ( (unsigned __int64)Cookie >= 0x1000000000000000LL
        || (v4 = ((unsigned __int64)Cookie >> 48) ^ LODWORD(NtCurrentTeb()->ClientId.UniqueThread), (v4 & 0xFFF) != 0) )
      {
        if ( v3 )
          RtlRaiseStatus(-1073741584);
        return -1073741584;
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
