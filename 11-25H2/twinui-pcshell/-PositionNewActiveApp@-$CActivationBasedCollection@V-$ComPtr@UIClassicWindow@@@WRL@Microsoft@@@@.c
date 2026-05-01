/*
 * XREFs of ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x180023068
 * Callers:
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@@Z @ 0x180287234 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V-$optional@UHandleActivationHints@CC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008D7BC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPoli.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // ebp
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rcx

  v5 = 0;
  if ( a3 )
  {
    v6 = (_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(a1 + 16);
    if ( a3 < v7 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*v6 + 8 * a3));
      v8 = v6[1];
      if ( a3 != v8 - 1 )
        memmove_0((void *)(*v6 + 8 * a3), (const void *)(*v6 + 8 * a3 + 8), 8 * (v8 - a3) - 8);
      v7 = --v6[1];
    }
    v9 = 0;
    v10 = 1LL;
    if ( v7 )
      v10 = v7 + 1;
    if ( v10 <= v6[3]
      || (v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IClassicWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::_EnsureCapacity(
                 v6,
                 v10),
          v9 >= 0) )
    {
      v11 = v6[1];
      if ( v11 )
        memmove_0((void *)(*v6 + 8LL), (const void *)*v6, 8 * v11);
      v6[1] = v10;
    }
    if ( v9 >= 0 )
    {
      if ( *v6 )
      {
        v12 = *a2;
        *(_QWORD *)*v6 = *a2;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    return (unsigned int)v9;
  }
  return v5;
}
