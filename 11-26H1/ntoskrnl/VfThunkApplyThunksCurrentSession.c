/*
 * XREFs of VfThunkApplyThunksCurrentSession @ 0x140C3B408
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140C3EA60 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403C1904 (VfTargetDriversGetNode.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     ViIsDriverSuspectForVerifier @ 0x140C27D68 (ViIsDriverSuspectForVerifier.c)
 *     ViThunkReplaceAllSharedExports @ 0x140C3BD34 (ViThunkReplaceAllSharedExports.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140C3BDC4 (ViThunkReplaceAllThunkedImports.c)
 */

__int64 __fastcall VfThunkApplyThunksCurrentSession(__int64 a1)
{
  void *v1; // rbp
  unsigned int v3; // ebx
  __int64 Node; // rax
  __int64 v5; // rdi
  PVOID v6; // r14
  ULONG v7; // ebp
  unsigned int IsDriverSuspectForVerifier; // eax
  ULONG Size; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(void **)(a1 + 48);
  v3 = 0;
  Size = 0;
  Node = VfTargetDriversGetNode((__int64)v1);
  v5 = Node;
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
            ViThunkReplaceAllSharedExports(a1, v5);
            return 1;
          }
        }
      }
    }
  }
  return v3;
}
