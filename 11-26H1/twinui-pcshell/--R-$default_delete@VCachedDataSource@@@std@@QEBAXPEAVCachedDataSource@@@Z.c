/*
 * XREFs of ??R?$default_delete@VCachedDataSource@@@std@@QEBAXPEAVCachedDataSource@@@Z @ 0x18069E74C
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18009A890 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ??1?$unique_ptr@VCachedDataSource@@U?$default_delete@VCachedDataSource@@@std@@@std@@QEAA@XZ @ 0x1802C6960 (--1-$unique_ptr@VCachedDataSource@@U-$default_delete@VCachedDataSource@@@std@@@std@@QEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__XamlAltTabViewHost::s_cachedDataSource__ @ 0x180708AA0 (_dynamic_atexit_destructor_for__XamlAltTabViewHost--s_cachedDataSource__.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CachedDataSource@@QEAA@XZ @ 0x18069E6B0 (--1CachedDataSource@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CachedDataSource>::operator()(__int64 a1, CachedDataSource *a2)
{
  if ( a2 )
  {
    CachedDataSource::~CachedDataSource(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x38);
  }
}
