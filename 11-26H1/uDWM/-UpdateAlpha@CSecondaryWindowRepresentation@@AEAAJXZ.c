/*
 * XREFs of ?UpdateAlpha@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18006B1BC
 * Callers:
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800458AC (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::UpdateAlpha(
        CSecondaryWindowRepresentation *this,
        __int64 a2,
        __int64 a3)
{
  CVisual *v5; // rcx
  __int64 v6; // r8

  if ( (*((_BYTE *)this + 40) & 1) != 0 )
  {
    v5 = (CVisual *)*((_QWORD *)this + 6);
    if ( v5 )
    {
      CVisual::SetOpacity(v5, *((double *)this + 23), a3);
      CVisual::SetOpacity(*((CVisual **)this + 7), *((double *)this + 24), v6);
    }
  }
  return 0LL;
}
