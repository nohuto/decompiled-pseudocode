/*
 * XREFs of ??$FindEx@VCAppLayoutAnimationDataFinderByAnimationType@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutAnimationDataFinderByAnimationType@@AEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806C2FD0
 * Callers:
 *     ?GetClosedView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1806C3300 (-GetClosedView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByAnimationType>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // rbx

  v4 = 0LL;
  *a4 = 0LL;
  while ( v4 < a1[1] )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 8 * v4) + 32LL))(*(_QWORD *)(*a1 + 8 * v4)) == *a2 )
    {
      *a4 = v4;
      return 0LL;
    }
    ++v4;
  }
  return 2147647531LL;
}
