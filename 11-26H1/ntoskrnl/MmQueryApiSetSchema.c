/*
 * XREFs of MmQueryApiSetSchema @ 0x1406EBD1C
 * Callers:
 *     KiMarkBugCheckRegions @ 0x140542C7C (KiMarkBugCheckRegions.c)
 *     PsQueryCurrentApiSetSchema @ 0x1407F4270 (PsQueryCurrentApiSetSchema.c)
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall MmQueryApiSetSchema(_KDPC ***a1, unsigned __int16 **a2)
{
  unsigned __int16 *result; // rax

  *a1 = &stru_140E2D2D0.Timer.Dpc;
  result = &stru_140E2D2D0.Timer.Processor;
  *a2 = &stru_140E2D2D0.Timer.Processor;
  return result;
}
