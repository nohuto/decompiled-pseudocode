/*
 * XREFs of ?_FitRowToTargetWidth@GridLayoutFactory@@AEAAHAEBVLayoutRow@1@@Z @ 0x1804D60CC
 * Callers:
 *     ?_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@@Z @ 0x1804D61C4 (-_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV-$CCoSimpleArray@VLayoutRow@GridLayoutFactory.c)
 * Callees:
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x1804D6814 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GridLayoutFactory::_FitRowToTargetWidth(
        GridLayoutFactory *this,
        const struct GridLayoutFactory::LayoutRow *a2)
{
  _QWORD *v3; // rbx
  __int64 v5; // rdi
  double v6; // xmm6_8
  int v7; // ebx
  unsigned int v8; // ebx
  int TotalWidthForHeight; // eax
  int v10; // ecx

  v3 = *(_QWORD **)a2;
  v5 = *(_QWORD *)a2 + 16LL * *((_QWORD *)a2 + 1);
  v6 = 0.0;
  while ( v3 != (_QWORD *)v5 )
  {
    if ( *((_DWORD *)v3 + 2) < (*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 56LL))(*v3) )
      v6 = v6 + (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 64LL))(*v3);
    v3 += 2;
  }
  v7 = *((_DWORD *)this + 132) - *((_DWORD *)this + 130);
  v8 = (int)((double)(int)(v7
                         - GridLayoutFactory::s_GetTotalWidthForHeight(
                             a2,
                             *((unsigned int *)a2 + 10),
                             *((unsigned int *)a2 + 8),
                             0LL))
           / v6)
     + *((_DWORD *)a2 + 8);
  TotalWidthForHeight = GridLayoutFactory::s_GetTotalWidthForHeight(a2, *((unsigned int *)a2 + 10), v8, 0LL);
  v10 = *((_DWORD *)this + 132) - *((_DWORD *)this + 130);
  if ( TotalWidthForHeight > v10 )
    return (unsigned int)(int)((double)(int)v8 - (double)(TotalWidthForHeight - v10) / v6);
  return v8;
}
