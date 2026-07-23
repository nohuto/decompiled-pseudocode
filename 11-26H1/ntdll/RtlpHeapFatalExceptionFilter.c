/*
 * XREFs of RtlpHeapFatalExceptionFilter @ 0x180140318
 * Callers:
 *     RtlReAllocateHeapFull @ 0x180140250 (RtlReAllocateHeapFull.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHeapFatalExceptionFilter(int a1, __int64 a2)
{
  __int64 result; // rax

  result = RtlpHeapExceptionFilter(a1, a2);
  if ( (_DWORD)result == 1 )
    __fastfail(0x23u);
  return result;
}
