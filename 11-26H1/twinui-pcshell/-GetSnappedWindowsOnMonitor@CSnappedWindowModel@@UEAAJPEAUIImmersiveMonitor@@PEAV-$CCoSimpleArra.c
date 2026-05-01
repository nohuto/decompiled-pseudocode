/*
 * XREFs of ?GetSnappedWindowsOnMonitor@CSnappedWindowModel@@UEAAJPEAUIImmersiveMonitor@@PEAV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1801D35E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnappedWindowModel::GetSnappedWindowsOnMonitor(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rbp
  _QWORD *v7; // rax
  int v8; // esi
  void *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v5 = *(_QWORD **)(a1 + 40);
  v6 = &v5[*(_QWORD *)(a1 + 48)];
  while ( v5 != v6 )
  {
    v17 = 0;
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v5 + 64LL))(*v5, &v18);
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v7 + 96LL))(*v7, a2, &v17);
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v8 < 0 )
    {
      v12 = 84LL;
      goto LABEL_10;
    }
    if ( v17 )
    {
      v11 = a3[1];
      if ( v11 == a3[3] )
      {
        v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)a3,
               v11 + 1,
               v9);
        if ( v8 < 0 )
        {
          v12 = 87LL;
LABEL_10:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v12,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
            (const char *)(unsigned int)v8);
          return (unsigned int)v8;
        }
      }
      v14 = (_QWORD *)(*a3 + 8 * a3[1]++);
      if ( v14 )
      {
        v15 = *v5;
        *v14 = *v5;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    ++v5;
  }
  return 0LL;
}
