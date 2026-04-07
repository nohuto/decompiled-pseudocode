/*
 * XREFs of ?OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z @ 0x18004E7F4
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004E650 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 */

void __fastcall CLivePreview::OnAlphaChange(CLivePreview *this, const struct CWindowData *a2, unsigned __int8 a3)
{
  int v4; // eax
  __int64 v6; // r8
  double v7; // xmm6_8
  __int64 i; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  CVisual *v11; // rcx

  v4 = a3;
  v6 = 0LL;
  v7 = (double)v4 / 255.0;
  while ( (unsigned int)v6 < *((_DWORD *)this + 66) )
  {
    v9 = *((_QWORD *)this + 30);
    if ( *(const struct CWindowData **)(v9 + 48 * v6 + 8) == a2 )
    {
      CVisual::SetOpacity(*(CVisual **)(v9 + 48 * v6), v7, v6);
      break;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 58); i = (unsigned int)(i + 1) )
  {
    v10 = *((_QWORD *)this + 26);
    if ( *(const struct CWindowData **)(v10 + 40 * i) == a2 )
    {
      v11 = *(CVisual **)(v10 + 40 * i + 8);
      if ( v11 )
        CVisual::SetOpacity(v11, v7, v6);
      return;
    }
  }
}
