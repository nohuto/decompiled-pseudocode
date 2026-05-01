/*
 * XREFs of ??R?$default_delete@VCachedDataSource@@@std@@QEBAXPEAVCachedDataSource@@@Z @ 0x180677C30
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1800D3244 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ??1?$unique_ptr@VCachedDataSource@@U?$default_delete@VCachedDataSource@@@std@@@std@@QEAA@XZ @ 0x1802CF6E4 (--1-$unique_ptr@VCachedDataSource@@U-$default_delete@VCachedDataSource@@@std@@@std@@QEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__XamlAltTabViewHost::s_cachedDataSource__ @ 0x1806DFE10 (_dynamic_atexit_destructor_for__XamlAltTabViewHost--s_cachedDataSource__.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CachedDataSource@@QEAA@XZ @ 0x180677B94 (--1CachedDataSource@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CachedDataSource>::operator()(__int64 a1, CachedDataSource *a2)
{
  if ( a2 )
  {
    CachedDataSource::~CachedDataSource(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x38);
  }
}
