/*
 * XREFs of ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run @ 0x1804B3EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEBAXXZ @ 0x1804B355C (-InternalAddRef@-$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B3580 (-InternalRelease@-$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x1804B4968 (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run(
        __int64 a1,
        volatile int *a2)
{
  SwitchItemFilteredCollection *v2; // r9
  __int64 v3; // r10
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::InternalAddRef(&v5, a2);
  if ( v2 )
    SwitchItemFilteredCollection::_ApplyFilterToItem(v2, *(struct IObservableItem **)(v3 + 24), 0);
  return Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::InternalRelease(&v5);
}
