/*
 * XREFs of ?_Calculate_growth@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEBA_K_K@Z @ 0x18021C54C
 * Callers:
 *     ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x1802B6E4C (--$_Emplace_reallocate@AEAMMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAP.c)
 *     ??$_Emplace_reallocate@MAEAMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAPEAUKernelTap@@QEAU2@$$QEAMAEAM2@Z @ 0x1802B6FAC (--$_Emplace_reallocate@MAEAMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAP.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<KernelTap>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x1555555555555555LL;
  v3 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 2)) >> 1;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 2) <= 0x1555555555555555LL - v3 )
  {
    result = v3 - 0x5555555555555555LL * ((__int64)(a1[2] - *a1) >> 2);
    if ( result < a2 )
      return a2;
  }
  return result;
}
