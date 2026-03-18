/*
 * XREFs of ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180174144
 * Callers:
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18001F6E0 (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 *     ?UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x180174094 (-UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::PropagateBackdropUpdates(CVisual *this, int a2, int a3)
{
  CVisual *v3; // r9
  CVisual **v4; // rax

  if ( a2 || a3 )
  {
    v3 = this;
    do
    {
      *((_DWORD *)this + 64) += a2;
      *((_DWORD *)this + 65) += a3;
      if ( (*((_BYTE *)this + 102) & 0x20) == 0 )
        break;
      this = (CVisual *)*((_QWORD *)this + 11);
      if ( v3 )
      {
        v4 = (CVisual **)*((_QWORD *)v3 + 11);
        v3 = (CVisual *)v4;
        if ( v4 )
          v3 = v4[11];
      }
    }
    while ( this != v3 );
  }
}
