/*
 * XREFs of RtlpHeapFatalExceptionFilter @ 0x14061C8AC
 * Callers:
 *     RtlFreeHeapFull @ 0x14061C7CC (RtlFreeHeapFull.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x140628784 (RtlpHeapExceptionFilter.c)
 */

__int64 RtlpHeapFatalExceptionFilter()
{
  __int64 result; // rax

  result = RtlpHeapExceptionFilter();
  if ( (_DWORD)result == 1 )
    __fastfail(0x23u);
  return result;
}
