/*
 * XREFs of ?SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1801CC11C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?AppendDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x18021FE50 (-AppendDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UMil3DRectL.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18012DBA4 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CGdiSpriteBitmap::SetDirtyRectangles(CGdiSpriteBitmap *this, __int64 a2)
{
  unsigned int v3; // r8d
  const struct tagRECT *v4; // rdx
  int v5; // eax
  int v7[2]; // [rsp+20h] [rbp-68h] BYREF
  int v8; // [rsp+28h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( *(_QWORD *)a2 )
  {
    v3 = *(_DWORD *)a2;
    v4 = *(const struct tagRECT **)(a2 + 8);
    *(_QWORD *)v7 = &v8;
    v8 = 0;
    v5 = CRegion::TryAddRectangles((FastRegion::CRegion **)v7, v4, v3);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1D1,
        (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
        (const char *)(unsigned int)v5,
        v7[0]);
    CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)v7, 1);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)v7);
  }
  return 0LL;
}
