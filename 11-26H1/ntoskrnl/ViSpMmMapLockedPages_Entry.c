/*
 * XREFs of ViSpMmMapLockedPages_Entry @ 0x140721410
 * Callers:
 *     <none>
 * Callees:
 *     ViSpMmMapLockedPagesSanityChecks @ 0x140C43B34 (ViSpMmMapLockedPagesSanityChecks.c)
 */

__int64 __fastcall ViSpMmMapLockedPages_Entry(__int64 a1)
{
  return ViSpMmMapLockedPagesSanityChecks(*(_QWORD *)(a1 + 16));
}
