/*
 * XREFs of ?DestroyTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@@Z @ 0x1800CC938
 * Callers:
 *     ?RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800CB680 (-RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800CB6E4 (--1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     CreationThreadDispatcher::RunSyncWithNoMessagePumping__lambda_1ffeb2ec45e68daa8c54666c73698e49___ @ 0x1800CC9C0 (CreationThreadDispatcher--RunSyncWithNoMessagePumping__lambda_1ffeb2ec45e68daa8c54666c73698e49__.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::DestroyTabProxyWindow(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  DWORD v5; // eax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 56LL))(v4, *a2);
  v5 = WaitForSingleObjectEx(*(HANDLE *)(a1 + 32), 0xFFFFFFFF, 0);
  if ( v5 != 258 && v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAE9,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v6);
  v9 = a2;
  return CreationThreadDispatcher::RunSyncWithNoMessagePumping__lambda_1ffeb2ec45e68daa8c54666c73698e49___(
           *(_QWORD *)(a1 + 48),
           &v9);
}
