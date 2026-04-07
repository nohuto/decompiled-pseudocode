/*
 * XREFs of ??_ECBaseObject@@UEAAPEAXI@Z @ 0x1800644B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBaseObject@@UEAA@XZ @ 0x1800644E8 (--1CBaseObject@@UEAA@XZ.c)
 */

CBaseObject *__fastcall CBaseObject::`vector deleting destructor'(CBaseObject *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CBaseObject::~CBaseObject(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
