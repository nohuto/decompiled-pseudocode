/*
 * XREFs of ??4?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18057D968
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18002BA30 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ?_Tidy@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800CB854 (-_Tidy@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 */

_QWORD *__fastcall std::deque<unsigned __int64>::operator=(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rcx

  if ( a1 != a2 )
  {
    std::deque<tagRECT>::_Tidy(a1);
    v4 = (_QWORD *)*a1;
    *a1 = *a2;
    *a2 = v4;
    if ( *a1 )
      *(_QWORD *)*a1 = a1;
    if ( *a2 )
      *(_QWORD *)*a2 = a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    a1[3] = a2[3];
    a1[4] = a2[4];
    a2[1] = 0LL;
    a2[2] = 0LL;
    a2[3] = 0LL;
    a2[4] = 0LL;
  }
  return a1;
}
