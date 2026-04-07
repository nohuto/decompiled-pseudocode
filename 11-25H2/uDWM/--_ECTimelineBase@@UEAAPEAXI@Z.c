/*
 * XREFs of ??_ECTimelineBase@@UEAAPEAXI@Z @ 0x1800CF9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CTimelineBase@@UEAA@XZ @ 0x1800701AC (--1CTimelineBase@@UEAA@XZ.c)
 */

CTimelineBase *__fastcall CTimelineBase::`vector deleting destructor'(CTimelineBase *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CTimelineBase::~CTimelineBase(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
