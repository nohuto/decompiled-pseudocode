/*
 * XREFs of ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14030AB40
 * Callers:
 *     NtGdiEngGradientFill @ 0x14032D080 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x14032D480 (NtGdiEngLineTo.c)
 *     NtGdiEngStretchBlt @ 0x14032DD50 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x14032E1F0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14032E7E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x14032EBB0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x14032EF00 (NtGdiEngTextOut.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z @ 0x1401BC27C (-bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

ECLIPOBJTMPBOUNDED *__fastcall ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED(
        ECLIPOBJTMPBOUNDED *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4)
{
  struct REGION **v4; // rdi
  LONG cy; // eax
  LONG v10; // edx
  LONG v11; // ecx
  LONG cx; // eax
  struct _RECTL v14; // [rsp+20h] [rbp-30h] BYREF
  struct _RECTL v15; // [rsp+30h] [rbp-20h] BYREF

  v4 = (struct REGION **)((char *)this + 152);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 18) = 0LL;
  RGNMEMOBJTMP::RGNMEMOBJTMP((ECLIPOBJTMPBOUNDED *)((char *)this + 152));
  *((_QWORD *)this + 20) = 0LL;
  *((_BYTE *)this + 168) = 0;
  if ( !SURFACE::bClipEngRenderingsToSurfaceBounds((SURFACE *)&a2[-1].pvScan0) )
    goto LABEL_18;
  cy = a2->sizlBitmap.cy;
  v10 = 0x7FFFFFF;
  *(_QWORD *)&v15.left = 0LL;
  v11 = 0x7FFFFFF;
  if ( cy < 0x7FFFFFF )
    v11 = cy;
  cx = a2->sizlBitmap.cx;
  v15.bottom = v11;
  if ( cx < 0x7FFFFFF )
    v10 = cx;
  v15.right = v10;
  if ( a3 && a3->iDComplexity )
  {
    v14 = *(struct _RECTL *)(*(_QWORD *)&a3[2].rclBounds.top + 52LL);
    if ( !ERECTL::bContain((ERECTL *)&v15, &v14) )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
      if ( *v4 )
      {
        if ( *(_QWORD *)&v14.left )
        {
          RGNOBJ::vSet((RGNOBJ *)&v14, &v15);
          if ( RGNOBJ::bMerge((RGNOBJ *)v4, (struct RGNOBJ *)&a3[2].rclBounds.top, (struct RGNOBJ *)&v14, 8u) )
          {
            XCLIPOBJ::vSetup(this, *v4, (const struct ERECTL *)&v15, 1);
            *((_QWORD *)this + 20) = this;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
      return this;
    }
LABEL_18:
    *((_QWORD *)this + 20) = a3;
    *((_BYTE *)this + 168) = 1;
    return this;
  }
  if ( *v4 )
  {
    if ( a4 )
      ERECTL::operator*=(&v15.left, &a4->left);
    RGNOBJ::vSet((RGNOBJ *)v4, &v15);
    XCLIPOBJ::vSetup(this, *v4, (const struct ERECTL *)&v15, 1);
    *((_QWORD *)this + 20) = this;
  }
  return this;
}
