/*
 * XREFs of ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800C68D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppArrangementBase@@UEAA@XZ @ 0x1800C668C (--1CAppArrangementBase@@UEAA@XZ.c)
 */

void **__fastcall CAppArrangementDelayed::`scalar deleting destructor'(void **this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CAppArrangementBase::~CAppArrangementBase(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
