/*
 * XREFs of LdrpIsReparsePoint @ 0x1800C3638
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpGetLoadAsEntry @ 0x1800C37FC (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x1800C38D0 (LdrFindEntryForAddress.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     ZwQueryAttributesFile @ 0x18015F5E0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpIsReparsePoint(void *a1)
{
  unsigned int v1; // ebx
  const wchar_t *v2; // rcx
  size_t v3; // rax
  void *v4; // rdi
  __int64 v5; // rdx
  __m128i Entry; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+58h] [rbp-B0h] BYREF
  PVOID BaseAddress_8[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v10; // [rsp+78h] [rbp-90h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  wchar_t *String[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v13; // [rsp+C8h] [rbp-40h]
  __int128 v14; // [rsp+D8h] [rbp-30h]
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+E8h] [rbp-20h] BYREF

  Entry.m128i_i64[0] = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v1 = -1073741823;
  v8 = 0LL;
  *(_OWORD *)BaseAddress_8 = 0LL;
  v10 = 0LL;
  memset(&FileInformation, 0, sizeof(FileInformation));
  *(_OWORD *)String = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( ((unsigned __int8)a1 & 3) != 0 )
  {
    if ( (int)LdrpGetLoadAsEntry(a1, String) < 0 )
      return v1;
    v2 = String[1];
  }
  else
  {
    if ( LdrFindEntryForAddress(a1, (PLDR_DATA_TABLE_ENTRY *)&Entry) < 0 )
      return v1;
    v2 = *(const wchar_t **)(Entry.m128i_i64[0] + 80);
  }
  Entry.m128i_i64[0] = 0LL;
  Entry.m128i_i64[1] = (__int64)v2;
  if ( v2 )
  {
    v3 = wcslen(v2);
    if ( v3 > 0x7FFE )
      return v1;
    Entry.m128i_i16[0] = 2 * v3;
    Entry.m128i_i16[1] = 2 * v3 + 2;
  }
  if ( (int)RtlpDosPathNameToRelativeNtPathName(
              2,
              &Entry,
              0LL,
              (unsigned __int16 *)&v8,
              0LL,
              0LL,
              (__int64)BaseAddress_8) >= 0 )
  {
    v4 = (void *)*((_QWORD *)&v8 + 1);
    if ( LOWORD(BaseAddress_8[0]) )
    {
      v5 = v10;
      v8 = *(_OWORD *)BaseAddress_8;
    }
    else
    {
      v5 = 0LL;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
    ObjectAttributes.RootDirectory = (HANDLE)(v5 & -(__int64)(v4 != 0LL));
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwQueryAttributesFile(&ObjectAttributes, &FileInformation) >= 0
      && (FileInformation.FileAttributes & 0x400) != 0 )
    {
      v1 = 0;
    }
    if ( v4 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return v1;
}
