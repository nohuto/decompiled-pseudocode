/*
 * XREFs of ??$_Emplace_back_internal@AEBI@?$deque@IV?$allocator@I@std@@@std@@AEAAXAEBI@Z @ 0x180297BD0
 * Callers:
 *     ?OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805F7BC0 (-OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?allocate@?$allocator@I@std@@QEAAPEAI_K@Z @ 0x1801A7FAC (-allocate@-$allocator@I@std@@QEAAPEAI_K@Z.c)
 *     ?_Growmap@?$deque@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x1805F88C0 (-_Growmap@-$deque@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<unsigned int>::_Emplace_back_internal<unsigned int const &>(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 32);
  if ( ((*(_BYTE *)(a1 + 24) + (_BYTE)v4) & 3) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(v4 + 4) >> 2 )
    std::deque<unsigned int>::_Growmap(a1);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) &= 4 * v5 - 1;
  v6 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24);
  v7 = (v6 >> 2) & (v5 - 1);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) )
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = std::allocator<unsigned int>::allocate(v4, 4uLL);
  result = *a2;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) + 4 * (v6 & 3)) = result;
  ++*(_QWORD *)(a1 + 32);
  return result;
}
