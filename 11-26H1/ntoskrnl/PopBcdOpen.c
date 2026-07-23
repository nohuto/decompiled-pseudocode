/*
 * XREFs of PopBcdOpen @ 0x140B5530C
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x140613D24 (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     BiOpenStoreWithHash @ 0x140776404 (BiOpenStoreWithHash.c)
 */

__int64 __fastcall PopBcdOpen(__int64 a1, __int64 a2, __int64 a3)
{
  return BiOpenStoreWithHash(a1, 2u, a3, a1);
}
