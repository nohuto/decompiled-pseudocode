/*
 * XREFs of KeFlushCurrentTbImmediately @ 0x1404E0E70
 * Callers:
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 *     KeLoadMTRR @ 0x140C0CF60 (KeLoadMTRR.c)
 *     KiSetPageAttributesTable @ 0x140C1275C (KiSetPageAttributesTable.c)
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
