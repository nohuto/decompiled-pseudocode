/*
 * XREFs of ??1CSuperWetSource@@UEAA@XZ @ 0x1801A5CD0
 * Callers:
 *     ??1CGenericInk@@EEAA@XZ @ 0x1801A5C64 (--1CGenericInk@@EEAA@XZ.c)
 *     ??1CDelegatedInkCanvas@@EEAA@XZ @ 0x18026C57C (--1CDelegatedInkCanvas@@EEAA@XZ.c)
 *     ??1?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@MEAA@XZ @ 0x1802849B8 (--1-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??1?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@XZ @ 0x1801A2068 (--1-$unique_ptr@VCSharedCircularQueueProducer@@U-$default_delete@VCSharedCircularQueueProducer@@.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A5C3C (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSuperWetSource::~CSuperWetSource(CSuperWetSource *this)
{
  CResource *v2; // rcx

  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)this + 15);
  std::unique_ptr<CSharedCircularQueueProducer>::~unique_ptr<CSharedCircularQueueProducer>((void **)this + 14);
  v2 = (CResource *)*((_QWORD *)this + 13);
  if ( v2 )
  {
    *((_QWORD *)this + 13) = 0LL;
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v2);
  }
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease((volatile signed __int32 **)this + 11);
  CResource::~CResource(this);
}
