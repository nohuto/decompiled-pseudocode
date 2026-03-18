/*
 * XREFs of RtlpHeapFatalExceptionFilter @ 0x14061985C
 * Callers:
 *     RtlFreeHeapFull @ 0x140619770 (RtlFreeHeapFull.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x140625734 (RtlpHeapExceptionFilter.c)
 */

__int64 RtlpHeapFatalExceptionFilter()
{
  __int64 result; // rax

  result = RtlpHeapExceptionFilter();
  if ( (_DWORD)result == 1 )
    __fastfail(0x23u);
  return result;
}
