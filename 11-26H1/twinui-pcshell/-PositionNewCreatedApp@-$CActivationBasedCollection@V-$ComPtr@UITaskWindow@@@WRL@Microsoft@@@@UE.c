/*
 * XREFs of ?PositionNewCreatedApp@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@Z @ 0x1802EE990
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180086F00 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 */

__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::PositionNewCreatedApp(
        _QWORD *a1,
        __int64 *a2,
        void *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rdx
  int v6; // edi
  __int64 *v7; // rcx

  v3 = a1 + 1;
  v5 = a1[2];
  v6 = 0;
  if ( v5 != a1[4]
    || (v6 = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
               (__int64)(a1 + 1),
               v5 + 1,
               a3),
        v6 >= 0) )
  {
    ++v3[1];
    v7 = (__int64 *)(*v3 + 8LL * v3[1] - 8);
    if ( *v3 + 8LL * v3[1] != 8 )
    {
      *v7 = *a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
    }
  }
  return (unsigned int)v6;
}
