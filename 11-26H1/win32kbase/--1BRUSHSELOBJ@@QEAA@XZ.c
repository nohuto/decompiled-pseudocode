/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400346C8
 * Callers:
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     GreGetBrushColor @ 0x1401ECF40 (GreGetBrushColor.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x14003437C (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  __int64 v2; // rcx
  __int64 SessionState; // rax

  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    SessionState = W32GetSessionState(v2);
    HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), *(unsigned int **)this);
  }
  PopThreadGuardedObject((_QWORD *)this + 2);
}
