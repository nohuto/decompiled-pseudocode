/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x14049B190
 * Callers:
 *     MiCreateImageMapHeader @ 0x140A55DDC (MiCreateImageMapHeader.c)
 *     MiShareExistingControlArea @ 0x140A56A00 (MiShareExistingControlArea.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x2000000) != 0;
}
