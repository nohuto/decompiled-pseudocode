/*
 * XREFs of ?front@?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEA_KXZ @ 0x18057FC48
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18002BA30 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::deque<unsigned __int64>::front(_QWORD *a1)
{
  return *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] >> 1))) + 8 * (a1[3] & 1LL);
}
