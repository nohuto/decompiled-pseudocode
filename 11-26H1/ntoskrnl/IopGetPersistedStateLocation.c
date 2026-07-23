/*
 * XREFs of IopGetPersistedStateLocation @ 0x140B3EBA4
 * Callers:
 *     IopCreateSecureDeviceClassSettings @ 0x140AFAD74 (IopCreateSecureDeviceClassSettings.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x140A0FF10 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetPersistedStateLocation(__int64 a1, const WCHAR *a2, __int64 a3, WCHAR **a4)
{
  ULONG BufferLengthIn; // esi
  WCHAR *TargetPath; // rdi
  NTSTATUS PersistedStateLocation; // eax
  unsigned int v9; // ebx
  __int64 result; // rax
  ULONG BufferLengthOut; // [rsp+70h] [rbp+18h] BYREF

  BufferLengthOut = 0;
  BufferLengthIn = 256;
  while ( 1 )
  {
    TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL);
    if ( !TargetPath )
    {
      v9 = -1073741670;
      goto LABEL_5;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               a2,
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    v9 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( BufferLengthOut <= BufferLengthIn )
    {
      v9 = -1073741595;
      goto LABEL_9;
    }
    BufferLengthIn = BufferLengthOut;
    ExFreePoolWithTag(TargetPath, 0);
  }
  if ( PersistedStateLocation >= 0 )
    goto LABEL_5;
LABEL_9:
  ExFreePoolWithTag(TargetPath, 0);
  TargetPath = 0LL;
LABEL_5:
  result = v9;
  *a4 = TargetPath;
  return result;
}
