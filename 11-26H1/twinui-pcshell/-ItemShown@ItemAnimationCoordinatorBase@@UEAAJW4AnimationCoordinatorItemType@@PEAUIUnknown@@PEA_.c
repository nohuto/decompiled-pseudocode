/*
 * XREFs of ?ItemShown@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x1804DFE10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K0@Z @ 0x1804E0444 (-_EnsureCapacity@-$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V-$CTP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ItemAnimationCoordinatorBase::ItemShown(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        _BYTE *a4)
{
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  __int128 v16; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v18; // [rsp+70h] [rbp+20h] BYREF

  *a4 = 1;
  if ( !*(_BYTE *)(a1 + 232) || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
    return 0LL;
  v18 = 0LL;
  v7 = **a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  v8 = v7(a3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861, &v18);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = v18;
    v15 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
    v16 = 0LL;
    v11 = 0;
    v12 = *(_QWORD *)(a1 + 96);
    if ( v12 != *(_QWORD *)(a1 + 112)
      || (v11 = CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::_EnsureCapacity(
                  a1 + 88,
                  v12 + 1),
          v11 >= 0) )
    {
      ++*(_QWORD *)(a1 + 96);
      v13 = 32LL * *(_QWORD *)(a1 + 96) + *(_QWORD *)(a1 + 88) - 32LL;
      if ( v13 )
      {
        *(_DWORD *)v13 = a2;
        *(_QWORD *)(v13 + 8) = 0LL;
        if ( (__int64 *)(v13 + 8) != &v15 )
        {
          *(_QWORD *)(v13 + 8) = v10;
          v15 = 0LL;
        }
        *(_OWORD *)(v13 + 16) = 0LL;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    if ( v11 >= 0 )
    {
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
        (const char *)(unsigned int)v11);
      v9 = v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  return v9;
}
