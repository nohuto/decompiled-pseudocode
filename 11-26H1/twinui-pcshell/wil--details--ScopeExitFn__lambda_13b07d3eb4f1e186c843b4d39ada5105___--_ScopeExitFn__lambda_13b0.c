/*
 * XREFs of wil::details::ScopeExitFn__lambda_13b07d3eb4f1e186c843b4d39ada5105___::_ScopeExitFn__lambda_13b07d3eb4f1e186c843b4d39ada5105___ @ 0x180494584
 * Callers:
 *     _VirtualDesktopCollection::Initialize_::_1_::dtor$1 @ 0x1806EF87A (_VirtualDesktopCollection--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ?UninitializeInternal@VirtualDesktopCollection@@AEAAXAEAVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1804951BC (-UninitializeInternal@VirtualDesktopCollection@@AEAAXAEAVSyncLockExclusive@Details@Wrappers@WRL@.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_13b07d3eb4f1e186c843b4d39ada5105___::_ScopeExitFn__lambda_13b07d3eb4f1e186c843b4d39ada5105___(
        __int64 a1,
        struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *a2)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    VirtualDesktopCollection::UninitializeInternal(*(VirtualDesktopCollection **)a1, a2);
  }
}
