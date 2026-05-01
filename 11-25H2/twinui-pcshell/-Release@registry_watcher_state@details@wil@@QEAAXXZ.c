/*
 * XREFs of ?Release@registry_watcher_state@details@wil@@QEAAXXZ @ 0x1800BFB48
 * Callers:
 *     ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A6E10 (-unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1800BFAE0 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800C1B0C (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1800C2600 (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 *     ?RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800C2D50 (-RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180298354 (-RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18029A45C (--1-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1-.c)
 *     ?RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1802A39AC (-RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ.c)
 * Callees:
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800C4004 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 */

void __fastcall wil::details::registry_watcher_state::Release(wil::details::registry_watcher_state *this)
{
  RTL_SRWLOCK *v1; // rbx
  unsigned int v3; // edx
  DWORD LastError; // edi

  v1 = (RTL_SRWLOCK *)((char *)this + 152);
  AcquireSRWLockExclusive((PSRWLOCK)this + 19);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 37, 0xFFFFFFFF) == 1 )
  {
    if ( v1 )
    {
      LastError = GetLastError();
      ReleaseSRWLockExclusive(v1);
      SetLastError(LastError);
    }
    if ( this )
      wil::details::registry_watcher_state::`scalar deleting destructor'(this, v3);
  }
  else if ( v1 )
  {
    ReleaseSRWLockExclusive(v1);
  }
}
