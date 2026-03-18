/*
 * XREFs of GreSfmRegisterLogicalSurfaceForSignaling @ 0x1401A6988
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1401A6370 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FE7C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x14009797C (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x140099690 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z @ 0x1401A6A38 (-SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z.c)
 */

__int64 __fastcall GreSfmRegisterLogicalSurfaceForSignaling(Gre::Base *a1, int a2)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  SFMLOGICALSURFACE *v8; // [rsp+40h] [rbp-18h]

  v4 = *(_QWORD *)Gre::Base::Globals(a1) + 520LL;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v4);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((__int64)v7, (HLSURF)a1);
    if ( v8 )
      v5 = SFMLOGICALSURFACE::SignalOnDirty(v8, a2);
    else
      v5 = -1073741816;
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v7);
  }
  else
  {
    v5 = -1073741790;
  }
  if ( v4 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v4);
  return v5;
}
