/*
 * XREFs of PsAllocateAffinityToken @ 0x1404EE650
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x140880C48 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PsAllocateAffinityToken(__int64 *a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int16 v5; // ax
  __int64 v6; // r8

  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v4 = Pool2 + 32;
  *(_QWORD *)(Pool2 + 24) = Pool2 + 32;
  v5 = KiMaximumGroups;
  v6 = (unsigned __int16)KiMaximumGroups;
  *(_WORD *)v4 = 1;
  *(_WORD *)(v4 + 2) = v5;
  *(_DWORD *)(v4 + 4) = 0;
  memset_0((void *)(v4 + 8), 0, 8 * v6);
  *(_QWORD *)v3 = 0LL;
  *(_OWORD *)(v3 + 8) = 0LL;
  *a1 = v3;
  return 0LL;
}
