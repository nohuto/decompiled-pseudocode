/*
 * XREFs of ?AddRow@GridLayout@@QEAAJPEA_K@Z @ 0x1804D50D8
 * Callers:
 *     _lambda_d5328ea7ec057ef4b1874c63f76393bb_::operator() @ 0x1804D4EE0 (_lambda_d5328ea7ec057ef4b1874c63f76393bb_--operator().c)
 *     ?_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z @ 0x1804D596C (-_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800CA0DC (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 *     ??$_Add@$$QEAVGridRow@@@?$CTSimpleArray@VGridRow@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VGridRow@@@@V?$CSimpleArrayStandardCompareHelper@VGridRow@@@@V?$CSimpleArrayStandardMergeHelper@VGridRow@@@@@@QEAAJ$$QEAVGridRow@@PEA_K@Z @ 0x1804D4AA4 (--$_Add@$$QEAVGridRow@@@-$CTSimpleArray@VGridRow@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VGridRow@@@@V-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GridLayout::AddRow(GridLayout *this, unsigned __int64 *a2)
{
  unsigned int v2; // ebx
  _DWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+28h] [rbp-40h]
  _OWORD v6[3]; // [rsp+38h] [rbp-30h] BYREF

  v4[0] = *(_DWORD *)this;
  v4[1] = *((_DWORD *)this + 2);
  v5 = 0LL;
  memset(v6, 0, 32);
  v2 = CTSimpleArray<GridRow,4294967294,CTPolicyCoTaskMem<GridRow>,CSimpleArrayStandardCompareHelper<GridRow>,CSimpleArrayStandardMergeHelper<GridRow>>::_Add<GridRow &&>(
         (_QWORD *)this + 6,
         (__int64)v4,
         a2);
  CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)v6);
  return v2;
}
