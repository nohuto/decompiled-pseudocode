/*
 * XREFs of PiCreateDriverRedirectedStateKey @ 0x140A11A78
 * Callers:
 *     PiCreateServiceStateKey @ 0x140A118DC (PiCreateServiceStateKey.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiCreateServiceKeyUnderPath @ 0x1407A3B6C (PiCreateServiceKeyUnderPath.c)
 *     RtlGetPersistedStateLocation @ 0x140A0FF10 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCreateDriverRedirectedStateKey(UNICODE_STRING *a1, ULONG a2, _QWORD *a3)
{
  HANDLE v4; // rdi
  NTSTATUS PersistedStateLocation; // eax
  __int64 v7; // r8
  int inited; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // r14
  NTSTATUS v12; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE v14; // [rsp+80h] [rbp+30h] BYREF
  ULONG BufferLengthOut; // [rsp+88h] [rbp+38h] BYREF

  BufferLengthOut = a2;
  v4 = 0LL;
  v14 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a1 || !a1->Buffer || a1->Length < 2u || !a3 )
  {
    inited = -1073741811;
    goto LABEL_8;
  }
  BufferLengthOut = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"DriverStatePath",
                             0LL,
                             0LL,
                             LocationTypeRegistry,
                             0LL,
                             0,
                             &BufferLengthOut);
  inited = PersistedStateLocation;
  if ( PersistedStateLocation >= 0 )
  {
    inited = -1073741823;
    goto LABEL_8;
  }
  if ( PersistedStateLocation != -2147483643 )
    goto LABEL_7;
  BufferLengthIn = BufferLengthOut;
  TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL);
  if ( !TargetPath )
  {
    inited = -1073741670;
    goto LABEL_8;
  }
  v12 = RtlGetPersistedStateLocation(
          L"DriverStatePath",
          0LL,
          0LL,
          LocationTypeRegistry,
          TargetPath,
          BufferLengthIn,
          &BufferLengthOut);
  inited = v12;
  if ( v12 == -1073741772 )
  {
    inited = -1073741595;
LABEL_23:
    ExFreePoolWithTag(TargetPath, 0);
LABEL_7:
    if ( inited < 0 )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( v12 < 0 )
    goto LABEL_23;
  inited = RtlInitUnicodeStringEx(&DestinationString, TargetPath);
  if ( inited < 0 )
    goto LABEL_23;
LABEL_17:
  inited = PiCreateServiceKeyUnderPath(a1, &DestinationString, v7, &v14);
  if ( inited < 0 )
    v4 = v14;
  else
    *a3 = v14;
LABEL_8:
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)inited;
}
