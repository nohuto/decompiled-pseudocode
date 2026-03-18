/*
 * XREFs of ViSpRtlCreateUnicodeString_Exit @ 0x140C43DD0
 * Callers:
 *     <none>
 * Callees:
 *     ViSpRtlReplaceStringBuffer @ 0x140C43E24 (ViSpRtlReplaceStringBuffer.c)
 */

__int64 __fastcall ViSpRtlCreateUnicodeString_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
    return ViSpRtlReplaceStringBuffer(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
  return result;
}
