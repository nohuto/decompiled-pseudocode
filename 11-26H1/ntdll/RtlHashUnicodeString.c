/*
 * XREFs of RtlHashUnicodeString @ 0x1800BB180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlHashUnicodeString(
        PUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  __int64 v4; // rdi
  ULONG v5; // r10d
  wchar_t *Buffer; // r11
  int v8; // r9d
  unsigned __int64 v9; // rax
  int v11; // ecx

  v4 = qword_1801C5038;
  v5 = 0;
  if ( !String )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  Buffer = String->Buffer;
  *HashValue = 0;
  v8 = String->Length >> 1;
  if ( HashAlgorithm > 1 )
    return -1073741811;
  if ( v8 )
  {
    if ( CaseInSensitive )
    {
      do
      {
        v9 = *Buffer++;
        --v8;
        if ( (unsigned int)v9 >= 0x61 )
        {
          if ( (unsigned int)v9 > 0x7A )
          {
            if ( v4 )
            {
              if ( (unsigned __int16)v9 >= 0xC0u )
                LOWORD(v9) = *(_WORD *)(v4
                                      + 2
                                      * ((v9 & 0xF)
                                       + *(unsigned __int16 *)(v4
                                                             + 2LL
                                                             * (((unsigned __int8)v9 >> 4)
                                                              + (unsigned int)*(unsigned __int16 *)(v4 + 2 * (v9 >> 8))))))
                           + v9;
            }
          }
          else
          {
            LOWORD(v9) = v9 - 32;
          }
        }
        v5 = (unsigned __int16)v9 + 65599 * v5;
      }
      while ( v8 );
    }
    else
    {
      do
      {
        v11 = *Buffer++;
        v5 = v11 + 65599 * v5;
        --v8;
      }
      while ( v8 );
    }
  }
  *HashValue = v5;
  return 0;
}
