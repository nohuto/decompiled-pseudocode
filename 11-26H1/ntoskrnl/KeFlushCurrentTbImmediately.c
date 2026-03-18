/*
 * XREFs of KeFlushCurrentTbImmediately @ 0x1404E7AB0
 * Callers:
 *     PopHandleNextState @ 0x140C02C90 (PopHandleNextState.c)
 *     KeLoadMTRR @ 0x140C06D50 (KeLoadMTRR.c)
 *     KiSetPageAttributesTable @ 0x140C0C54C (KiSetPageAttributesTable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KeFlushCurrentTbImmediately()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 result; // rax

  v0 = __readcr4();
  if ( (v0 & 0x20080) != 0 )
  {
    result = v0 ^ 0x80;
    __writecr4(v0 ^ 0x80);
    __writecr4(v0);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
