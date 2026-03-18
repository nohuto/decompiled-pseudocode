/*
 * XREFs of ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x14009D800
 * Callers:
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073700 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 * Callees:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140074A40 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140076840 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x14009EE88 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bSpDwmUpdateDragRectShape(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct tagPOINT *a4,
        struct tagSIZE *a5,
        unsigned int *a6,
        struct SFMLOGICALSURFACE **a7)
{
  unsigned int LogicalSurface; // ebx
  struct SFMLOGICALSURFACE *v10; // rsi
  __int64 v11; // rbx
  BOOL (__stdcall *v12)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  __int64 v13; // rdx
  __m128i si128; // xmm0
  __int64 v15; // rcx
  HDEV v17; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v18[2]; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v19; // [rsp+78h] [rbp-9h] BYREF
  __m128i v20; // [rsp+88h] [rbp+7h] BYREF

  v17 = a1;
  LogicalSurface = bSpDwmCreateLogicalSurface(a1, a2, a3, a5, a7);
  if ( LogicalSurface )
  {
    v10 = *a7;
    v11 = *((_QWORD *)*a7 + 23);
    v18[0] = 0LL;
    SURFREFVIEW::bMap((SURFREFVIEW *)v18, (struct _SURFOBJ *)v11);
    if ( v18[0] )
    {
      *((_DWORD *)a2 + 34) |= 4u;
      if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v17) )
      {
        v12 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))RedirStretchBlt;
      }
      else if ( (*(_DWORD *)(v11 + 88) & 2) != 0 )
      {
        v12 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)a1 + 355);
      }
      else
      {
        v12 = EngStretchBlt;
      }
      v13 = *((_QWORD *)a1 + 139);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      **(_DWORD **)(v13 + 56) = -1;
      v15 = *((_QWORD *)v10 + 23);
      *(struct tagSIZE *)&v19.right = *a5;
      v20 = si128;
      *(_QWORD *)&v19.left = 0LL;
      LogicalSurface = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, struct tagRECT *, __m128i *, _QWORD, int))v12)(
                         v15,
                         v13,
                         0LL,
                         0LL,
                         0LL,
                         0LL,
                         0LL,
                         &v19,
                         &v20,
                         0LL,
                         1);
      if ( LogicalSurface )
        vSpUpdateDirtyRgn(a2, v10, 0LL, (const struct _RECTL *)&v19, a6, 0);
    }
    else
    {
      LogicalSurface = 0;
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v18);
  }
  return LogicalSurface;
}
