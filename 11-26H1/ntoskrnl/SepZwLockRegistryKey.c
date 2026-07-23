/*
 * XREFs of SepZwLockRegistryKey @ 0x140815A40
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x14072A280 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
