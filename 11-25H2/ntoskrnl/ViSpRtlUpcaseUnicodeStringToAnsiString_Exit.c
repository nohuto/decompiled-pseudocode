/*
 * XREFs of ViSpRtlUpcaseUnicodeStringToAnsiString_Exit @ 0x140B94DE0
 * Callers:
 *     <none>
 * Callees:
 *     ViSpRtlReplaceStringBuffer @ 0x140B94E64 (ViSpRtlReplaceStringBuffer.c)
 */

__int64 __fastcall ViSpRtlUpcaseUnicodeStringToAnsiString_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( *(int *)(a1 + 32) >= 0 )
      return ViSpRtlReplaceStringBuffer(*(_QWORD *)(a1 + 24), *(_QWORD *)a1);
  }
  return result;
}
