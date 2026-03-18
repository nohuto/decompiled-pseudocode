/*
 * XREFs of GreDwmGetRedirectionStyle @ 0x140322D94
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x14017FAC0 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x14008D504 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     ??0ENTER_DWM_CRIT_SPECIAL@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@_N@Z @ 0x14008E500 (--0ENTER_DWM_CRIT_SPECIAL@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@_N@Z.c)
 *     ??0?$SEMOBJSHARED@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008F3D0 (--0-$SEMOBJSHARED@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140094B50 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1401A02F0 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1401A16C0 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmGetRedirectionStyle(Gre::Base *a1, HLSURF a2, enum _HLSURF_REDIRECTIONSTYLE *a3)
{
  unsigned int v6; // ebp
  struct Gre::Base::SESSION_GLOBALS *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  SFMLOGICALSURFACE *v10; // rcx
  struct W32_PUSH_LOCK *v11; // rbx
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v14[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v15[32]; // [rsp+58h] [rbp-40h] BYREF
  SFMLOGICALSURFACE *v16; // [rsp+78h] [rbp-20h]
  __int64 v17; // [rsp+B8h] [rbp+20h] BYREF

  v6 = -1073741811;
  v7 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v13, v7);
  SEMOBJSHARED<6>::SEMOBJSHARED<6>(&v17, v7);
  ENTER_DWM_CRIT_SPECIAL::ENTER_DWM_CRIT_SPECIAL((ENTER_DWM_CRIT_SPECIAL *)v14, v7, (HDEV)a1, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15, a2, v8, v9);
    v10 = v16;
    if ( v16 )
    {
      v11 = (SFMLOGICALSURFACE *)((char *)v16 + 256);
      if ( v16 != (SFMLOGICALSURFACE *)-256LL )
      {
        GreAcquirePushLockShared((SFMLOGICALSURFACE *)((char *)v16 + 256));
        v10 = v16;
      }
      SFMLOGICALSURFACE::GetRedirectionInfo(
        v10,
        a3,
        (unsigned int *)a3 + 1,
        (unsigned int *)a3 + 2,
        (void **)a3 + 3,
        (struct _LUID *)((char *)a3 + 12));
      v6 = 0;
      if ( v11 )
        GreReleasePushLockShared(v11);
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
  }
  else
  {
    v6 = -1073741790;
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v14);
  GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v17);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v13);
  return v6;
}
