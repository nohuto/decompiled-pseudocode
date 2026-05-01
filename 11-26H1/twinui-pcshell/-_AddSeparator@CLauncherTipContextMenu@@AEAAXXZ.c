/*
 * XREFs of ?_AddSeparator@CLauncherTipContextMenu@@AEAAXXZ @ 0x180603AA8
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1800AB350 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$CreateRefCountedObj@ULauncherTipMenuCommand@CLauncherTipContextMenu@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@XZ @ 0x18018A9DC (--$CreateRefCountedObj@ULauncherTipMenuCommand@CLauncherTipContextMenu@@$$V@@YA-AV-$ComPtr@V-$CR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CLauncherTipContextMenu::_AddSeparator(CLauncherTipContextMenu *this)
{
  void *v2; // r8
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  CreateRefCountedObj<CLauncherTipContextMenu::LauncherTipMenuCommand,>(&v7);
  v3 = v7;
  if ( v7 )
  {
    *(_BYTE *)(v7 + 8) = 1;
    v4 = (_QWORD *)((char *)this + 176);
    v5 = v4[1];
    if ( v5 != v4[3]
      || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)v4,
                v5 + 1,
                v2) >= 0 )
    {
      v6 = (__int64 *)(*v4 + 8 * v4[1]++);
      if ( v6 )
      {
        *v6 = v3;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6);
      }
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
