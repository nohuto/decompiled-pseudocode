/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400715A4
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140070FD4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1400711D0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 *     SetSysColor @ 0x1400AADC8 (SetSysColor.c)
 *     GreGetBrushColor @ 0x1401C73E0 (GreGetBrushColor.c)
 * Callees:
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     PushThreadGuardedObject @ 0x1400988E0 (PushThreadGuardedObject.c)
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1400DC74C (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, __int64 a2)
{
  __int64 v4; // rax

  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 16,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 16) >> 64),
    EPALOBJ::~EPALOBJ);
  v4 = HmgShareLockCheck(a2, 16);
  *(_QWORD *)this = v4;
  if ( v4 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    HmgDecrementShareReferenceCountEx(*(struct _BASEOBJECT **)this, 0LL);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
