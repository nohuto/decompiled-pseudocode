/*
 * XREFs of VfThunkApplyThunksCurrentSession @ 0x140C353F8
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140C38A50 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403B7A04 (VfTargetDriversGetNode.c)
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     ViIsDriverSuspectForVerifier @ 0x140C21D58 (ViIsDriverSuspectForVerifier.c)
 *     ViThunkReplaceAllSharedExports @ 0x140C35D24 (ViThunkReplaceAllSharedExports.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140C35DB4 (ViThunkReplaceAllThunkedImports.c)
 */

__int64 __fastcall VfThunkApplyThunksCurrentSession(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v3; // ebx
  __int64 Node; // rax
  __int64 v5; // rdi
  __int64 v6; // r14
  unsigned int v7; // ebp
  unsigned int IsDriverSuspectForVerifier; // eax
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  v10 = 0;
  Node = VfTargetDriversGetNode(v1);
  v5 = Node;
  if ( Node )
  {
    if ( (*(_DWORD *)(Node + 16) & 1) == 0 )
    {
      v6 = RtlImageDirectoryEntryToData(v1, 1, 0xCu, &v10);
      if ( v6 )
      {
        v7 = v10;
        if ( v10 )
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
