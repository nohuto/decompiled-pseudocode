/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140071190
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140070FD4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1400711D0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 *     SetSysColor @ 0x1400AADC8 (SetSysColor.c)
 *     GreGetBrushColor @ 0x1401C73E0 (GreGetBrushColor.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1400DE558 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    HmgDecrementShareReferenceCountEx(*(struct _BASEOBJECT **)this, 0LL);
  }
  PopThreadGuardedObject((_QWORD *)this + 2);
}
