/*
 * XREFs of ?InitializeClone@CEnumerableObjectCollection@@IEAAJPEAV1@@Z @ 0x1802E2A58
 * Callers:
 *     ?Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802DEBD8 (-Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$_Add@AEBQEAUIUnknown@@@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJAEBQEAUIUnknown@@PEA_K@Z @ 0x1800872E0 (--$_Add@AEBQEAUIUnknown@@@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnk.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEnumerableObjectCollection::InitializeClone(
        CEnumerableObjectCollection *this,
        struct CEnumerableObjectCollection *a2,
        void *a3)
{
  __int64 v3; // rdi
  int v5; // eax
  int v7; // ebx
  void *v8; // r8
  __int64 v9; // r14
  __int64 i; // rdi
  __int64 v11; // rsi
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((int *)this + 12);
  v5 = *((_DWORD *)this + 7);
  if ( v5 <= (int)v3 )
    v5 = *((_DWORD *)this + 12);
  v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
         (__int64)a2 + 40,
         v5,
         a3);
  if ( v7 >= 0 )
  {
    v9 = v3;
    for ( i = 0LL; i < v9; ++i )
    {
      v11 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
      v13 = v11;
      if ( !v11 )
        return (unsigned int)-2147418113;
      v7 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::_Add<IUnknown * const &>(
             (__int64)a2 + 40,
             &v13,
             v8);
      if ( v7 < 0 )
        return (unsigned int)v7;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
      *((_DWORD *)a2 + 8) = *((_DWORD *)this + 8);
    }
  }
  return (unsigned int)v7;
}
