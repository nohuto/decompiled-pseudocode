/*
 * XREFs of PiGetStateRootPath @ 0x140A10E38
 * Callers:
 *     IoGetDeviceDirectory @ 0x1407A30F0 (IoGetDeviceDirectory.c)
 *     PiGetDriverMutableStateDirectory @ 0x1407A3DC4 (PiGetDriverMutableStateDirectory.c)
 *     PiOpenDriverRedirectedStateRootKey @ 0x1407A40EC (PiOpenDriverRedirectedStateRootKey.c)
 *     PiOpenDriverRedirectedStateKey @ 0x140A3FA1C (PiOpenDriverRedirectedStateKey.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140CC9C90 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x140A0FF10 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetStateRootPath(
        PCWSTR SourceID,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PUNICODE_STRING DestinationString)
{
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // rdi
  NTSTATUS v13; // eax
  ULONG BufferLengthOut; // [rsp+78h] [rbp+20h] BYREF

  if ( !DestinationString )
    return (unsigned int)-1073741811;
  BufferLengthOut = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             SourceID,
                             0LL,
                             DefaultPath,
                             StateLocationType,
                             0LL,
                             0,
                             &BufferLengthOut);
  inited = PersistedStateLocation;
  if ( PersistedStateLocation >= 0 )
    return (unsigned int)-1073741823;
  if ( PersistedStateLocation == -2147483643 )
  {
    BufferLengthIn = BufferLengthOut;
    TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL);
    if ( !TargetPath )
      return (unsigned int)-1073741670;
    v13 = RtlGetPersistedStateLocation(
            SourceID,
            0LL,
            DefaultPath,
            StateLocationType,
            TargetPath,
            BufferLengthIn,
            &BufferLengthOut);
    inited = v13;
    if ( v13 == -1073741772 )
    {
      inited = -1073741595;
    }
    else if ( v13 >= 0 )
    {
      inited = RtlInitUnicodeStringEx(DestinationString, TargetPath);
      if ( inited >= 0 )
        return (unsigned int)inited;
    }
    ExFreePoolWithTag(TargetPath, 0);
  }
  return (unsigned int)inited;
}
