/*
 * XREFs of vCheckCharSet @ 0x1401CD54C
 * Callers:
 *     vProcessEntry @ 0x1401CD47C (vProcessEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall vCheckCharSet(__int64 a1, WCHAR *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  NTSTATUS result; // eax
  ULONG v6; // ecx
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  ULONG Value; // [rsp+40h] [rbp+8h] BYREF

  Value = 1;
  *(_QWORD *)&String.Length = 0LL;
  v2 = 0LL;
  String.Buffer = a2;
  v3 = -1LL;
  *(_WORD *)(a1 + 64) = 1;
  do
    ++v3;
  while ( a2[v3] );
  String.Length = 2 * v3;
  String.MaximumLength = 2 * v3;
  result = RtlUnicodeStringToInteger(&String, 0xAu, &Value);
  if ( !result )
  {
    v6 = Value;
    if ( Value <= 0xFF )
    {
      *(_BYTE *)(a1 + 64) = Value;
      while ( (unsigned int)v2 < 0x11 )
      {
        if ( v6 == charsets[v2] )
          return result;
        v2 = (unsigned int)(v2 + 1);
      }
    }
  }
  *(_BYTE *)(a1 + 65) |= 2u;
  return result;
}
