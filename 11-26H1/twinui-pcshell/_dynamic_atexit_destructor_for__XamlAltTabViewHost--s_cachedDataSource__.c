/*
 * XREFs of _dynamic_atexit_destructor_for__XamlAltTabViewHost::s_cachedDataSource__ @ 0x180708AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCachedDataSource@@@std@@QEBAXPEAVCachedDataSource@@@Z @ 0x18069E74C (--R-$default_delete@VCachedDataSource@@@std@@QEBAXPEAVCachedDataSource@@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__XamlAltTabViewHost::s_cachedDataSource__(__int64 a1)
{
  if ( XamlAltTabViewHost::s_cachedDataSource )
    std::default_delete<CachedDataSource>::operator()(a1, XamlAltTabViewHost::s_cachedDataSource);
}
