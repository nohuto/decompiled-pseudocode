/*
 * XREFs of ??$emplace_back@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAAEAUKernelTap@@AEAM$$QEAM0@Z @ 0x1802B715C
 * Callers:
 *     ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x18015C098 (-GenerateTaps@CGaussianKernel@@SAXAEAV-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x1802B6E4C (--$_Emplace_reallocate@AEAMMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAP.c)
 */

char *__fastcall std::vector<KernelTap>::emplace_back<float &,float,float &>(
        __int64 a1,
        _DWORD *a2,
        int *a3,
        _DWORD *a4)
{
  _DWORD *v4; // r10
  int v5; // xmm0_4

  v4 = *(_DWORD **)(a1 + 8);
  if ( v4 == *(_DWORD **)(a1 + 16) )
    return std::vector<KernelTap>::_Emplace_reallocate<float &,float,float &>((void **)a1, (__int64)v4, a2, a3, a4);
  v5 = *a3;
  *v4 = *a2;
  v4[2] = *a4;
  *(_QWORD *)(a1 + 8) = v4 + 3;
  v4[1] = v5;
  return (char *)v4;
}
