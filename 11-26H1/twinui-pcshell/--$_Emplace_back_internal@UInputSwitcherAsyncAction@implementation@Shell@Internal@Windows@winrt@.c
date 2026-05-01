/*
 * XREFs of ??$_Emplace_back_internal@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX$$QEAUInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x180638720
 * Callers:
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x18063982C (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801EABB8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Address_subscript@?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@QEAAPEAUtagPRESENTFRAME@@_K@Z @ 0x180357948 (-_Address_subscript@-$_Deque_val@U-$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@QEAAPEAUta.c)
 *     ?_Getblock@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEBA_J_K@Z @ 0x18035838C (-_Getblock@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@AEBA_J_K@Z.c)
 *     ?_Growmap@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18063A02C (-_Growmap@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allo.c)
 */

char __fastcall std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::_Emplace_back_internal<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int64 size_of; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char result; // al

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::_Growmap();
  a1[3] &= a1[2] - 1LL;
  v4 = a1[4] + a1[3];
  v5 = std::deque<tagPRESENTFRAME>::_Getblock((__int64)a1, v4);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
  {
    size_of = std::_Get_size_of_n<40>(1uLL);
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  }
  v7 = std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>::_Address_subscript((__int64)a1, v4);
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
