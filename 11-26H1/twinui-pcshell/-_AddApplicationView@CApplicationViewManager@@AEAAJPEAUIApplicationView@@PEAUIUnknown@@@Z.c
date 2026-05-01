/*
 * XREFs of ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18008799C
 * Callers:
 *     ?AddApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180089250 (-AddApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x1800893D0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800444D0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180087E6C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::_AddApplicationView(
        CApplicationViewManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  _QWORD *v6; // rdi
  int v7; // esi
  __int64 v8; // rdx
  struct IApplicationView *v9; // rcx
  struct IApplicationView **v10; // rax
  struct IApplicationView *v12; // [rsp+20h] [rbp-18h] BYREF

  v6 = (_QWORD *)((char *)this + 536);
  v12 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = 0;
  v8 = v6[1];
  if ( v8 == v6[3] )
    v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::_EnsureCapacity(
           v6,
           v8 + 1);
  v9 = a2;
  if ( v7 >= 0 )
  {
    ++v6[1];
    v10 = (struct IApplicationView **)(*v6 - 8LL + 8LL * v6[1]);
    v9 = a2;
    if ( v10 )
    {
      *v10 = 0LL;
      if ( v10 != &v12 )
      {
        *v10 = a2;
        v9 = 0LL;
      }
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v7 >= 0 )
    CApplicationViewManager::RaiseApplicationViewChanged(
      (__int64)this + 136,
      (void (__fastcall ***)(_QWORD, GUID *, __int64 **))a2,
      0,
      (__int64)a3);
  return (unsigned int)v7;
}
