/*
 * XREFs of MiFinalizePageAttribute @ 0x1402D85E0
 * Callers:
 *     MiSwapNumaStandbyPage @ 0x1402C8D30 (MiSwapNumaStandbyPage.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiCombineInitialFinish @ 0x14030A2B4 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPteCopy @ 0x14030DAD8 (MiHandleForkValidPteCopy.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MiSwapStackPage @ 0x140415804 (MiSwapStackPage.c)
 *     MiInitializeCacheFlushing @ 0x140CFF38C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 result; // rax
  signed __int64 v6; // rcx
  signed __int64 v7; // rdx
  signed __int64 v8; // rcx

  v3 = a3;
  result = (*(_DWORD *)(a1 + 32) >> 22) & 3;
  if ( (_DWORD)result != (_DWORD)a2 )
    result = MiChangePageAttribute(a1, a2, a3);
  v6 = *(_QWORD *)(a1 + 24);
  if ( (v3 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 24) = v6 & 0xC7FFFFFFFFFFFFFFuLL;
  }
  else
  {
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v6 & 0xC7FFFFFFFFFFFFFFuLL, v6);
    v7 = result;
    if ( v6 != result )
    {
      do
      {
        v8 = v7;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v7 & 0xC7FFFFFFFFFFFFFFuLL, v7);
        v7 = result;
      }
      while ( v8 != result );
    }
  }
  return result;
}
