/*
 * XREFs of ??$_Emplace_front_internal@AEBUguid@winrt@@@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAXAEBUguid@winrt@@@Z @ 0x18012ACDC
 * Callers:
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x180064048 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ?AddTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@@Z @ 0x18012AC58 (-AddTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18012B6A0 (-_Growmap@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<winrt::guid>::_Emplace_front_internal<winrt::guid const &>(_QWORD *a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<winrt::guid>::_Growmap();
  v4 = a1[2];
  v5 = a1[3] & (v4 - 1);
  a1[3] = v5;
  if ( !v5 )
    v5 = v4;
  v6 = v5 - 1;
  v7 = v6 & (v4 - 1);
  if ( !*(_QWORD *)(a1[1] + 8 * v7) )
    *(_QWORD *)(a1[1] + 8 * v7) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  result = a1[1];
  *(_OWORD *)*(_QWORD *)(result + 8 * v7) = *a2;
  a1[3] = v6;
  ++a1[4];
  return result;
}
