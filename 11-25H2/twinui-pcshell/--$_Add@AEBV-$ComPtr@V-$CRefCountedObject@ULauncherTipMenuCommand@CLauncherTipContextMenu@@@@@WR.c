/*
 * XREFs of ??$_Add@AEBV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@PEA_K@Z @ 0x1802135E8
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x18019913C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C860 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>> const &>(
        _QWORD *a1,
        __int64 *a2,
        void *a3)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 *v8; // rcx

  v4 = 0;
  v5 = a1[1];
  if ( v5 != a1[3]
    || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)a1,
               v5 + 1,
               a3),
        v4 >= 0) )
  {
    ++a1[1];
    v8 = (__int64 *)(*a1 + 8LL * a1[1] - 8);
    if ( *a1 + 8LL * a1[1] != 8 )
    {
      *v8 = *a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
    }
  }
  return (unsigned int)v4;
}
