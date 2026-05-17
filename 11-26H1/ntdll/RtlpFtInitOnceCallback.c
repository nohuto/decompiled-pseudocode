/*
 * XREFs of RtlpFtInitOnceCallback @ 0x180147C60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFtInitialize @ 0x18011D868 (RtlpFtInitialize.c)
 */

_BOOL8 RtlpFtInitOnceCallback()
{
  return (int)RtlpFtInitialize() >= 0;
}
