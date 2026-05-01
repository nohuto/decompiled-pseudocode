/*
 * XREFs of ??$_Add@AEBV?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@PEA_K@Z @ 0x18008C928
 * Callers:
 *     ??$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Details@WRL@Microsoft@@YAJPEAPEAUIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Z @ 0x18008BFBC (--$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV-$CCoSimpleArray@V-$ComPtr@UIGITCook.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x18008CD48 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IGITCookieObject>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>>::_Add<Microsoft::WRL::ComPtr<IGITCookieObject> const &>(
        __int64 a1,
        __int64 *a2,
        void *a3)
{
  __int64 *v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 *v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 *v18; // rdx
  __int64 v19; // rcx
  void *v20; // [rsp+60h] [rbp+18h] BYREF

  v20 = a3;
  v4 = (__int64 *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v8 = v4;
  v9 = *(_QWORD *)(a1 + 24);
  if ( v5 == v9 )
  {
    v10 = v5 + 1;
    v11 = -2147024774;
    if ( v10 > 0xFFFFFFFE )
      goto LABEL_21;
    v11 = 0;
    if ( v10 <= v9 )
      goto LABEL_21;
    v20 = 0LL;
    v12 = 2 * v9;
    if ( !is_mul_ok(v9, 2uLL) )
      return (unsigned int)-2147024362;
    v13 = v9;
    v14 = v9 + 4096;
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
    v20 = 0LL;
    if ( !is_mul_ok(v14, 8uLL) )
      return (unsigned int)-2147024362;
    v11 = CTCoAllocPolicy::Realloc(&v20, (v14 * (unsigned __int128)8uLL) >> 64, *(void **)a1, 8 * v14, &v20);
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
      *(_QWORD *)a1 = v20;
      *(_QWORD *)(a1 + 24) = v14;
    }
    v8 = (__int64 *)(a1 + 8);
  }
  v16 = *v4 + 1;
  v17 = *(_QWORD *)a1 - 8LL;
  *v8 = v16;
  v18 = (__int64 *)(v17 + 8 * v16);
  if ( v18 )
  {
    v19 = *a2;
    *v18 = *a2;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  }
  return v6;
}
