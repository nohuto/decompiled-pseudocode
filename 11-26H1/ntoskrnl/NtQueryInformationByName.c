/*
 * XREFs of NtQueryInformationByName @ 0x1409B46B0
 * Callers:
 *     DifNtQueryInformationByNameWrapper @ 0x140682710 (DifNtQueryInformationByNameWrapper.c)
 * Callees:
 *     IoQueryInformationByName @ 0x1409B46E0 (IoQueryInformationByName.c)
 */

__int64 __fastcall NtQueryInformationByName(__int64 a1, __int64 a2, __int64 a3)
{
  return IoQueryInformationByName(a1, a2, a3);
}
