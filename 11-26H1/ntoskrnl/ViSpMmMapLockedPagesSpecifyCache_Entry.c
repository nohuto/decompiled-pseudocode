/*
 * XREFs of ViSpMmMapLockedPagesSpecifyCache_Entry @ 0x140C49CE0
 * Callers:
 *     <none>
 * Callees:
 *     ViSpMmMapLockedPagesSanityChecks @ 0x140C49B44 (ViSpMmMapLockedPagesSanityChecks.c)
 */

__int64 __fastcall ViSpMmMapLockedPagesSpecifyCache_Entry(__int64 a1)
{
  return ViSpMmMapLockedPagesSanityChecks(*(_QWORD *)(a1 + 32), *(_BYTE *)(a1 + 28), *(_QWORD *)a1);
}
