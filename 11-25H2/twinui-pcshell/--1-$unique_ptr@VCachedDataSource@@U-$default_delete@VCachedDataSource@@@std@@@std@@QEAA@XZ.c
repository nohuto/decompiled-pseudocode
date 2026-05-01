/*
 * XREFs of ??1?$unique_ptr@VCachedDataSource@@U?$default_delete@VCachedDataSource@@@std@@@std@@QEAA@XZ @ 0x1802CF6E4
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1800D3244 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCachedDataSource@@@std@@QEBAXPEAVCachedDataSource@@@Z @ 0x180677C30 (--R-$default_delete@VCachedDataSource@@@std@@QEBAXPEAVCachedDataSource@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CachedDataSource>::~unique_ptr<CachedDataSource>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CachedDataSource>::operator()();
  return result;
}
