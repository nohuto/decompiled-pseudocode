/*
 * XREFs of _lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_::operator() @ 0x1802EC2C0
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_ee517389c6e8518757eb9a59c851a0bc___ @ 0x1802EBEA8 (CClassicWindowManager--ForEachWindow__lambda_ee517389c6e8518757eb9a59c851a0bc___.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_::operator()(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  void *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // eax
  __int64 *v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2) )
  {
    v4 = *a2;
    if ( *a2 != *(_QWORD *)(a1 + 8) )
    {
      v5 = *(_QWORD **)(a1 + 16);
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
      v8 = v5[1];
      v9 = v6;
      if ( v8 == v5[3]
        && (v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)v5,
                    v8 + 1,
                    v7),
            v10 < 0) )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA47,
          (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
          (const char *)(unsigned int)v10);
      }
      else
      {
        v11 = (__int64 *)(*v5 + 8 * v5[1]++);
        if ( v11 )
          *v11 = v9;
      }
    }
  }
  return 1;
}
