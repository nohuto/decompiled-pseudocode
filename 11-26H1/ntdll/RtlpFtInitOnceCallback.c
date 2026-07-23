/*
 * XREFs of RtlpFtInitOnceCallback @ 0x180147B10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFtInitialize @ 0x18011D618 (RtlpFtInitialize.c)
 */

_BOOL8 __fastcall RtlpFtInitOnceCallback(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  return (int)RtlpFtInitialize() >= 0;
}
