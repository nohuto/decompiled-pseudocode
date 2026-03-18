/*
 * XREFs of ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x14006C614
 * Callers:
 *     EngStrokeAndFillPath @ 0x1400E48A0 (EngStrokeAndFillPath.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x14006CB8C (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

BOUNDCLIPRGNTOSURFACE *__fastcall BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE(
        BOUNDCLIPRGNTOSURFACE *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ **a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  struct RGNOBJ *v9; // rsi
  LONG v10; // edx
  LONG v11; // r8d
  __int64 v13; // rax
  struct REGION *v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h] BYREF
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  struct _RECTL v18; // [rsp+40h] [rbp-20h] BYREF

  ECLIPOBJ::ECLIPOBJ(this);
  *(_QWORD *)(v7 + 152) = 0LL;
  *(_DWORD *)(v7 + 160) = 1;
  if ( a3 )
  {
    v8 = (__int64)*a3;
    if ( *a3 )
    {
      v18.left = 0;
      v9 = (struct RGNOBJ *)(v8 + 56);
      v18.top = 0;
      v10 = *(_DWORD *)(v5 + 32);
      v11 = *(_DWORD *)(v6 + 36);
      v18.right = v10;
      v18.bottom = v11;
      v17 = *(_OWORD *)(*(_QWORD *)(v8 + 56) + 52LL);
      if ( (int)v17 < 0 || v10 < SDWORD2(v17) || SDWORD1(v17) < 0 || v11 < SHIDWORD(v17) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
        v13 = v17;
        *((_QWORD *)this + 19) = v17;
        if ( v13
          && v15
          && v16
          && (RGNOBJ::vSet((RGNOBJ *)&v16, &v18), RGNOBJ::bMerge((RGNOBJ *)&v15, v9, (struct RGNOBJ *)&v16, 8u))
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v15) != 1 )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v17, (struct RGNOBJ *)&v15);
          v14 = (struct REGION *)v17;
          *((_QWORD *)this + 19) = v17;
          XCLIPOBJ::vSetup(this, v14, (const struct ERECTL *)&v18, 1);
          *a3 = (struct _CLIPOBJ *)this;
        }
        else
        {
          *((_DWORD *)this + 40) = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
      }
    }
  }
  return this;
}
