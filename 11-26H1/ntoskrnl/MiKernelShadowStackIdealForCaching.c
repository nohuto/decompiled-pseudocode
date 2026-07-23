/*
 * XREFs of MiKernelShadowStackIdealForCaching @ 0x14040B330
 * Callers:
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     MiAddKernelStackToPrcbCache @ 0x14040AF98 (MiAddKernelStackToPrcbCache.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140704108 (MiRemoveNonIdealCachedStacks.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiKernelShadowStackIdealForCaching(_QWORD *BugCheckParameter2, ULONG_PTR a2, __int64 *a3, int *a4)
{
  unsigned int v4; // edi
  _QWORD *v8; // rbx
  __int64 v9; // r11
  int v10; // r10d
  ULONG_PTR v11; // rcx
  __int64 v12; // rbp
  int v13; // eax
  int v15; // eax

  v4 = 0;
  *a3 = 0LL;
  *a4 = -1;
  v8 = BugCheckParameter2;
  if ( (unsigned __int64)BugCheckParameter2 < a2 )
  {
    v9 = 0LL;
    v10 = -1;
    do
    {
      v11 = (*v8 >> 12) & 0xFFFFFFFFFFLL;
      v12 = 48 * v11 - 0x220000000000LL;
      if ( !v9 )
        *a3 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
      v13 = *(_DWORD *)(v12 + 32);
      if ( (_WORD)v13 != 2 )
        KeBugCheckEx(0x1Au, 0x3405uLL, (ULONG_PTR)v8, (__int64)(48 * v11) / 48, (unsigned __int16)v13);
      if ( v10 == -1 )
      {
        v10 = MiPageToNode(v11);
        *a4 = v10;
      }
      else
      {
        v15 = MiPageToNode(v11);
        v10 = *a4;
        if ( *a4 != v15 )
          v4 = 1;
      }
      v9 = *a3;
      if ( (*(_DWORD *)(*a3 + 4) & 8) != 0 && (unsigned int)MiGetPfnSlabType(v12) == 9 )
        v4 = 1;
      ++v8;
    }
    while ( (unsigned __int64)v8 < a2 );
  }
  return v4;
}
