/*
 * XREFs of ?GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z @ 0x1401C306C
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1401C2FC0 (NtGdiCreateBitmapFromDxSurface2.c)
 *     NtGdiCreateBitmapFromDxSurface @ 0x14032A320 (NtGdiCreateBitmapFromDxSurface.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x140017A80 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDwmUseDeviceBitmaps @ 0x1401C3580 (GreDwmUseDeviceBitmaps.c)
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
  __int64 v13; // rdi
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  __int64 v15; // r12
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v19[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v21[32]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-48h]
  _BYTE v23[160]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = 0LL;
  if ( !a2 || !a3 || a3 * (unsigned __int64)a2 > 0xFFFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) == 1 )
    return 0LL;
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v18 = v13;
  if ( (*(_DWORD *)(v13 + 40) & 0x8000) != 0 )
    return 0LL;
  v14 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v20, v14);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v19, a1);
  v15 = **((_QWORD **)a1 + 2);
  GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(v15 + 520));
  GrepAcquireLockValidate<7>();
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23, (struct PDEVOBJ *)&v18);
  if ( (unsigned int)GreDwmUseDeviceBitmaps() )
  {
    v16 = 0LL;
    if ( (*(_DWORD *)(v13 + 2156) & 0x100) == 0 )
      v16 = **(_QWORD **)(v13 + 1792);
    CreateCompatibleSurface(
      (__int64)v21,
      *(_QWORD *)(*(_QWORD *)a1 + 48LL),
      *(_DWORD *)(v13 + 2092),
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
    if ( v22 )
    {
      LOBYTE(v17) = 5;
      HmgSetOwner(*(_QWORD *)(v22 + 32), 2147483650LL, v17);
      v7 = *(_QWORD *)(v22 + 32);
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v21);
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v23);
  GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v15 + 520);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v19);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v20);
  return v7;
}
