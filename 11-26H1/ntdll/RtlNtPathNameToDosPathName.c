/*
 * XREFs of RtlNtPathNameToDosPathName @ 0x1800A6190
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnsureBufferSize @ 0x180099CB0 (RtlpEnsureBufferSize.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A5F50 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x1800A6410 (RtlPrefixUnicodeString.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlNtPathNameToDosPathName(
        ULONG Flags,
        PRTL_UNICODE_STRING_BUFFER Path,
        PULONG Disposition,
        PWSTR *FilePart)
{
  NTSTATUS v4; // ebx
  unsigned __int64 v8; // rbp
  const _UNICODE_STRING *v10; // r14
  unsigned __int16 *v11; // r15
  unsigned __int16 Length; // dx
  SIZE_T v13; // r8
  unsigned __int16 *p_Size; // rsi
  wchar_t *Buffer; // rcx
  unsigned __int64 v16; // rcx
  wchar_t *v17; // rax
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  int v23; // r8d
  __int64 v24; // [rsp+58h] [rbp+10h]

  v4 = 0;
  v8 = 0LL;
  if ( Disposition )
    *Disposition = 0;
  if ( !Path )
    return -1073741811;
  if ( Flags )
    return -1073741811;
  if ( FilePart )
  {
    if ( *FilePart )
    {
      v8 = *FilePart - Path->String.Buffer;
      if ( v8 >= (unsigned __int64)Path->String.Length >> 1 )
        return -1073741811;
    }
  }
  v10 = &RtlpDosDevicesUncPrefix;
  if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesUncPrefix, &Path->String, 1u) )
  {
    v10 = &RtlpDosDevicesPrefix;
    if ( RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesPrefix, &Path->String, 1u) )
    {
      v11 = (unsigned __int16 *)&RtlpEmptyString;
      if ( Disposition )
        *Disposition = 3;
      goto LABEL_12;
    }
    if ( !Disposition )
      return v4;
    v18 = RtlDetermineDosPathNameType_Ustr(&Path->String.Length);
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_25;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_25;
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( (unsigned int)(v23 - 1) > 1 )
              return v4;
LABEL_25:
            *Disposition = 4;
            return v4;
          }
        }
      }
    }
    *Disposition = 1;
    return v4;
  }
  v11 = (unsigned __int16 *)&unk_180171E38;
  if ( Disposition )
    *Disposition = 2;
LABEL_12:
  Length = Path->String.Length;
  v24 = (unsigned __int16)((*v11 >> 1) + (Path->String.Length >> 1) - (v10->Length >> 1));
  v13 = 2 * v24 + 2;
  if ( v13 > 0xFFFE )
    return -1073741562;
  p_Size = (unsigned __int16 *)&Path->ByteBuffer.Size;
  if ( Path == (PRTL_UNICODE_STRING_BUFFER)-16LL || v13 > *(_QWORD *)p_Size )
  {
    if ( (int)RtlpEnsureBufferSize(0, (__int64)&Path->ByteBuffer, v13) < 0 )
      return -1073741801;
    Length = Path->String.Length;
  }
  Buffer = (wchar_t *)Path->ByteBuffer.Buffer;
  Path->String.MaximumLength = *p_Size;
  Path->String.Buffer = Buffer;
  memmove(
    &Buffer[(unsigned __int64)*v11 >> 1],
    &Buffer[(unsigned __int64)v10->Length >> 1],
    Length - (unsigned __int64)v10->Length);
  memmove(Path->String.Buffer, *((const void **)v11 + 1), *v11);
  v16 = (unsigned __int16)(2 * v24);
  v17 = Path->String.Buffer;
  Path->String.Length = v16;
  v17[v16 >> 1] = 0;
  if ( v8 )
    *FilePart = &Path->String.Buffer[v8 + ((unsigned __int64)*v11 >> 1) - ((unsigned __int64)v10->Length >> 1)];
  return v4;
}
