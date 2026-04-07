/*
 * XREFs of ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18000474C
 * Callers:
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x180003D30 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180015540 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001CF40 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x180004A58 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180004A88 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 */

void __fastcall CButton::UpdateAtlasPositionAndSize(CButton *this)
{
  CButton **v2; // rcx
  const struct tagPOINT *v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  CAtlasedImage::SetSize(*((CAtlasedImage **)this + 31), (const struct tagSIZE *)this + 9);
  v2 = (CButton **)*((_QWORD *)this + 31);
  if ( v2[10] == this )
  {
    v4 = 0LL;
    v3 = (const struct tagPOINT *)&v4;
  }
  else
  {
    v3 = (const struct tagPOINT *)((char *)this + 64);
  }
  CAtlasedImage::SetOffset((CAtlasedImage *)v2, v3);
}
