/*
 * XREFs of RtlpGetAssemblyStorageMapRootLocation @ 0x1800A3A04
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A20D0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetAssemblyStorageMapRootLocation(void *a1, __int64 a2, __int64 a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  const CHAR *v8; // r8
  unsigned int v9; // ecx
  PVOID Atom; // rax
  __int64 Length; // [rsp+20h] [rbp-E0h]
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v18; // [rsp+84h] [rbp-7Ch]
  unsigned int Size; // [rsp+88h] [rbp-78h]
  size_t Size_4; // [rsp+8Ch] [rbp-74h] BYREF

  v13 = a2;
  KeyHandle = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset_thunk_772440563353939046(KeyValueInformation, 0, 0x218uLL);
  if ( a1 && a2 && a3 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = NtOpenKey(&KeyHandle, 1u, &ObjectAttributes);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = "SXS: Unable to open storage root subkey %wZ; Status = 0x%08lx\n";
LABEL_6:
      LODWORD(Length) = v6;
      DbgPrintEx(0x33u, 0, v8, &v13, Length);
      goto LABEL_22;
    }
    v6 = NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_180171A90,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x218u,
           &ResultLength);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = "SXS: Unabel to query location from storage root subkey %wZ; Status = 0x%08lx\n";
      goto LABEL_6;
    }
    if ( v18 != 1 )
    {
      DbgPrintEx(0x33u, 0, "SXS: Assembly storage root location value type is not REG_SZ\n");
LABEL_11:
      v7 = -1073741766;
      goto LABEL_22;
    }
    v9 = Size;
    if ( (Size & 1) != 0 )
    {
      DbgPrintEx(0x33u, 0, "SXS: Assembly storage root location value has non-even size\n");
      goto LABEL_11;
    }
    if ( Size > *(unsigned __int16 *)(a3 + 2) )
    {
      if ( Size > 0xFFFE )
      {
        DbgPrintEx(0x33u, 0, "SXS: Assembly storage root location for %wZ does not fit in a UNICODE STRING\n", &v13);
        v7 = -1073741562;
        goto LABEL_22;
      }
      *(_WORD *)(a3 + 2) = Size;
      Atom = RtlpAllocateAtom((unsigned __int16)v9);
      *(_QWORD *)(a3 + 8) = Atom;
      if ( !Atom )
      {
        v7 = -1073741801;
        goto LABEL_22;
      }
      v9 = Size;
    }
    memmove(*(void **)(a3 + 8), &Size_4, v9);
    v7 = 0;
    *(_WORD *)a3 = Size;
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_22:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v7;
}
