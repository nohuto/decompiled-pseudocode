/*
 * XREFs of ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x140344A74
 * Callers:
 *     NtGdiLineTo @ 0x14006DF40 (NtGdiLineTo.c)
 *     GrePolyPolyline @ 0x140114480 (GrePolyPolyline.c)
 *     GrePolyPolygon @ 0x1401146C0 (GrePolyPolygon.c)
 *     NtGdiRectangle @ 0x1401166F0 (NtGdiRectangle.c)
 *     NtGdiInvertRgn @ 0x14023D9D0 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x140326620 (GrePolyBezier.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates(
        DWMSCREENREADMODIFYWRITEASSIST *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  int Bounds; // eax
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edx
  int v11; // r9d

  if ( **((_QWORD **)this + 3) )
  {
    v2 = Gre::Base::Globals(this);
    *(_DWORD *)(**((_QWORD **)this + 3) + 488LL) = 0;
    Bounds = GreGetBounds(***((_QWORD ***)this + 3), (char *)this + 4, 4LL);
    v4 = (__int64 *)*((_QWORD *)this + 3);
    *(_DWORD *)this = Bounds;
    v5 = *v4;
    v6 = *(_DWORD *)(*v4 + 40) & 1;
    *((_DWORD *)this + 1) -= *(_DWORD *)(v5 + 8 * v6 + 1016);
    *((_DWORD *)this + 3) -= *(_DWORD *)(v5 + 8 * v6 + 1016);
    *((_DWORD *)this + 2) -= *(_DWORD *)(v5 + 8 * v6 + 1020);
    *((_DWORD *)this + 4) -= *(_DWORD *)(v5 + 8 * v6 + 1020);
    v7 = (_QWORD *)*((_QWORD *)this + 3);
    *((_DWORD *)this + 8) = *(unsigned __int8 *)(*(_QWORD *)(*v7 + 976LL) + 212LL);
    v8 = *(_QWORD *)(*v7 + 976LL);
    if ( (*(_DWORD *)(v8 + 152) & 0x1000) != 0 )
    {
      *((_QWORD *)this + 5) = *(_QWORD *)(v8 + 160);
      GreDCSelectBrush(*v7, *(_QWORD *)(*((_QWORD *)v2 + 386) + 40LL));
    }
    else
    {
      *((_QWORD *)this + 5) = GreDCSelectBrush(*v7, *(_QWORD *)(*((_QWORD *)v2 + 386) + 40LL));
    }
    *(_BYTE *)(*(_QWORD *)(**((_QWORD **)this + 3) + 976LL) + 212LL) = 11;
    v9 = *((_QWORD *)this + 3);
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 976LL) + 152LL);
    *((_DWORD *)this + 16) = (v10 & 0x100) == 0;
    v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 976LL) + 152LL) & 0x200;
    *((_DWORD *)this + 17) = v11 == 0;
    if ( (v10 & 0x100) == 0 )
      *((_QWORD *)this + 6) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 976LL) + 216LL);
    if ( !v11 )
      *((_QWORD *)this + 7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 976LL) + 8LL);
  }
}
