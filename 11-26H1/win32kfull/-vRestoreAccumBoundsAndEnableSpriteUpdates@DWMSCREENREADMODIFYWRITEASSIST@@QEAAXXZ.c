/*
 * XREFs of ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x140326204
 * Callers:
 *     NtGdiLineTo @ 0x14006DF40 (NtGdiLineTo.c)
 *     GrePolyPolyline @ 0x140114480 (GrePolyPolyline.c)
 *     GrePolyPolygon @ 0x1401146C0 (GrePolyPolygon.c)
 *     NtGdiRectangle @ 0x1401166F0 (NtGdiRectangle.c)
 *     NtGdiInvertRgn @ 0x14023D9D0 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x140326620 (GrePolyBezier.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1401A84B8 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 */

void __fastcall DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates(
        DWMSCREENREADMODIFYWRITEASSIST *this)
{
  XDCOBJ **v1; // r8
  __int64 v2; // r10
  XDCOBJ **v3; // rdx
  XDCOBJ *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax

  v1 = (XDCOBJ **)((char *)this + 24);
  v2 = **((_QWORD **)this + 3);
  if ( !v2 )
    return;
  if ( *((_DWORD *)this + 16) )
  {
    v3 = (XDCOBJ **)((char *)this + 24);
LABEL_6:
    *(_DWORD *)(*(_QWORD *)(v2 + 976) + 152LL) &= 0xFFFFFCFF;
    *(_DWORD *)(*(_QWORD *)(v2 + 976) + 216LL) = *((_DWORD *)this + 12);
    *(_DWORD *)(*(_QWORD *)(v2 + 976) + 220LL) = *((_DWORD *)this + 13);
    *(_DWORD *)(*(_QWORD *)(v2 + 976) + 8LL) = *((_DWORD *)this + 14);
    *(_DWORD *)(*(_QWORD *)(v2 + 976) + 12LL) = *((_DWORD *)this + 15);
    v4 = *v1;
    v1 = v3;
    v5 = *(_QWORD *)(*(_QWORD *)v4 + 976LL);
    if ( *((_DWORD *)this + 17) )
      *(_DWORD *)(v5 + 152) |= 0x100u;
    else
      *(_DWORD *)(v5 + 152) |= 0x200u;
    goto LABEL_9;
  }
  if ( *((_DWORD *)this + 17) )
  {
    v3 = (XDCOBJ **)((char *)this + 24);
    goto LABEL_6;
  }
LABEL_9:
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)*v1 + 976LL) + 212LL) = *((_BYTE *)this + 32);
  v6 = *((_QWORD *)this + 5);
  v7 = *(_QWORD *)(*(_QWORD *)*v1 + 976LL);
  if ( *(_QWORD *)(v7 + 160) != v6 )
  {
    *(_QWORD *)(v7 + 160) = v6;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)*v1 + 976LL) + 152LL) |= 0x1000u;
  }
  if ( *(_DWORD *)this )
    XDCOBJ::vAccumulateTight(*v1, (DWMSCREENREADMODIFYWRITEASSIST *)((char *)this + 4));
  *(_DWORD *)(*(_QWORD *)*v1 + 488LL) = 1;
}
