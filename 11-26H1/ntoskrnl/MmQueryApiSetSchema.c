/*
 * XREFs of MmQueryApiSetSchema @ 0x1406E706C
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1405407FC (KiMarkBugCheckRegions.c)
 *     PsQueryCurrentApiSetSchema @ 0x1407EE710 (PsQueryCurrentApiSetSchema.c)
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall MmQueryApiSetSchema(_KDPC ***a1, unsigned __int16 **a2)
{
  unsigned __int16 *result; // rax

  *a1 = &stru_140E2D150.Timer.Dpc;
  result = &stru_140E2D150.Timer.Processor;
  *a2 = &stru_140E2D150.Timer.Processor;
  return result;
}
