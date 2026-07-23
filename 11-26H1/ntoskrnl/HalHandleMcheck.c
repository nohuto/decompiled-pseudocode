/*
 * XREFs of HalHandleMcheck @ 0x1405805D0
 * Callers:
 *     KiHandleMcheck @ 0x1405EE370 (KiHandleMcheck.c)
 * Callees:
 *     HalpMcaReportError @ 0x14044C030 (HalpMcaReportError.c)
 *     HalpHandleMachineCheck @ 0x14057D2CC (HalpHandleMachineCheck.c)
 */

void __fastcall HalHandleMcheck(__int64 a1, __int64 a2, int *a3)
{
  __int64 v5; // rdi
  int v6; // eax

  if ( HalpMcaEnabled )
  {
    v5 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
    if ( !v5 )
      HalpMcaReportError(0LL, 0LL, 0x80000003);
    if ( a3 )
    {
      v6 = *a3;
      *(_OWORD *)a3 = 0LL;
      *a3 = v6;
    }
    *(_QWORD *)(v5 + 32) = a3;
    HalpHandleMachineCheck(a1);
    *(_QWORD *)(v5 + 32) = 0LL;
  }
}
