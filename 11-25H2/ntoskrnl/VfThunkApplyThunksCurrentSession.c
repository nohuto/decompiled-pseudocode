/*
 * XREFs of VfThunkApplyThunksCurrentSession @ 0x140B871CC
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140B8AB5C (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140395F10 (RtlNumberOfClearBits.c)
 *     VfTargetDriversGetNode @ 0x1403EA5A4 (VfTargetDriversGetNode.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     ViIsDriverSuspectForVerifier @ 0x140B7384C (ViIsDriverSuspectForVerifier.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140B87B68 (ViThunkReplaceAllThunkedImports.c)
 *     ViThunkReplaceSharedExports @ 0x140B87D90 (ViThunkReplaceSharedExports.c)
 */

__int64 __fastcall VfThunkApplyThunksCurrentSession(__int64 a1)
{
  void *v1; // rbp
  unsigned int v3; // ebx
  __int64 Node; // rax
  _QWORD *v5; // rdi
  PVOID v6; // r14
  ULONG v7; // ebp
  unsigned int IsDriverSuspectForVerifier; // eax
  ULONG v9; // eax
  ULONG v10; // eax
  ULONG v11; // eax
  ULONG Size; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(void **)(a1 + 48);
  v3 = 0;
  Size = 0;
  Node = VfTargetDriversGetNode((__int64)v1);
  v5 = (_QWORD *)Node;
  if ( Node )
  {
    if ( (*(_DWORD *)(Node + 16) & 1) == 0 )
    {
      v6 = RtlImageDirectoryEntryToData(v1, 1u, 0xCu, &Size);
      if ( v6 )
      {
        v7 = Size;
        if ( Size )
        {
          IsDriverSuspectForVerifier = ViIsDriverSuspectForVerifier(a1);
          if ( (unsigned int)ViThunkReplaceAllThunkedImports(a1, v6, v7 >> 3, IsDriverSuspectForVerifier) )
          {
            v9 = RtlNumberOfClearBits(&VfPoolThunksBitMapHeader);
            ViThunkReplaceSharedExports(a1, v5[3], v9);
            if ( !KernelVerifier )
            {
              v10 = RtlNumberOfClearBits(&VfRegularThunksBitMapHeader);
              ViThunkReplaceSharedExports(a1, v5[2], v10);
              v11 = RtlNumberOfClearBits(&VfDifThunksBitMapHeader);
              ViThunkReplaceSharedExports(a1, v5[4], v11);
            }
            return 1;
          }
        }
      }
    }
  }
  return v3;
}
