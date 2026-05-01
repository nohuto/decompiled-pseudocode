/*
 * XREFs of ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800E74D0
 * Callers:
 *     ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x1800AE6B0 (-MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1802FDC80 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v8; // rbp
  __int64 *v9; // rcx
  __int64 v10; // rax

  v4 = 0LL;
  *a4 = 0LL;
  while ( 1 )
  {
    if ( v4 >= a1[1] )
      return 2147647531LL;
    if ( *((_BYTE *)a2 + 16) )
      break;
    v9 = *(__int64 **)(*a1 + 8 * v4);
    v10 = *v9;
    if ( *a2 )
    {
      v8 = *a2;
      if ( (*(__int64 (**)(void))(v10 + 32))() == v8 )
        break;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v10 + 48))(v9, a2[1]) )
    {
      break;
    }
    ++v4;
  }
  *a4 = v4;
  return 0LL;
}
