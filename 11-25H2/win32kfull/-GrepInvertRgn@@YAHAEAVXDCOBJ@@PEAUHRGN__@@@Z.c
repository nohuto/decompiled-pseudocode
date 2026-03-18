/*
 * XREFs of ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140209018
 * Callers:
 *     NtGdiInvertRgn @ 0x140208F00 (NtGdiInvertRgn.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x140013B1C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D260 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14007FBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     EngPaint @ 0x1400E42E0 (EngPaint.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400E6A38 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140152CAC (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x14019E730 (-GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepInvertRgn(struct XDCOBJ *this, HRGN a2)
{
  __int64 v3; // r15
  __int64 v4; // rcx
  unsigned int v5; // esi
  int v7; // ebx
  __int64 v8; // rax
  int v9; // r14d
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  struct REGION *v15; // rax
  struct ECLIPOBJ *v16; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  bool v20; // [rsp+38h] [rbp-C8h]
  _QWORD v21[7]; // [rsp+40h] [rbp-C0h] BYREF
  __m128i rclBounds; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v23[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v24; // [rsp+98h] [rbp-68h]
  int v25[4]; // [rsp+120h] [rbp+20h] BYREF
  CLIPOBJ pco; // [rsp+130h] [rbp+30h] BYREF

  v3 = 0LL;
  v4 = *(_QWORD *)this;
  v5 = 0;
  if ( (*(_DWORD *)(v4 + 36) & 0x10000) != 0 )
    return v5;
  v7 = *(_DWORD *)(*(_QWORD *)(v4 + 976) + 208LL);
  DC::QuickInitXform(v4, v25, 2147484164LL);
  v19 = *(_QWORD *)v25;
  v8 = *(_QWORD *)this;
  v20 = v7 != 2;
  v9 = *(_DWORD *)(*(_QWORD *)(v8 + 976) + 340LL) & 0x802;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a2, 1, 0);
  if ( v21[0] )
  {
    if ( v9 == 2050 )
      goto LABEL_9;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v23);
    if ( v24 )
    {
      if ( !v19 || !RGNOBJ::bCreate((RGNOBJ *)v21, (struct EPATHOBJ *)v23, (const struct EXFORMOBJR *)&v19) )
        goto LABEL_23;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v25, (struct EPATHOBJ *)v23, 1u, 0LL);
      if ( *(_QWORD *)v25 )
      {
        v3 = v21[0];
        v21[0] = *(_QWORD *)v25;
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v23);
LABEL_9:
        if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v21) == 1 )
          goto LABEL_26;
        v10 = *(_QWORD *)this;
        *(_OWORD *)v25 = *(_OWORD *)(v21[0] + 52LL);
        if ( (*(_DWORD *)(v10 + 36) & 0xE0) != 0 )
          XDCOBJ::vAccumulate(this, (struct ERECTL *)v25);
        if ( !*(_QWORD *)(*(_QWORD *)this + 496LL) )
        {
LABEL_26:
          v5 = 1;
        }
        else
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23);
          v11 = DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, this, 0);
          v12 = v21[0];
          v13 = *(_QWORD *)this;
          if ( !v21[0] )
            *(_DWORD *)(v13 + 36) |= 0x10u;
          *(_QWORD *)(v13 + 1128) = v12;
          v14 = *(_QWORD *)(*(_QWORD *)this + 496LL);
          if ( v11 && DC::bTightenRao(*(DC **)this) )
          {
            ERECTL::bOffsetAdd(
              (ERECTL *)v25,
              (const struct _POINTL *)(*(_QWORD *)this + 8 * ((*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) + 127LL)),
              0);
            GrepScaleValues(this, v25, 4u);
            v15 = XDCOBJ::prgnEffRao((DC **)this);
            ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v15, (struct ERECTL *)v25);
            if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
            {
              if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 )
              {
                rclBounds = (__m128i)pco.rclBounds;
                XDCOBJ::vAccumulateTight(this, v16, &rclBounds);
              }
              ++*(_DWORD *)(v14 + 92);
              EngPaint((SURFOBJ *)(v14 + 24), &pco, 0LL, 0LL, 0x606u);
            }
            v5 = 1;
          }
          else
          {
            v5 = XDCOBJ::bFullScreen(this);
          }
          v18 = *(_QWORD *)this;
          *(_DWORD *)(v18 + 36) |= 0x10u;
          *(_QWORD *)(v18 + 1128) = 0LL;
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v23);
        }
        if ( v9 != 2050 )
        {
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v21);
          v21[0] = v3;
        }
        goto LABEL_29;
      }
    }
    EngSetLastError(8u);
LABEL_23:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v23);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
    return 0LL;
  }
LABEL_29:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
  return v5;
}
