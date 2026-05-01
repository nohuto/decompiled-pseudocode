/*
 * XREFs of ??$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEAV123@00@Z @ 0x18018CBF0
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18010F694 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x18010FC7C (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall std::_Move_unchecked<Windows::Internal::String *,Windows::Internal::String *>(
        HSTRING *a1,
        HSTRING *a2,
        HSTRING *a3)
{
  HSTRING *i; // rdi

  for ( i = a1; i != a2; ++i )
  {
    if ( *a3 )
    {
      WindowsDeleteString(*a3);
      *a3 = 0LL;
    }
    *a3++ = *i;
    *i = 0LL;
  }
  return a3;
}
