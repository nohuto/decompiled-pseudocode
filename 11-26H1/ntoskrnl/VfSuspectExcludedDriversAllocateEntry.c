/*
 * XREFs of VfSuspectExcludedDriversAllocateEntry @ 0x140C38FF4
 * Callers:
 *     VfSuspectDriversParseRegistryString @ 0x140CDF400 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140CDF5B8 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

ULONG_PTR __fastcall VfSuspectExcludedDriversAllocateEntry(unsigned __int16 *a1, unsigned int a2)
{
  ULONG_PTR Pool2; // rax
  ULONG_PTR v4; // rbx
  size_t v5; // r8
  const void *v6; // rdx

  Pool2 = ExAllocatePool2(64LL, a1[1] + 32LL, a2);
  v4 = Pool2;
  if ( Pool2 )
  {
    v5 = *a1;
    *(_WORD *)(Pool2 + 18) = a1[1];
    v6 = (const void *)*((_QWORD *)a1 + 1);
    *(_QWORD *)(Pool2 + 24) = Pool2 + 32;
    *(_WORD *)(Pool2 + 16) = v5;
    memmove((void *)(Pool2 + 32), v6, v5);
  }
  return v4;
}
