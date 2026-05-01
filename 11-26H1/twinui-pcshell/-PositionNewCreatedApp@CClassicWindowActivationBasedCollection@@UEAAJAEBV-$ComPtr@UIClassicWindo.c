/*
 * XREFs of ?PositionNewCreatedApp@CClassicWindowActivationBasedCollection@@UEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Z @ 0x180159210
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180088B04 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowActivationBasedCollection::PositionNewCreatedApp(_QWORD *a1, __int64 *a2, void *a3)
{
  _QWORD *v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rcx

  v4 = a1 + 1;
  v5 = 0;
  v6 = a1[2];
  if ( v6 != a1[4]
    || (v5 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
               (__int64)(a1 + 1),
               v6 + 1,
               a3),
        v5 >= 0) )
  {
    v7 = (__int64 *)(*v4 + 8 * v4[1]++);
    if ( v7 )
    {
      v8 = *a2;
      *v7 = *a2;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return (unsigned int)v5;
}
