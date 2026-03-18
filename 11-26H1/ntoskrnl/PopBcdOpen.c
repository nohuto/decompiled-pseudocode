/*
 * XREFs of PopBcdOpen @ 0x140B52A6C
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x140610A68 (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     BiOpenStoreWithHash @ 0x140773404 (BiOpenStoreWithHash.c)
 */

__int64 __fastcall PopBcdOpen(__int64 a1, __int64 a2, __int64 a3)
{
  return BiOpenStoreWithHash(a1, 2u, a3, a1);
}
