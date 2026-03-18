/*
 * XREFs of GreAdjustSpriteDirtyAccum @ 0x1400579A0
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140057D28 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FE7C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x140095554 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x140329D94 (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 */

__int64 __fastcall GreAdjustSpriteDirtyAccum(
        HDEV a1,
        HWND a2,
        struct _RECTL *a3,
        __int64 a4,
        struct _POINTL *a5,
        struct _POINTL *a6)
{
  unsigned int v6; // r15d
  struct _RECTL *v7; // rdi
  HWND v8; // rbx
  HDEV v9; // rsi
  int v10; // r13d
  Gre::Base *v11; // rcx
  struct _RECTL *v12; // r9
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v17; // [rsp+30h] [rbp-18h] BYREF
  struct REGION *v18[2]; // [rsp+38h] [rbp-10h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+60h] BYREF

  v22 = a4;
  v6 = 0;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  v10 = 1;
  if ( !(unsigned int)IsDwmActive() )
    return (unsigned int)GdiAdjustSpriteDirtyAccum(v9, v8, v7, v12, a5, a6);
  v13 = *(_QWORD *)Gre::Base::Globals(v11);
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreSharedInternal, v13 + 520);
  if ( (unsigned int)IsDwmActive() )
  {
    v10 = 0;
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v22, v8);
    v14 = v22;
    if ( v22 )
    {
      v15 = *(_QWORD *)(v22 + 144);
      if ( v22 != -88 )
        GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v22 + 88));
      if ( v15 != -256 )
        GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 256));
      if ( *(_QWORD *)(v15 + 80) )
      {
        v18[0] = *(struct REGION **)(v15 + 80);
        Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v17);
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v17, 0x70u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
        Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v22);
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v22, 0x70u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v22);
        if ( v18[0] )
        {
          if ( v17 )
          {
            if ( v22 )
            {
              if ( RGNOBJ::bOffset((RGNOBJ *)v18, a5) )
              {
                RGNOBJ::vSet((RGNOBJ *)&v17, a3);
                if ( RGNOBJ::bMerge((RGNOBJ *)&v22, (struct RGNOBJ *)v18, (struct RGNOBJ *)&v17, 8u) )
                {
                  RGNOBJ::vSwap((RGNOBJ *)&v22, (struct RGNOBJ *)v18);
                  SFMLOGICALSURFACE::vDirtyRegionAccum((SFMLOGICALSURFACE *)v15, v18[0]);
                  v6 = 1;
                }
              }
            }
          }
        }
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v22);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v17);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
      }
      if ( v15 != -256 )
        GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 256));
      if ( v14 != -88 )
        GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v14 + 88));
      v9 = a1;
      v7 = a3;
      if ( v14 )
        DEC_SHARE_REF_CNT(v14);
    }
    v8 = a2;
  }
  GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v13 + 520);
  if ( v10 )
    return (unsigned int)GdiAdjustSpriteDirtyAccum(v9, v8, v7, v12, a5, a6);
  return v6;
}
