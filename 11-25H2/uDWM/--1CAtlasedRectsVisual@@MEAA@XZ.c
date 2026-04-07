/*
 * XREFs of ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x1800103B4
 * Callers:
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180011840 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??1CButton@@MEAA@XZ @ 0x18001D820 (--1CButton@@MEAA@XZ.c)
 *     ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180079940 (--_ECAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x1800103F8 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 */

void __fastcall CAtlasedRectsVisual::~CAtlasedRectsVisual(void **this)
{
  const struct std::nothrow_t *v2; // rdx

  *this = &CAtlasedRectsVisual::`vftable';
  CAtlasedRectsVisual::RemoveAllAtlasImages((CAtlasedRectsVisual *)this);
  CDisplayBlackCurtainAnimatedVisual::operator delete(this[29], v2);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 25);
  CContainerVisual::~CContainerVisual((CContainerVisual *)this);
}
