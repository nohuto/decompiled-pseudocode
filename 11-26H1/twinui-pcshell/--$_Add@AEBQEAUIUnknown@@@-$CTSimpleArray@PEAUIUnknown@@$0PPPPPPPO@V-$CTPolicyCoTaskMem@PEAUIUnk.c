/*
 * XREFs of ??$_Add@AEBQEAUIUnknown@@@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJAEBQEAUIUnknown@@PEA_K@Z @ 0x1800872E0
 * Callers:
 *     ?InitializeClone@CEnumerableObjectCollection@@IEAAJPEAV1@@Z @ 0x1802E2A58 (-InitializeClone@CEnumerableObjectCollection@@IEAAJPEAV1@@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800875E8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::_Add<IUnknown * const &>(
        __int64 a1,
        _QWORD *a2,
        void *a3)
{
  unsigned __int64 v3; // rbx
  __int64 *v4; // rsi
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 *v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r9
  _QWORD *v17; // r9
  void *v19; // [rsp+60h] [rbp+18h] BYREF

  v19 = a3;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = (__int64 *)(a1 + 8);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 8);
  v9 = v4;
  if ( v7 == v3 )
  {
    v10 = v7 + 1;
    v11 = -2147024774;
    if ( v10 > 0xFFFFFFFE )
      goto LABEL_19;
    v11 = 0;
    if ( v10 <= v3 )
      goto LABEL_19;
    v19 = 0LL;
    v12 = 2 * v3;
    if ( !is_mul_ok(v3, 2uLL) )
      return (unsigned int)-2147024362;
    v13 = v3;
    v14 = v3 + 4096;
    if ( v13 <= 0x1000 )
      v14 = v12;
    if ( v10 > v14 )
    {
      v14 = v10;
    }
    else if ( v14 > 0xFFFFFFFE )
    {
      v14 = 4294967294LL;
    }
    v19 = 0LL;
    if ( !is_mul_ok(v14, 8uLL) )
      return (unsigned int)-2147024362;
    v11 = CTCoAllocPolicy::Realloc(&v19, (v14 * (unsigned __int128)8uLL) >> 64, *(void **)a1, 8 * v14, &v19);
    v6 = v11;
    if ( v11 < 0 )
    {
LABEL_19:
      v6 = v11;
      if ( v11 < 0 )
        return v6;
    }
    else
    {
      *(_QWORD *)a1 = v19;
      *(_QWORD *)(a1 + 24) = v14;
    }
    v9 = (__int64 *)(a1 + 8);
  }
  v15 = *v4 + 1;
  v16 = *(_QWORD *)a1 - 8LL;
  *v9 = v15;
  v17 = (_QWORD *)(v16 + 8 * v15);
  if ( v17 )
    *v17 = *a2;
  return v6;
}
