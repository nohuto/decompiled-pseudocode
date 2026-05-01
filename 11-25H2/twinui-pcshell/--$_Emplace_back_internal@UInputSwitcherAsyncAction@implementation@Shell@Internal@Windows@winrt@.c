/*
 * XREFs of ??$_Emplace_back_internal@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX$$QEAUInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x180612948
 * Callers:
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x180613A18 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801F48C4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Growmap@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18061422C (-_Growmap@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allo.c)
 */

char __fastcall std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::_Emplace_back_internal<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  size_t size_of; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  char result; // al

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::_Growmap();
  v4 = a1[2] - 1LL;
  a1[3] &= v4;
  v5 = v4 & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
  {
    size_of = std::_Get_size_of_n<40>(1uLL);
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  }
  v7 = *(_QWORD *)(a1[1] + 8 * v5);
  *(_DWORD *)v7 = *(_DWORD *)a2;
  *(_QWORD *)(v7 + 8) = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(v7 + 16) = v8;
  v9 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(v7 + 24) = v9;
  *(_DWORD *)(v7 + 32) = *(_DWORD *)(a2 + 32);
  *(_BYTE *)(v7 + 36) = *(_BYTE *)(a2 + 36);
  result = *(_BYTE *)(a2 + 37);
  *(_BYTE *)(v7 + 37) = result;
  ++a1[4];
  return result;
}
