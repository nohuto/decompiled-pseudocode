/*
 * XREFs of ??$_Add@$$QEAV?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@PEA_K@Z @ 0x180134238
 * Callers:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180292E7C (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::_Add<Microsoft::WRL::ComPtr<IAsyncCallback> &&>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rbx
  __int64 *v7; // r13
  __int64 v8; // rcx
  int v9; // r9d
  __int64 *v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r14
  char *v17; // rbp
  unsigned __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  LPMALLOC ppMalloc; // [rsp+50h] [rbp+8h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = (__int64 *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  v10 = v7;
  if ( v8 == v6 )
  {
    v11 = v8 + 1;
    v9 = -2147024774;
    if ( v11 > 0xFFFFFFFE || (v9 = 0, v11 <= v6) )
    {
      if ( v9 < 0 )
        return (unsigned int)v9;
    }
    else
    {
      ppMalloc = 0LL;
      v12 = 2 * v6;
      if ( !is_mul_ok(v6, 2uLL) )
        return (unsigned int)-2147024362;
      v13 = v6;
      v14 = v6 + 4096;
      if ( v13 <= 0x1000 )
        v14 = v12;
      if ( v11 <= v14 )
      {
        if ( v14 > 0xFFFFFFFE )
          v14 = 4294967294LL;
      }
      else
      {
        v14 = v11;
      }
      ppMalloc = 0LL;
      v15 = 8 * v14;
      if ( !is_mul_ok(v14, 8uLL) )
        return (unsigned int)-2147024362;
      v17 = (char *)CoTaskMemRealloc(*(LPVOID *)a1, 8 * v14);
      if ( !v17 )
        return (unsigned int)-2147024882;
      ppMalloc = 0LL;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v18 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v17);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
        if ( v18 > v15 )
          memset_0(&v17[v15], 0, v18 - v15);
      }
      v9 = 0;
      *(_QWORD *)(a1 + 24) = v14;
      *(_QWORD *)a1 = v17;
    }
    v10 = (__int64 *)(a1 + 8);
  }
  v19 = *v7 + 1;
  v20 = *(_QWORD *)a1 - 8LL;
  *v10 = v19;
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
    *a3 = *v10 - 1;
  return (unsigned int)v9;
}
