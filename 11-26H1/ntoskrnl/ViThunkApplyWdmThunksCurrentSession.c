/*
 * XREFs of ViThunkApplyWdmThunksCurrentSession @ 0x140C3B5F0
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140C3E79C (VfSuspectApplyDifVolatileVerification.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403C1904 (VfTargetDriversGetNode.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VfUtilPrintCheckinString @ 0x140C27A20 (VfUtilPrintCheckinString.c)
 *     ViIsDriverSuspectForVerifier @ 0x140C27D68 (ViIsDriverSuspectForVerifier.c)
 *     ViThunkFindAllSharedExports @ 0x140C3B73C (ViThunkFindAllSharedExports.c)
 *     ViThunkFindAllThunkedImports @ 0x140C3B86C (ViThunkFindAllThunkedImports.c)
 *     MmApplyVerifierToRunningImage @ 0x140C49760 (MmApplyVerifierToRunningImage.c)
 */

__int64 __fastcall ViThunkApplyWdmThunksCurrentSession(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  __int64 Node; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v2 = 0;
  Node = VfTargetDriversGetNode(*(_QWORD *)(BugCheckParameter2 + 48));
  v4 = Node;
  if ( Node && (*(_DWORD *)(Node + 16) & 1) == 0 && (unsigned int)ViIsDriverSuspectForVerifier(BugCheckParameter2) )
  {
    if ( ViWdmThunksWithIatIndex )
    {
      memset_0(ViWdmThunksWithIatIndex, 0, 24LL * (unsigned int)ViNumberOfWdmThunks);
      ViThunkFindAllThunkedImports(BugCheckParameter2, v5, &v8);
      if ( v8 )
      {
        ViThunkFindAllSharedExports(v4, v6, &v8);
        v2 = MmApplyVerifierToRunningImage(BugCheckParameter2);
        if ( v2 >= 0 )
          VfUtilPrintCheckinString((unsigned __int16 *)(BugCheckParameter2 + 88), 0);
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v2;
}
