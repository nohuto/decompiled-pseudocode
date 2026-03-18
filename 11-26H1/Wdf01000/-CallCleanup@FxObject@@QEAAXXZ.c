/*
 * XREFs of ?CallCleanup@FxObject@@QEAAXXZ @ 0x14003840C
 * Callers:
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x14007A8A0 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxCommonBuffer@@UEAAEXZ @ 0x140081B20 (-Dispose@FxCommonBuffer@@UEAAEXZ.c)
 *     ?Dispose@FxDmaEnabler@@UEAAEXZ @ 0x140089E10 (-Dispose@FxDmaEnabler@@UEAAEXZ.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x14008F840 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1400946C0 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 * Callees:
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x14003842C (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 */

void __fastcall FxObject::CallCleanup(FxObject *this)
{
  if ( _bittest16((const signed __int16 *)&this->24, 0xAu) )
    FxObject::CallCleanupCallbacks(this);
}
