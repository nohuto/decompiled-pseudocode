/*
 * XREFs of RtlpGetBootStatusPathFromRegistry @ 0x18010BCFC
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x18010B9B0 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpGetBootStatusPathFromRegistry(_QWORD *a1)
{
  size_t v2; // rax
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  unsigned int *Heap_0; // rdi
  PVOID v6; // rax
  PVOID v7; // rsi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+38h] BYREF
  ULONG v12; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+48h] BYREF

  v12 = 0;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString.Buffer = (wchar_t *)"\\\x00R\x00E\x00G\x00I\x00S\x00T\x00R\x00Y\x00\\\x00M\x00A\x00C\x00H\x00I\x00N\x00E\x00\\\x00S\x00Y\x00S\x00T\x00E\x00M\x00\\\x00C\x00u\x00r\x00r\x00e\x00n\x00t\x00C\x00o\x00n\x00t\x00r\x00o\x00l\x00S\x00e\x00t\x00\\\x00C\x00o\x00n\x00t\x00r\x00o\x00l";
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v2 = 2
     * wcslen((const wchar_t *)"\\\x00R\x00E\x00G\x00I\x00S\x00T\x00R\x00Y\x00\\\x00M\x00A\x00C\x00H\x00I\x00N\x00E\x00\\\x00S\x00Y\x00S\x00T\x00E\x00M\x00\\\x00C\x00u\x00r\x00r\x00e\x00n\x00t\x00C\x00o\x00n\x00t\x00r\x00o\x00l\x00S\x00e\x00t\x00\\\x00C\x00o\x00n\x00t\x00r\x00o\x00l");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  if ( v2 >= 0xFFFE )
    LOWORD(v2) = -4;
  DestinationString.Length = v2;
  DestinationString.MaximumLength = v2 + 2;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"OsBootstatPath");
    v4 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    v3 = v4;
    if ( v4 == -1073741789 )
    {
      Heap_0 = (unsigned int *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, ResultLength);
      if ( Heap_0 )
      {
        v3 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap_0, ResultLength, &v12);
        if ( v3 >= 0 )
        {
          v6 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0[2]);
          v7 = v6;
          if ( v6 )
          {
            memmove(v6, Heap_0 + 3, Heap_0[2]);
            *a1 = v7;
          }
          else
          {
            v3 = -1073741801;
          }
        }
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
      }
      else
      {
        v3 = -1073741801;
      }
    }
    else if ( v4 >= 0 )
    {
      v3 = -1073741823;
    }
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v3;
}
