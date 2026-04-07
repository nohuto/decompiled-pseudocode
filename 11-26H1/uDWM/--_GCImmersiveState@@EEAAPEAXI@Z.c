/*
 * XREFs of ??_GCImmersiveState@@EEAAPEAXI@Z @ 0x1800082E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveState@@EEAA@XZ @ 0x18000831C (--1CImmersiveState@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CImmersiveState *__fastcall CImmersiveState::`scalar deleting destructor'(CImmersiveState *this, char a2)
{
  CImmersiveState::~CImmersiveState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x58uLL);
  return this;
}
