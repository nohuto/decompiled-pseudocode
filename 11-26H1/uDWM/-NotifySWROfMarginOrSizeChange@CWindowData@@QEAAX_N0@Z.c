/*
 * XREFs of ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180011760
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x1800115C8 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18007C9A4 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002910C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
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
