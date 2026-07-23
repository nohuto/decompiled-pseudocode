/*
 * XREFs of MiRevertRelocatedImagePfn @ 0x1409A0624
 * Callers:
 *     MiValidateImagePfn @ 0x140B0676C (MiValidateImagePfn.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     KeCopyPageNoOverride @ 0x140735430 (KeCopyPageNoOverride.c)
 *     MiPerformFixups @ 0x14099FD30 (MiPerformFixups.c)
 *     MiPageHasRelocations @ 0x1409A0720 (MiPageHasRelocations.c)
 */

__int64 __fastcall MiRevertRelocatedImagePfn(
        __int64 BugCheckParameter3,
        __int64 *BugCheckParameter2,
        unsigned int a3,
        __int64 a4,
        char a5)
{
  unsigned __int64 v6; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  int CurrentProcessorColor; // eax
  __int64 v12; // rdi
  ULONG_PTR v13; // rcx
  __int64 v14; // rdx

  v6 = BugCheckParameter2[12] & 0xFFFFFFFFFFFFFFF8uLL;
  v9 = *(_QWORD *)(v6 + 32);
  if ( !v9 || !(unsigned int)MiPageHasRelocations(*(_QWORD *)(v6 + 32), a3, 1LL) )
    return -1LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = ExAllocatePoolMm(256LL, 0x1000uLL, 1749642573, CurrentProcessorColor | 0x80000000);
  v12 = result;
  if ( result )
  {
    KeCopyPageNoOverride(result, BugCheckParameter3);
    v13 = v12;
    if ( (a5 & 2) != 0 )
      v13 = BugCheckParameter3;
    v14 = 0LL;
    if ( (a5 & 1) == 0 )
      v14 = -*(_QWORD *)(v9 + 40);
    MiPerformFixups(v13, BugCheckParameter2, a3, v14 + *(_QWORD *)(v9 + 48), 0LL, 0x29u);
    return v12;
  }
  return result;
}
