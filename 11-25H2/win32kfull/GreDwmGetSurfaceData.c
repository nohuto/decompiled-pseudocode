/*
 * XREFs of GreDwmGetSurfaceData @ 0x1400949E4
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x14017FAC0 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x14008D504 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008D78C (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x14008E604 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140094B50 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x14009534C (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 */

__int64 __fastcall GreDwmGetSurfaceData(Gre::Base *a1, HLSURF a2, struct tagDWMSURFACEDATA *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rbx
  __int64 v7; // rsi
  Gre::Base *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  SFMLOGICALSURFACE *v11; // rcx
  unsigned int SoSurfaceData; // edi
  struct W32_PUSH_LOCK *v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v16[8]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v18[32]; // [rsp+40h] [rbp-48h] BYREF
  SFMLOGICALSURFACE *v19; // [rsp+60h] [rbp-28h]
  __int64 v20; // [rsp+A8h] [rbp+20h] BYREF

  v6 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v20, v6);
  v7 = *(_QWORD *)v6;
  GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
    (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal,
    *(_QWORD *)v6 + 1040LL);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)&v15, v6, (__int64)a1, 3);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( IsDwmActive(v8) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v15 + 2544) + 96LL) == 6 )
      {
        SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v18, a2, v9, v10);
        v11 = v19;
        if ( v19 )
        {
          v13 = (SFMLOGICALSURFACE *)((char *)v19 + 256);
          if ( v19 != (SFMLOGICALSURFACE *)-256LL )
          {
            GreAcquirePushLockShared((SFMLOGICALSURFACE *)((char *)v19 + 256));
            v11 = v19;
          }
          SoSurfaceData = SFMLOGICALSURFACE::GetSoSurfaceData(v11, a3);
          if ( v13 )
            GreReleasePushLockShared(v13);
        }
        else
        {
          SoSurfaceData = -1073741816;
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v18);
      }
      else
      {
        SoSurfaceData = -1073741811;
      }
    }
    else
    {
      SoSurfaceData = -1071775733;
    }
  }
  else
  {
    SoSurfaceData = -1073741790;
  }
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)v17);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v16);
  GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v7 + 1040);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v20);
  return SoSurfaceData;
}
