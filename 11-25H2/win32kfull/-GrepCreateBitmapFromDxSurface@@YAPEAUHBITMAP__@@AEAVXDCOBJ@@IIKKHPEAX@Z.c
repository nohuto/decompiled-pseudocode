/*
 * XREFs of ?GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z @ 0x1401D2F9C
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1401D2EF0 (NtGdiCreateBitmapFromDxSurface2.c)
 *     NtGdiCreateBitmapFromDxSurface @ 0x140338F80 (NtGdiCreateBitmapFromDxSurface.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x14007DE28 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     GreDwmUseDeviceBitmaps @ 0x14007E3D0 (GreDwmUseDeviceBitmaps.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FE7C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GrepCreateBitmapFromDxSurface(
        struct XDCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int a6,
        void *a7)
{
  __int64 v7; // rbx
  __int64 v12; // rdi
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v19; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v20[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v21; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v22[32]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-48h]
  _BYTE v24[144]; // [rsp+C8h] [rbp-40h] BYREF

  v7 = 0LL;
  if ( !a2 || !a3 || a3 * (unsigned __int64)a2 > 0xFFFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) == 1 )
    return 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v19 = v12;
  if ( (*(_DWORD *)(v12 + 40) & 0x8000) != 0 )
    return 0LL;
  v13 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v21, v13);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v20, a1);
  v14 = **((_QWORD **)a1 + 2);
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
    (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal,
    v14 + 520);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&v19);
  if ( (unsigned int)GreDwmUseDeviceBitmaps(v15) )
  {
    v16 = 0LL;
    if ( (*(_DWORD *)(v12 + 2156) & 0x100) == 0 )
      v16 = **(_QWORD **)(v12 + 1792);
    CreateCompatibleSurface(
      (SURFREF *)v22,
      *(_QWORD *)(*(_QWORD *)a1 + 48LL),
      *(_DWORD *)(v12 + 2092),
      v16,
      a2,
      a3,
      1u,
      0,
      0,
      0,
      1,
      a6,
      0,
      a4,
      a5,
      (__int64)a7);
    if ( v23 )
    {
      LOBYTE(v17) = 5;
      HmgSetOwner(*(_QWORD *)(v23 + 32), 2147483650LL, v17);
      v7 = *(_QWORD *)(v23 + 32);
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v22);
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v24);
  GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v14 + 520);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v20);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v21);
  return v7;
}
