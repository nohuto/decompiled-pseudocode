/*
 * XREFs of ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x14023DAF4
 * Callers:
 *     NtGdiInvertRgn @ 0x14023D9D0 (NtGdiInvertRgn.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14006CBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     EngPaint @ 0x140083090 (EngPaint.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140083168 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1401114C4 (-GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14018A09C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1401AEF4C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140296A18 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepInvertRgn(struct XDCOBJ *a1, HRGN a2)
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
  _BYTE v20[40]; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  bool v23; // [rsp+70h] [rbp-90h]
  __m128i rclBounds; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v25[160]; // [rsp+90h] [rbp-70h] BYREF
  int v26[4]; // [rsp+130h] [rbp+30h] BYREF
  CLIPOBJ pco; // [rsp+140h] [rbp+40h] BYREF

  v3 = 0LL;
  v4 = *(_QWORD *)a1;
  v5 = 0;
  if ( (*(_DWORD *)(v4 + 36) & 0x10000) == 0 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v4 + 976) + 208LL);
    DC::QuickInitXform(v4, v26, 2147484164LL);
    v22 = *(_QWORD *)v26;
    v8 = *(_QWORD *)a1;
    v23 = v7 != 2;
    v9 = *(_DWORD *)(*(_QWORD *)(v8 + 976) + 340LL) & 0x802;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v19, a2, 1, 0);
    if ( !v19 )
    {
LABEL_29:
      if ( !v21 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&v19);
      if ( v19 )
        _InterlockedDecrement16((volatile signed __int16 *)(v19 + 12));
      PopThreadGuardedObject(v20);
      return v5;
    }
    if ( v9 == 2050 )
    {
LABEL_9:
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v19) == 1 )
        goto LABEL_26;
      v10 = *(_QWORD *)a1;
      *(_OWORD *)v26 = *(_OWORD *)(v19 + 52);
      if ( (*(_DWORD *)(v10 + 36) & 0xE0) != 0 )
        XDCOBJ::vAccumulate(a1, (struct ERECTL *)v26);
      if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) )
      {
LABEL_26:
        v5 = 1;
      }
      else
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v25);
        v11 = DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v25, a1, 0);
        v12 = v19;
        v13 = *(_QWORD *)a1;
        if ( !v19 )
          *(_DWORD *)(v13 + 36) |= 0x10u;
        *(_QWORD *)(v13 + 1128) = v12;
        v14 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
        if ( v11 && DC::bTightenRao(*(DC **)a1) )
        {
          ERECTL::bOffsetAdd(
            (ERECTL *)v26,
            (const struct _POINTL *)(*(_QWORD *)a1 + 8 * ((*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) + 127LL)),
            0);
          GrepScaleValues(a1, v26, 4u);
          v15 = XDCOBJ::prgnEffRao((DC **)a1);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v15, (struct ERECTL *)v26, 0);
          if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
            {
              rclBounds = (__m128i)pco.rclBounds;
              XDCOBJ::vAccumulateTight(a1, v16, &rclBounds);
            }
            ++*(_DWORD *)(v14 + 92);
            EngPaint((SURFOBJ *)((v14 + 24) & -(__int64)(v14 != 0)), &pco, 0LL, 0LL, 0x606u);
          }
          v5 = 1;
        }
        else
        {
          v5 = XDCOBJ::bFullScreen(a1);
        }
        v18 = *(_QWORD *)a1;
        *(_DWORD *)(v18 + 36) |= 0x10u;
        *(_QWORD *)(v18 + 1128) = 0LL;
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v25);
      }
      if ( v9 != 2050 )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
        v19 = v3;
      }
      goto LABEL_29;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&pco);
    if ( *(_QWORD *)&pco.rclBounds.top )
    {
      if ( !v22 || !RGNOBJ::bCreate((RGNOBJ *)&v19, (struct EPATHOBJ *)&pco, (const struct EXFORMOBJR *)&v22) )
        goto LABEL_23;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v26, (struct EPATHOBJ *)&pco, 1u, 0LL);
      if ( *(_QWORD *)v26 )
      {
        v3 = v19;
        v19 = *(_QWORD *)v26;
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&pco);
        goto LABEL_9;
      }
    }
    EngSetLastError(8u);
LABEL_23:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&pco);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)&v19);
    return 0LL;
  }
  return v5;
}
