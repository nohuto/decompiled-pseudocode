/*
 * XREFs of ??$_Add@$$QEAV?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@PEA_K@Z @ 0x180141E04
 * Callers:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18029B65C (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::_Add<Microsoft::WRL::ComPtr<IAsyncCallback> &&>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v7; // rbx
  __int64 *v8; // r13
  __int64 v9; // rcx
  int v10; // r9d
  __int64 *v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r14
  char *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  LPMALLOC ppMalloc; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = (__int64 *)(a1 + 8);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 0;
  v11 = v8;
  if ( v9 == v7 )
  {
    v12 = v9 + 1;
    v10 = -2147024774;
    if ( v12 > 0xFFFFFFFE || (v10 = 0, v12 <= v7) )
    {
      if ( v10 < 0 )
        return (unsigned int)v10;
    }
    else
    {
      ppMalloc = 0LL;
      v13 = 2 * v7;
      if ( !is_mul_ok(v7, 2uLL) )
        return (unsigned int)-2147024362;
      v14 = v7;
      v15 = v7 + 4096;
      if ( v14 <= 0x1000 )
        v15 = v13;
      if ( v12 <= v15 )
      {
        if ( v15 > 0xFFFFFFFE )
          v15 = 4294967294LL;
      }
      else
      {
        v15 = v12;
      }
      ppMalloc = 0LL;
      v16 = 8 * v15;
      if ( !is_mul_ok(v15, 8uLL) )
        return (unsigned int)-2147024362;
      v18 = (char *)CoTaskMemRealloc(*(LPVOID *)a1, 8 * v15);
      if ( !v18 )
        return (unsigned int)-2147024882;
      ppMalloc = 0LL;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v3 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v18);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
      }
      if ( v3 > v16 )
        memset_0(&v18[v16], 0, v3 - v16);
      *(_QWORD *)(a1 + 24) = v15;
      v10 = 0;
      *(_QWORD *)a1 = v18;
    }
    v11 = (__int64 *)(a1 + 8);
  }
  v19 = *v8 + 1;
  v20 = *(_QWORD *)a1 - 8LL;
  *v11 = v19;
  v21 = (_QWORD *)(v20 + 8 * v19);
  if ( v21 )
  {
    *v21 = 0LL;
    if ( v21 != a2 )
    {
      *v21 = *a2;
      *a2 = 0LL;
    }
  }
  if ( a3 )
    *a3 = *v11 - 1;
  return (unsigned int)v10;
}
