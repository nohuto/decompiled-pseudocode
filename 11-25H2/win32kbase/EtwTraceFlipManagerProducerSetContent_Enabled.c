/*
 * XREFs of EtwTraceFlipManagerProducerSetContent_Enabled @ 0x14012EA00
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
  if ( (unsigned __int8)(byte_14029EDB8 - 1) <= 2u
    || (qword_14029EDA0 & 0x8000000000001000uLL) == 0
    || (qword_14029EDA8 & 0x8000000000001000uLL) != qword_14029EDA8 )
  {
    return 0;
  }
  return v0;
}
