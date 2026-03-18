/*
 * XREFs of ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x14008A654
 * Callers:
 *     ?Dispose@FxDmaEnabler@@UEAAEXZ @ 0x140089E10 (-Dispose@FxDmaEnabler@@UEAAEXZ.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x140089F58 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 * Callees:
 *     ?FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z @ 0x140089EA0 (-FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z.c)
 */

void __fastcall FxDmaEnabler::ReleaseResources(FxDmaEnabler *this)
{
  $E4A3ECB67F2D0678F53DA0B3123C8A42 *v1; // rbx
  FxDmaEnabler *v3; // rcx
  _FxDmaDescription *p_m_SimplexAdapterInfo; // rdx

  v1 = &this->184;
  FxDmaEnabler::FreeResources(this, &this->m_SimplexAdapterInfo);
  p_m_SimplexAdapterInfo = &v1->m_DuplexAdapterInfo[1];
  if ( (*((_BYTE *)this + 380) & 0x10) == 0 )
    p_m_SimplexAdapterInfo = &v1->m_SimplexAdapterInfo;
  FxDmaEnabler::FreeResources(v3, p_m_SimplexAdapterInfo);
  *((_BYTE *)this + 380) &= ~2u;
}
