/*
 * XREFs of ??1FxDmaEnabler@@UEAA@XZ @ 0x14008983C
 * Callers:
 *     ??_EFxDmaEnabler@@UEAAPEAXI@Z @ 0x1400898B0 (--_EFxDmaEnabler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14003B790 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxDmaEnabler::~FxDmaEnabler(FxDmaEnabler *this)
{
  char v2; // al

  this->__vftable = (FxDmaEnabler_vtbl *)FxDmaEnabler::`vftable';
  v2 = *((_BYTE *)this + 380);
  if ( (v2 & 0x20) != 0 )
  {
    if ( (v2 & 8) != 0 )
    {
      ExDeleteNPagedLookasideList(&this->m_SGList.ScatterGatherProfile.Lookaside);
    }
    else if ( (v2 & 4) == 0 )
    {
      ExFreePoolWithTag(this->m_SGList.ScatterGatherProfile.Lookaside.L.SingleListHead.Next, 0);
    }
    *((_BYTE *)this + 380) &= ~0x20u;
  }
  FxNonPagedObject::~FxNonPagedObject(this);
}
