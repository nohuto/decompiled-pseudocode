/*
 * XREFs of ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x140116358
 * Callers:
 *     EngStrokeAndFillPath @ 0x140084A20 (EngStrokeAndFillPath.c)
 *     EngStrokePath @ 0x1401160D0 (EngStrokePath.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140117E38 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

BOUNDCLIPRGNTOSURFACE *__fastcall BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE(
        BOUNDCLIPRGNTOSURFACE *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ **a3)
{
  __int64 v6; // rax
  int cx; // edx
  struct RGNOBJ *v8; // rsi
  int cy; // r8d
  __int64 v11; // rax
  struct REGION *v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  struct _RECTL v16; // [rsp+40h] [rbp-20h] BYREF

  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 1;
  if ( a3 )
  {
    v6 = (__int64)*a3;
    if ( *a3 )
    {
      cx = a2->sizlBitmap.cx;
      v8 = (struct RGNOBJ *)(v6 + 56);
      cy = a2->sizlBitmap.cy;
      v16.right = cx;
      v16.bottom = cy;
      *(_QWORD *)&v16.left = 0LL;
      v15 = *(_OWORD *)(*(_QWORD *)(v6 + 56) + 52LL);
      if ( (int)v15 < 0 || cx < SDWORD2(v15) || SDWORD1(v15) < 0 || cy < SHIDWORD(v15) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
        v11 = v15;
        *((_QWORD *)this + 19) = v15;
        if ( v11
          && v13
          && v14
          && (RGNOBJ::vSet((RGNOBJ *)&v14, &v16), RGNOBJ::bMerge((RGNOBJ *)&v13, v8, (struct RGNOBJ *)&v14, 8u))
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v13) != 1 )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v15, (struct RGNOBJ *)&v13);
          v12 = (struct REGION *)v15;
          *((_QWORD *)this + 19) = v15;
          XCLIPOBJ::vSetup(this, v12, (const struct ERECTL *)&v16, 1);
          *a3 = (struct _CLIPOBJ *)this;
        }
        else
        {
          *((_DWORD *)this + 40) = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
      }
    }
  }
  return this;
}
