/*
 * XREFs of WmiVerifierCopyEvent @ 0x1406C716C
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140C46480 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void *__fastcall WmiVerifierCopyEvent(unsigned int *Src)
{
  unsigned int v1; // esi
  void *Pool2; // rax
  void *v4; // rbx

  v1 = *Src;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  v4 = Pool2;
  if ( Pool2 )
    memmove(Pool2, Src, v1);
  return v4;
}
