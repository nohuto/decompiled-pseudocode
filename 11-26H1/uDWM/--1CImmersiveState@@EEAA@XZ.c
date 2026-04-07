/*
 * XREFs of ??1CImmersiveState@@EEAA@XZ @ 0x18000831C
 * Callers:
 *     ??_GCImmersiveState@@EEAAPEAXI@Z @ 0x1800082E0 (--_GCImmersiveState@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 */

void __fastcall CImmersiveState::~CImmersiveState(CImmersiveState *this)
{
  *(_QWORD *)this = &CImmersiveState::`vftable';
  CBitmapSourceArray::~CBitmapSourceArray((CImmersiveState *)((char *)this + 16));
  CBaseObject::~CBaseObject(this);
}
