/*
 * XREFs of ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x180408718
 * Callers:
 *     ?Clear@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18040D3C0 (-Clear@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDispla.c)
 *     ?InsertAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@_N@Z @ 0x18040FA40 (-InsertAtInternal@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windo.c)
 *     ?RemoveAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x1804125D0 (-RemoveAtInternal@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windo.c)
 *     ?ReplaceAll@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1804128B0 (-ReplaceAll@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UD.c)
 *     ?SetAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x180412FD0 (-SetAt@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDispla.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XWinRT::detail::ReentrancyGuard<1>::operator=(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v2;
  LODWORD(v2) = *(_DWORD *)a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)a2 = v2;
  if ( *(_QWORD *)(a2 + 8) )
    **(_DWORD **)(a2 + 8) = 0;
  return a1;
}
