/*
 * XREFs of ??1?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800BD84C
 * Callers:
 *     ??1CSnapAssistControllerBase@@QEAA@XZ @ 0x180582CFC (--1CSnapAssistControllerBase@@QEAA@XZ.c)
 *     ??1?$queue@IV?$deque@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x1805F5820 (--1-$queue@IV-$deque@IV-$allocator@I@std@@@std@@@std@@QEAA@XZ.c)
 *     ??1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805F58B8 (--1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _CSnappedWindowModel::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1806AA949 (_CSnappedWindowModel--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?_Tidy@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800BCBD4 (-_Tidy@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<tagRECT>::~deque<tagRECT>(void **a1)
{
  void *v2; // rcx

  std::deque<tagRECT>::_Tidy(a1);
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x10);
}
