/*
 * XREFs of KeQueryNumaCosts @ 0x140CCEB5C
 * Callers:
 *     SaveNodeDistanceInformation @ 0x140D10214 (SaveNodeDistanceInformation.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void *KeQueryNumaCosts()
{
  ULONG_PTR v0; // rdi
  void *Pool2; // rax
  void *v2; // rbx

  v0 = 8LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
  Pool2 = (void *)ExAllocatePool2(256LL, v0, 0x616D754Eu);
  v2 = Pool2;
  if ( Pool2 )
    memmove(Pool2, KiActualNodeCost, v0);
  return v2;
}
