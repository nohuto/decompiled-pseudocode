/*
 * XREFs of ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x14009F970
 * Callers:
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400962F4 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     DxgkEngColorFillViaGDI @ 0x140326320 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x14008114C (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140087BA4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400A15A8 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPatBlt(struct XDCOBJ *a1, int a2, unsigned int a3, int a4, int a5, unsigned int a6)
{
  unsigned int v6; // ebx
  ROP4 v11; // r14d
  __int64 v12; // rsi
  LONG right; // edx
  LONG left; // r8d
  LONG top; // r9d
  LONG bottom; // r10d
  int v17; // eax
  _DWORD *v18; // rax
  int v19; // ecx
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  struct SURFACE *v22; // rsi
  __int64 v23; // rdx
  unsigned int locked; // eax
  int v26; // eax
  LONG v27; // eax
  __int64 v28; // [rsp+78h] [rbp-88h] BYREF
  __int128 v29; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  _QWORD v32[14]; // [rsp+A0h] [rbp-60h] BYREF
  RECTL v33; // [rsp+110h] [rbp+10h] BYREF

  v6 = 0;
  v11 = (BYTE2(a6) << 8) | BYTE2(a6);
  if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
  {
    DC::QuickInitXform(*(_QWORD *)a1, &v28, 516LL);
    if ( (*(_BYTE *)(v28 + 32) & 1) == 0 )
    {
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)&v29, 0LL);
      v6 = GrepMaskBlt(a1, a2, a3, a4, a5, (struct OPTAPIDCOBJ *)&v29, 0, 0, 0LL, 0, 0, v11 << 16, 0);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)&v29);
      return v6;
    }
    v33.left = a2;
    v12 = *(_QWORD *)a1;
    right = a2 + a4;
    v33.bottom = a5 + a3;
    left = a2;
    v33.right = a2 + a4;
    top = a3;
    v33.top = a3;
    if ( (*(_BYTE *)(v28 + 32) & 0x43) == 0x43
      || (v26 = bCvtPts1(v28, &v33, 2LL, a3), right = v33.right, top = v33.top, left = v33.left, v26) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v12 + 976) + 108LL) & 1) != 0 )
      {
        ++left;
        ++right;
        v33.left = left;
        v33.right = right;
      }
    }
    if ( left > right )
    {
      v27 = left;
      v33.left = right;
      left = right;
      v33.right = v27;
      right = v27;
    }
    bottom = v33.bottom;
    if ( top > v33.bottom )
    {
      v33.top = v33.bottom;
      v33.bottom = top;
      top = bottom;
    }
    if ( left == right || (v17 = 0, top == v33.bottom) )
      v17 = 1;
    if ( v17 )
      return 1;
    v18 = *(_DWORD **)a1;
    v19 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( (v19 & 0xE0) != 0 )
    {
      if ( (v19 & 0x20) != 0 )
      {
        if ( left < v18[266] )
        {
          v18[266] = left;
          right = v33.right;
          top = v33.top;
          left = v33.left;
        }
        if ( top < v18[267] )
        {
          v18[267] = top;
          right = v33.right;
          top = v33.top;
          left = v33.left;
        }
        if ( right > v18[268] )
        {
          v18[268] = right;
          right = v33.right;
          top = v33.top;
          left = v33.left;
        }
        if ( v33.bottom > v18[269] )
        {
          v18[269] = v33.bottom;
          right = v33.right;
          top = v33.top;
          left = v33.left;
        }
      }
      v20 = *(_DWORD **)a1;
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x80u) != 0 )
      {
        if ( left < v20[274] )
        {
          v20[274] = left;
          right = v33.right;
          top = v33.top;
        }
        if ( top < v20[275] )
        {
          v20[275] = top;
          right = v33.right;
        }
        if ( right > v20[276] )
          v20[276] = right;
        if ( v33.bottom > v20[277] )
          v20[277] = v33.bottom;
      }
    }
    if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)((BYTE2(a6) << 8) | (unsigned int)BYTE2(a6)) >> 8]) & 0xB2) != 0 )
      bSpDwmValidateSurface(a1, a2, a3, a4, a5);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v32);
    v30 = 0LL;
    v29 = 0LL;
    v31 = 0;
    v32[0] = 0LL;
    memset(&v32[10], 0, 24);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v29, a1, 0) )
    {
      v21 = *(_QWORD *)a1;
      v22 = *(struct SURFACE **)(*(_QWORD *)a1 + 496LL);
      if ( !v22 )
      {
        v6 = 1;
        goto LABEL_40;
      }
      v23 = *(_QWORD *)(v21 + 976);
      if ( (*(_DWORD *)(v23 + 152) & 0x1000) != 0 )
        GreDCSelectBrush(v21, *(_QWORD *)(v23 + 160));
      locked = GrePatBltLockedDC(
                 a1,
                 *(struct EXFORMOBJ **)(*(_QWORD *)a1 + 976LL),
                 &v33,
                 v11,
                 v22,
                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 184LL),
                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 176LL),
                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 188LL),
                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL));
    }
    else
    {
      locked = XDCOBJ::bFullScreen(a1);
    }
    v6 = locked;
LABEL_40:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v29);
  }
  return v6;
}
