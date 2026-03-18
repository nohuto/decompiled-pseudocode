/*
 * XREFs of MiCreateInitialPfns @ 0x1406E70A0
 * Callers:
 *     MiInitializeNewPfns @ 0x1406E6548 (MiInitializeNewPfns.c)
 *     MxInsertFreePages @ 0x140CF7300 (MxInsertFreePages.c)
 *     MxInsertEnclaveBootPages @ 0x140CFD18C (MxInsertEnclaveBootPages.c)
 * Callees:
 *     MiInitializePfnEntriesRaw @ 0x140483984 (MiInitializePfnEntriesRaw.c)
 */

unsigned __int64 __fastcall MiCreateInitialPfns(__m128i *a1, unsigned __int64 a2, __m128i *a3)
{
  unsigned __int64 result; // rax

  result = (unsigned __int64)a3;
  if ( a2 != 1 )
    return MiInitializePfnEntriesRaw(a1, a3, a2);
  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  a1[2] = _mm_loadu_si128(a3 + 2);
  return result;
}
