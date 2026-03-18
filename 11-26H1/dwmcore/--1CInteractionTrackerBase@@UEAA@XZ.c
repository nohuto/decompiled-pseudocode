/*
 * XREFs of ??1CInteractionTrackerBase@@UEAA@XZ @ 0x18013D408
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18013CCDC (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??1?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@UEAA@XZ @ 0x180271348 (--1-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@UEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CInteractionTrackerBase::~CInteractionTrackerBase(CInteractionTrackerBase *this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 96);
  CResource::~CResource(this);
}
