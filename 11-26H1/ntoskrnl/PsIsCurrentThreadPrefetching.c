/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x140494CE0
 * Callers:
 *     MiCreateImageMapHeader @ 0x140A63364 (MiCreateImageMapHeader.c)
 *     MiShareExistingControlArea @ 0x140A63F80 (MiShareExistingControlArea.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x2000000) != 0;
}
