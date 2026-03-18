/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x140087560
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x140086E10 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x140087280 (hCreateSolidBrushInternal.c)
 *     GreCreateSolidBrush @ 0x140087840 (GreCreateSolidBrush.c)
 *     bInitBRUSHOBJ @ 0x1402E9AB8 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1402EA240 (bInitBrush.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v2, 0LL);
    if ( !*((_DWORD *)this + 12) )
      bDeleteBrush(**this, 0, 0);
    *this = 0LL;
  }
  PopThreadGuardedObject(this + 2);
}
