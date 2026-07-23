/*
 * XREFs of KGetAppModelStateSeparatedRegKeyPath @ 0x140A11E40
 * Callers:
 *     KIsSideloadingEnabled @ 0x14085100C (KIsSideloadingEnabled.c)
 *     KIsUnlockSettingEnabled @ 0x140AF6404 (KIsUnlockSettingEnabled.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x140A0FF10 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KGetAppModelStateSeparatedRegKeyPath(
        PCWSTR SourceID,
        PCWSTR DefaultPath,
        PUNICODE_STRING DestinationString)
{
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // rdi
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  if ( DestinationString )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               SourceID,
                               L"TargetNtPath",
                               DefaultPath,
                               LocationTypeRegistry,
                               0LL,
                               0,
                               (PULONG)&NumberOfBytes);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation >= 0 )
    {
      return (unsigned int)-1073741823;
    }
    else if ( PersistedStateLocation == -2147483643 )
    {
      BufferLengthIn = NumberOfBytes;
      TargetPath = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4D707041u);
      if ( TargetPath )
      {
        inited = RtlGetPersistedStateLocation(
                   SourceID,
                   L"TargetNtPath",
                   DefaultPath,
                   LocationTypeRegistry,
                   TargetPath,
                   BufferLengthIn,
                   (PULONG)&NumberOfBytes);
        if ( inited < 0 || (inited = RtlInitUnicodeStringEx(DestinationString, TargetPath), inited < 0) )
          ExFreePoolWithTag(TargetPath, 0x4D707041u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)inited;
}
