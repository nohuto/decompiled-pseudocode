/*
 * XREFs of HalHandleMcheck @ 0x14057E0B0
 * Callers:
 *     KiHandleMcheck @ 0x1405EBA00 (KiHandleMcheck.c)
 * Callees:
 *     HalpMcaReportError @ 0x140453F00 (HalpMcaReportError.c)
 *     HalpHandleMachineCheck @ 0x14057AD9C (HalpHandleMachineCheck.c)
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
