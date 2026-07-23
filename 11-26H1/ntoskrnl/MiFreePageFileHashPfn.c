/*
 * XREFs of MiFreePageFileHashPfn @ 0x1404AC268
 * Callers:
 *     MiMapPageFileHash @ 0x140499D94 (MiMapPageFileHash.c)
 *     MiFreePageFileHashPfns @ 0x1404AC10C (MiFreePageFileHashPfns.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 */

int __fastcall MiFreePageFileHashPfn(ULONG_PTR a1)
{
  __int64 v1; // rdx

  v1 = 6 * a1;
  *(_QWORD *)(8 * v1 - 0x220000000000LL + 24) = *(_QWORD *)(48 * a1 - 0x220000000000LL + 24) & 0xC000000000000000uLL;
  *(_DWORD *)(8 * v1 - 0x220000000000LL + 32) = *(_DWORD *)(48 * a1 - 0x220000000000LL + 32) & 0xFFFF0000;
  return MiInsertPageInFreeOrZeroedList(a1);
}
