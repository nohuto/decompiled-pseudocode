/*
 * XREFs of ViSpRtlDuplicateUnicodeString_Exit @ 0x140C49E10
 * Callers:
 *     <none>
 * Callees:
 *     ViSpRtlReplaceStringBuffer @ 0x140C49E34 (ViSpRtlReplaceStringBuffer.c)
 */

__int64 __fastcall ViSpRtlDuplicateUnicodeString_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(int *)(a1 + 28) >= 0 )
    return ViSpRtlReplaceStringBuffer(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
  return result;
}
