/*
 * XREFs of _lambda_d5328ea7ec057ef4b1874c63f76393bb_::operator() @ 0x1804D4EE0
 * Callers:
 *     GridLayoutFactory::_ForEachGridItem__lambda_d5328ea7ec057ef4b1874c63f76393bb___ @ 0x1804D4C98 (GridLayoutFactory--_ForEachGridItem__lambda_d5328ea7ec057ef4b1874c63f76393bb___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?AddRow@GridLayout@@QEAAJPEA_K@Z @ 0x1804D50D8 (-AddRow@GridLayout@@QEAAJPEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d5328ea7ec057ef4b1874c63f76393bb_::operator()(__int64 a1, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdi
  __int64 v10; // rbx
  void *v11; // r8
  _QWORD *v12; // rdi
  int v13; // ebx
  __int64 v14; // rdx
  __int64 *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, *(unsigned int *)(*(_QWORD *)a1 + 4LL));
  v5 = **(_DWORD **)(a1 + 8);
  if ( v5 )
  {
    v4 += *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL);
    if ( v4 + v5 > **(_DWORD **)a1 )
    {
      v6 = GridLayout::AddRow(*(GridLayout **)(a1 + 24), *(unsigned __int64 **)(a1 + 32));
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A1,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
          (const char *)(unsigned int)v6);
        return v7;
      }
      **(_DWORD **)(a1 + 8) = 0;
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 72LL))(
             a2,
             *(unsigned int *)(*(_QWORD *)a1 + 4LL));
    }
  }
  **(_DWORD **)(a1 + 8) += v4;
  v9 = 56LL * **(_QWORD **)(a1 + 32);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v17 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  v12 = (_QWORD *)(v10 + v9);
  v13 = 0;
  v14 = v12[4];
  if ( v14 != v12[6]
    || (v13 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)(v12 + 3),
                v14 + 1,
                v11),
        v13 >= 0) )
  {
    ++v12[4];
    v15 = (__int64 *)(v12[3] + 8LL * v12[4] - 8);
    if ( v12[3] + 8LL * v12[4] != 8 )
    {
      *v15 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AB,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
      (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
