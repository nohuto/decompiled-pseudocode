/*
 * XREFs of ??$_Emplace_back_internal@AEBI@?$deque@IV?$allocator@I@std@@@std@@AEAAXAEBI@Z @ 0x18028F224
 * Callers:
 *     ?OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18061BD40 (-OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Getblock@?$deque@IV?$allocator@I@std@@@std@@AEBA_J_K@Z @ 0x18028F2D8 (-_Getblock@-$deque@IV-$allocator@I@std@@@std@@AEBA_J_K@Z.c)
 *     ?_Address_subscript@?$_Deque_val@U?$_Deque_simple_types@I@std@@@std@@QEAAPEAI_K@Z @ 0x18028F2F0 (-_Address_subscript@-$_Deque_val@U-$_Deque_simple_types@I@std@@@std@@QEAAPEAI_K@Z.c)
 *     ?_Growmap@?$deque@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x18061C8D0 (-_Growmap@-$deque@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 */

_DWORD *__fastcall std::deque<unsigned int>::_Emplace_back_internal<unsigned int const &>(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  _DWORD *result; // rax

  v4 = *(_QWORD *)(a1 + 32);
  if ( ((*(_BYTE *)(a1 + 24) + (_BYTE)v4) & 3) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(v4 + 4) >> 2 )
    std::deque<unsigned int>::_Growmap(a1);
  *(_QWORD *)(a1 + 24) &= 4LL * *(_QWORD *)(a1 + 16) - 1;
  v5 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24);
  v6 = std::deque<unsigned int>::_Getblock(a1, v5);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6) )
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6) = std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL);
  result = (_DWORD *)std::_Deque_val<std::_Deque_simple_types<unsigned int>>::_Address_subscript(a1, v5);
  *result = *a2;
  ++*(_QWORD *)(a1 + 32);
  return result;
}
