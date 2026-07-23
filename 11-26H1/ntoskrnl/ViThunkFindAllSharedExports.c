/*
 * XREFs of ViThunkFindAllSharedExports @ 0x140C3B73C
 * Callers:
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140C3B5F0 (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x1403582F0 (RtlNumberOfClearBits.c)
 *     ViThunkFindSharedExports @ 0x140C3B9E0 (ViThunkFindSharedExports.c)
 */

__int64 __fastcall ViThunkFindAllSharedExports(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  PVOID v5; // rsi
  ULONG v7; // eax
  __int64 v8; // rbx
  ULONG v9; // eax
  __int64 v10; // rbx
  ULONG v11; // eax

  v3 = a1[3];
  v5 = ViWdmThunksWithIatIndex;
  v7 = RtlNumberOfClearBits(&VfPoolThunksBitMapHeader);
  ViThunkFindSharedExports(v3, v7, v5, a3);
  v8 = a1[2];
  v9 = RtlNumberOfClearBits(&VfRegularThunksBitMapHeader);
  ViThunkFindSharedExports(v8, v9, v5, a3);
  v10 = a1[4];
  v11 = RtlNumberOfClearBits(&VfDifThunksBitMapHeader);
  return ViThunkFindSharedExports(v10, v11, v5, a3);
}
