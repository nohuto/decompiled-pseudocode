/*
 * XREFs of PopBcdClose @ 0x1409D0070
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x140610A68 (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     BcdCloseStore @ 0x1409D0088 (BcdCloseStore.c)
 */

__int64 __fastcall PopBcdClose(__int64 a1)
{
  return BcdCloseStore(a1);
}
