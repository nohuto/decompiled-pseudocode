/*
 * XREFs of ?OnSettingChange@CLauncherTipContextMenu@@UEAAJXZ @ 0x180602B90
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800C9D94 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLaunc.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800CA0DC (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 *     ?Release@?$CTSmartObj@PEAUHMENU__@@V?$CAutoHandle_Policy@PEAUHMENU__@@@@@@QEAAXXZ @ 0x1804D3810 (-Release@-$CTSmartObj@PEAUHMENU__@@V-$CAutoHandle_Policy@PEAUHMENU__@@@@@@QEAAXXZ.c)
 */

__int64 __fastcall CLauncherTipContextMenu::OnSettingChange(CLauncherTipContextMenu *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  HMENU v4; // [rsp+30h] [rbp+8h] BYREF
  HMENU v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  v5 = 0LL;
  v4 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  if ( !*((_BYTE *)this + 225) && *((_BYTE *)this + 224) )
  {
    *((_BYTE *)this + 224) = 0;
    CTSmartObj<HMENU__ *,CAutoHandle_Policy<HMENU__ *>>::Release(&v5);
    v5 = (HMENU)*((_QWORD *)this + 29);
    CTSmartObj<HMENU__ *,CAutoHandle_Policy<HMENU__ *>>::Release(&v4);
    v4 = (HMENU)*((_QWORD *)this + 30);
    *((_QWORD *)this + 29) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
    CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)this + 80);
    CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipShutdownMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipShutdownMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipShutdownMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipShutdownMenuCommand>>>>::RemoveAll((__int64)this + 112);
  }
  LeaveCriticalSection(v1);
  CTSmartObj<HMENU__ *,CAutoHandle_Policy<HMENU__ *>>::Release(&v4);
  CTSmartObj<HMENU__ *,CAutoHandle_Policy<HMENU__ *>>::Release(&v5);
  return 0LL;
}
