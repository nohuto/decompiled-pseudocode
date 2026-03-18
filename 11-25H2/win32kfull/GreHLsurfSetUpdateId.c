/*
 * XREFs of GreHLsurfSetUpdateId @ 0x140323134
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1401A6370 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x14008D504 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x14009344C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x140097B54 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401717F4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ??0?$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14019F830 (--0-$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreHLsurfSetUpdateId(struct W32_PUSH_LOCK *a1, HLSURF a2, __int64 a3)
{
  unsigned int v5; // edi
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  Gre::Base *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  SFMLOGICALSURFACE *v12; // rbx
  struct W32_PUSH_LOCK *v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v16[32]; // [rsp+28h] [rbp-30h] BYREF
  SFMLOGICALSURFACE *v17; // [rsp+48h] [rbp-10h]
  struct W32_PUSH_LOCK *v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v18 = a1;
  v5 = -1071775733;
  if ( IsDwmActive(a1) )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v15);
    v7 = Gre::Base::Globals(v6);
    SEMOBJSHARED<7>::SEMOBJSHARED<7>((HSEMAPHORE *)&v19, v7);
    if ( IsDwmActive(v8) )
    {
      if ( (unsigned int)UserIsCurrentProcessDwm() )
      {
        v5 = -1073741811;
        SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v16, a2, v9, v10);
        v12 = v17;
        if ( v17 )
        {
          v13 = (SFMLOGICALSURFACE *)((char *)v17 + 256);
          v18 = (SFMLOGICALSURFACE *)((char *)v17 + 256);
          if ( v17 != (SFMLOGICALSURFACE *)-256LL )
            GreAcquirePushLockExclusive(v13);
          if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)v13, v11) + 96) + 92LL)
            && *((_QWORD *)v12 + 23)
            && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v12) )
          {
            *((_QWORD *)v12 + 35) = a3;
            v5 = 0;
          }
          Gre::PUSHLOCKEX::vUnlock(&v18, 0);
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v16);
      }
      else
      {
        v5 = -1073741790;
      }
    }
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v19);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v15);
  }
  return v5;
}
