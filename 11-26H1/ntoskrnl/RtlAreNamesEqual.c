/*
 * XREFs of RtlAreNamesEqual @ 0x14041C900
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1402FAF10 (RtlpUpcaseUnicodeStringPrivate.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 */

BOOLEAN __stdcall RtlAreNamesEqual(
        PCUNICODE_STRING ConstantNameA,
        PCUNICODE_STRING ConstantNameB,
        BOOLEAN IgnoreCase,
        PCWCH UpcaseTable)
{
  unsigned int Length; // eax
  unsigned int v7; // r9d
  wchar_t **p_Buffer; // rbx
  wchar_t **v9; // r11
  char v10; // di
  __int64 i; // rax
  BOOLEAN v13; // bl
  NTSTATUS v14; // eax
  int v15; // eax
  NTSTATUS v16; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v18; // [rsp+30h] [rbp-18h] BYREF

  Length = ConstantNameA->Length;
  UnicodeString = 0LL;
  v18 = 0LL;
  if ( (_WORD)Length != ConstantNameB->Length )
    return 0;
  v7 = Length >> 1;
  if ( IgnoreCase && !UpcaseTable )
  {
    v14 = RtlpUpcaseUnicodeStringPrivate((__int64)&UnicodeString, &ConstantNameA->Length);
    if ( v14 < 0 )
      RtlRaiseStatus(v14);
    v15 = RtlpUpcaseUnicodeStringPrivate((__int64)&v18, &ConstantNameB->Length);
    ConstantNameA = &UnicodeString;
    v16 = v15;
    if ( v15 < 0 )
    {
      RtlFreeAnsiString(&UnicodeString);
      RtlRaiseStatus(v16);
    }
    v10 = 1;
    p_Buffer = &v18.Buffer;
    v9 = &UnicodeString.Buffer;
    goto LABEL_11;
  }
  p_Buffer = &ConstantNameB->Buffer;
  v9 = &ConstantNameA->Buffer;
  v10 = 0;
  if ( !IgnoreCase )
  {
LABEL_11:
    v13 = memcmp(*v9, *p_Buffer, ConstantNameA->Length) == 0;
    if ( v10 )
    {
      RtlFreeAnsiString(&UnicodeString);
      RtlFreeAnsiString(&v18);
    }
    return v13;
  }
  for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
  {
    if ( UpcaseTable[(*v9)[i]] != UpcaseTable[(*p_Buffer)[i]] )
      return 0;
  }
  return 1;
}
