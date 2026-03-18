/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x14008B9F0
 * Callers:
 *     GreSelectVisRgnShared @ 0x140089820 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14008AA94 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x14000DD20 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     GreSetRegionOwner @ 0x140015E60 (GreSetRegionOwner.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x140016730 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001AE78 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x14001C880 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046DC8 (--$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     GreGetObjectOwner @ 0x1400BC740 (GreGetObjectOwner.c)
 *     ?vStamp@REGION@@AEAAXXZ @ 0x1400C7DE0 (-vStamp@REGION@@AEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F3AA8 (--$GreAcquireSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x140177110 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140177330 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x140178728 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1401C629C (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1401D07C0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(DC **a1, HRGN a2, int a3)
{
  REGION *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // esi
  _QWORD *v8; // r14
  __int64 v9; // r13
  int v10; // r12d
  int v11; // edx
  unsigned int sizeScan; // eax
  const struct REGION_CORE *v13; // r8
  int v14; // eax
  REGION *v17; // [rsp+28h] [rbp-58h] BYREF
  struct REGION *v18[7]; // [rsp+30h] [rbp-50h] BYREF
  struct _RECTL v19; // [rsp+68h] [rbp-18h] BYREF

  v5 = 0LL;
  W32GetSessionState(a1);
  if ( !*a1 )
    return 0;
  v8 = *(_QWORD **)(W32GetSessionState(v6) + 88);
  v9 = *v8 + 1248LL;
  GreAcquireSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v9);
  v10 = 1;
  v7 = 1;
  DC::vReleaseRao(*a1);
  if ( a2 )
  {
    GreSetRegionOwner((__int64)a2, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a2, 0, 0);
    if ( !v18[0] )
    {
      v5 = (REGION *)v8[520];
      goto LABEL_30;
    }
    if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)*a1, 1LL) != -2147483630
      && !GrepValidateVisRgn(*a1, v18[0], (struct ERECTL *)&v19) )
    {
      RGNOBJ::vSet((RGNOBJ *)v18, &v19);
    }
    v11 = a3;
    switch ( a3 )
    {
      case 1:
        v5 = v18[0];
        v14 = RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v18);
        v11 = 1;
        if ( v14 )
          v18[0] = 0LL;
        else
          v7 = 0;
        break;
      case 2:
        sizeScan = REGION_CORE::get_sizeScan((struct REGION *)((char *)v18[0] + 24));
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17, sizeScan);
        v5 = v17;
        if ( v17 )
          RGNOBJ::vCopy((RGNOBJ *)&v17, (struct RGNOBJ *)v18, v13);
        else
          v5 = (REGION *)v8[520];
LABEL_16:
        v11 = a3;
        break;
      case 4:
        DC::AcquireDcVisRgnExclusive(*a1);
        v5 = (REGION *)*((_QWORD *)*a1 + 142);
        if ( v5 )
        {
          if ( v5 != (REGION *)v8[520] )
          {
            v17 = (REGION *)*((_QWORD *)*a1 + 142);
            RGNOBJAPI::bSwap((RGNOBJAPI *)v18, (struct RGNOBJ *)&v17);
            v5 = v17;
            v10 = 0;
LABEL_14:
            if ( LOBYTE(v19.right) )
              CPushLock::ReleaseLock((CPushLock *)(*(_QWORD *)&v19.left + 1112LL));
            goto LABEL_16;
          }
        }
        else
        {
          v5 = (REGION *)v8[520];
        }
        v7 = 0;
        goto LABEL_14;
    }
    if ( !v7 && v11 == 1 )
    {
LABEL_33:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
      goto LABEL_35;
    }
    if ( !v10 )
    {
LABEL_31:
      DC::AcquireDcVisRgnExclusive(*a1);
      *((_QWORD *)*a1 + 142) = v5;
      REGION::vStamp(v5);
      if ( LOBYTE(v19.right) )
        CPushLock::ReleaseLock((CPushLock *)(*(_QWORD *)&v19.left + 1112LL));
      goto LABEL_33;
    }
LABEL_30:
    DC::vReleaseVis(*a1);
    goto LABEL_31;
  }
  DC::vReleaseVis(*a1);
  DC::bSetDefaultRegion(*a1);
LABEL_35:
  if ( v9 )
    GreReleaseSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v9);
  return v7;
}
