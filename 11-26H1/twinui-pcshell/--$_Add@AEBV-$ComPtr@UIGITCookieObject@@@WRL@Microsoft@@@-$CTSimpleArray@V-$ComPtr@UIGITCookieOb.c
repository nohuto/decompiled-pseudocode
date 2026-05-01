/*
 * XREFs of ??$_Add@AEBV?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@PEA_K@Z @ 0x1800871AC
 * Callers:
 *     ??$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Details@WRL@Microsoft@@YAJPEAPEAUIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Z @ 0x1800868B8 (--$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV-$CCoSimpleArray@V-$ComPtr@UIGITCook.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800875E8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IGITCookieObject>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>>::_Add<Microsoft::WRL::ComPtr<IGITCookieObject> const &>(
        __int64 a1,
        __int64 *a2,
        void *a3)
{
  unsigned __int64 v3; // rdi
  __int64 *v4; // r14
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 *v9; // rdx
  unsigned __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v16; // rcx
  __int64 *v17; // rdx
  __int64 v18; // rcx
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
      goto LABEL_21;
    v11 = 0;
    if ( v10 <= v3 )
      goto LABEL_21;
    v19 = 0LL;
    v12 = 2 * v3;
    if ( !is_mul_ok(v3, 2uLL) )
      return (unsigned int)-2147024362;
    v13 = v3;
    v14 = v3 + 4096;
    if ( v13 <= 0x1000 )
      v14 = v12;
    if ( v10 <= v14 )
    {
      if ( v14 > 0xFFFFFFFE )
        v14 = 4294967294LL;
    }
    else
    {
      v14 = v10;
    }
    v19 = 0LL;
    if ( !is_mul_ok(v14, 8uLL) )
      return (unsigned int)-2147024362;
    v11 = CTCoAllocPolicy::Realloc(&v19, (v14 * (unsigned __int128)8uLL) >> 64, *(void **)a1, 8 * v14, &v19);
    v6 = v11;
    if ( v11 < 0 )
    {
LABEL_21:
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
  v16 = *v4 + 1;
  *v9 = v16;
  v17 = (__int64 *)(*(_QWORD *)a1 - 8LL + 8 * v16);
  if ( v17 )
  {
    v18 = *a2;
    *v17 = *a2;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  }
  return v6;
}
