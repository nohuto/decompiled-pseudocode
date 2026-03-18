/*
 * XREFs of EtwTraceFlipManagerProducerSetContent_Enabled @ 0x140166150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EtwTraceFlipManagerProducerSetContent_Enabled()
{
  unsigned int v0; // edx

  if ( (W32kEtwEnabledKeyword & 0x8000000000001000uLL) == 0 )
    return 0;
  v0 = 1;
  if ( (unsigned __int8)(byte_1402A9DD8 - 1) <= 2u
    || (qword_1402A9DC0 & 0x8000000000001000uLL) == 0
    || (qword_1402A9DC8 & 0x8000000000001000uLL) != qword_1402A9DC8 )
  {
    return 0;
  }
  return v0;
}
