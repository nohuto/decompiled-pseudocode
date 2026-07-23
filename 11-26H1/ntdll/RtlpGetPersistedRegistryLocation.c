/*
 * XREFs of RtlpGetPersistedRegistryLocation @ 0x1801487F0
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x1801485C4 (RtlpEtcGetDwordFromPersistedState.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlGetPersistedStateLocation @ 0x180028780 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall RtlpGetPersistedRegistryLocation(PCWSTR SourceID, PCWSTR DefaultPath, WCHAR **a3, _DWORD *a4)
{
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS v9; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // rdi
  ULONG BufferLengthOut[4]; // [rsp+40h] [rbp-28h] BYREF

  BufferLengthOut[0] = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             SourceID,
                             L"TargetNtPath",
                             DefaultPath,
                             LocationTypeRegistry,
                             0LL,
                             0,
                             BufferLengthOut);
  v9 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    BufferLengthIn = BufferLengthOut[0];
    TargetPath = (WCHAR *)RtlpAllocateAtom(BufferLengthOut[0]);
    if ( TargetPath )
    {
      v9 = RtlGetPersistedStateLocation(
             SourceID,
             L"TargetNtPath",
             DefaultPath,
             LocationTypeRegistry,
             TargetPath,
             BufferLengthIn,
             BufferLengthOut);
      if ( v9 < 0 )
      {
        RtlpSysVolFree(TargetPath);
      }
      else
      {
        *a3 = TargetPath;
        if ( a4 )
          *a4 = (BufferLengthOut[0] >> 1) - 1;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( PersistedStateLocation >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
