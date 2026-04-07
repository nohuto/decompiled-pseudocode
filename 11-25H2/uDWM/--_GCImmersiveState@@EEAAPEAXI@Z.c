/*
 * XREFs of ??_GCImmersiveState@@EEAAPEAXI@Z @ 0x18007D070
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveState@@EEAA@XZ @ 0x18007D0A8 (--1CImmersiveState@@EEAA@XZ.c)
 */

CImmersiveState *__fastcall CImmersiveState::`scalar deleting destructor'(CImmersiveState *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CImmersiveState::~CImmersiveState(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
