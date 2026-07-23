/*
 * XREFs of RtlGetLengthWithoutTrailingPathSeperators @ 0x18010AD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetLengthWithoutTrailingPathSeperators(ULONG Flags, PUNICODE_STRING PathString, PULONG Length)
{
  NTSTATUS v3; // r9d
  ULONG v5; // ecx
  wchar_t *Buffer; // r10
  __int64 v7; // rdx

  v3 = 0;
  if ( Length )
    *Length = 0;
  if ( !PathString || !Length || Flags )
    return -1073741811;
  v5 = PathString->Length >> 1;
  if ( v5 )
  {
    Buffer = PathString->Buffer;
    do
    {
      v7 = v5 - 1;
      if ( Buffer[v7] != 92 && Buffer[v7] != 47 )
        break;
      --v5;
    }
    while ( (_DWORD)v7 );
  }
  *Length = v5;
  return v3;
}
