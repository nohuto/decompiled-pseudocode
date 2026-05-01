/*
 * XREFs of ?Shutdown@NotificationDispatcher@@QEAAXXZ @ 0x180173AE0
 * Callers:
 *     ?UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801356A0 (-UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x180173A80 (-Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800A51F4 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 */

void __fastcall NotificationDispatcher::Shutdown(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  HWND Ptr; // rsi
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  Ptr = (HWND)this[5].Ptr;
  this[5].Ptr = 0LL;
  v4[0] = this[6].Ptr;
  v4[2] = this[8].Ptr;
  v4[1] = this[7].Ptr;
  v4[3] = this[9].Ptr;
  this[6].Ptr = 0LL;
  this[8].Ptr = 0LL;
  this[7].Ptr = 0LL;
  this[9].Ptr = 0LL;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  DestroyWindow(Ptr);
  CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)v4);
}
