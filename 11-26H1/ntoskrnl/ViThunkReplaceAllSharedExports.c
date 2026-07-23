/*
 * XREFs of ViThunkReplaceAllSharedExports @ 0x140C3BD34
 * Callers:
 *     VfThunkApplyThunksCurrentSession @ 0x140C3B408 (VfThunkApplyThunksCurrentSession.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x1403582F0 (RtlNumberOfClearBits.c)
 *     ViThunkReplaceSharedExports @ 0x140C3BFEC (ViThunkReplaceSharedExports.c)
 */

__int64 __fastcall ViThunkReplaceAllSharedExports(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  ULONG v5; // eax
  __int64 result; // rax
  __int64 v7; // rbx
  ULONG v8; // eax
  __int64 v9; // rbx
  ULONG v10; // eax

  v2 = a2[3];
  v5 = RtlNumberOfClearBits(&VfPoolThunksBitMapHeader);
  result = ViThunkReplaceSharedExports(a1, v2, v5);
  if ( !KernelVerifier )
  {
    v7 = a2[2];
    v8 = RtlNumberOfClearBits(&VfRegularThunksBitMapHeader);
    ViThunkReplaceSharedExports(a1, v7, v8);
    v9 = a2[4];
    v10 = RtlNumberOfClearBits(&VfDifThunksBitMapHeader);
    return ViThunkReplaceSharedExports(a1, v9, v10);
  }
  return result;
}
