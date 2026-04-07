/*
 * XREFs of ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180044338
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180044248 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180053EFC (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18001DCF8 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 */

void __fastcall CWindowData::NotifySWROfMarginOrSizeChange(CWindowData *this, char a2, char a3)
{
  __int64 i; // rbx
  CSecondaryWindowRepresentation *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h]

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 130); i = (unsigned int)(i + 1) )
  {
    v7 = *(CSecondaryWindowRepresentation **)(*((_QWORD *)this + 62) + 8 * i);
    v8 = *((_OWORD *)v7 + 4);
    if ( (CWindowData *)v8 == this && (a2 && DWORD2(v8) == 1 || a3 && DWORD2(v8) == 3) )
      CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(v7);
  }
}
