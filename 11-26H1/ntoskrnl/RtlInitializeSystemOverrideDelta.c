/*
 * XREFs of RtlInitializeSystemOverrideDelta @ 0x14099C1D4
 * Callers:
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x14080F814 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiRelocateImage @ 0x14099B784 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeSystemOverrideDelta(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 result; // rax

  if ( a4 )
    *(_QWORD *)(a1 + 8) = a4
                        + LODWORD(stru_140E2D2D0.LastXStateSaveDebugInfo)
                        + ((a5 + 4095) & 0xFFFFF000)
                        - (unsigned __int64)(LODWORD(stru_140E2D2D0.LastXStateSaveDebugInfo) + ((a3 + 4095) & 0xFFFFF000))
                        - a2;
  result = (unsigned int)(a3 + HIDWORD(stru_140E366D8.SListFaultAddress) + LODWORD(stru_140E366D8.QuantumTarget));
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&stru_140E2D2D0.WaitBlockFill11[64] - result - a2;
  return result;
}
