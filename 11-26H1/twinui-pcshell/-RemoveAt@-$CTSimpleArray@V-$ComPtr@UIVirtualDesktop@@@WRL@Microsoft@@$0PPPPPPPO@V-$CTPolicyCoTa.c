/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18018F710
 * Callers:
 *     ?MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z @ 0x18054EBA0 (-MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z.c)
 *     ?Remove@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K@Z @ 0x18054EEA0 (-Remove@-$CTSimpleArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTask.c)
 * Callees:
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::RemoveAt(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8

  if ( a2 >= a1[1] )
    return 2147650721LL;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8 * a2);
  if ( v6 )
  {
    *(_QWORD *)(v5 + 8 * a2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = a1[1];
  if ( a2 != v7 - 1 )
    memmove_0((void *)(*a1 + 8 * a2), (const void *)(*a1 + 8 * a2 + 8), 8 * (v7 - a2) - 8);
  --a1[1];
  return 0LL;
}
