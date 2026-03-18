/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14005AF5C
 * Callers:
 *     GreDeleteSprite @ 0x14005AEC4 (GreDeleteSprite.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1401734FC (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140173B30 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14005B174 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x14005B2D4 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     DwmAsyncDestroySprite @ 0x14005B354 (DwmAsyncDestroySprite.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x14008E444 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FE7C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x140091F30 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400DE2BC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1400DFD0C (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(Gre::Base *a1, HWND a2, HSPRITE a3, int a4)
{
  int v4; // r15d
  int v6; // r12d
  HWND v8; // rdi
  struct Gre::Base::SESSION_GLOBALS *v10; // rsi
  struct PDEVOBJ *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct DWMSPRITE *v14; // rsi
  __int64 v15; // rdi
  void *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rbx
  unsigned int v19; // ebp
  struct DWMSPRITE *v20; // rbx
  __int64 v22; // rax
  _BYTE v23[8]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  char v25; // [rsp+38h] [rbp-60h]
  _BYTE v26[32]; // [rsp+40h] [rbp-58h] BYREF
  struct DWMSPRITE *v27; // [rsp+60h] [rbp-38h]

  v4 = 1;
  v6 = 1;
  v8 = a2;
  v10 = Gre::Base::Globals(a1);
  if ( !a4 || !(unsigned int)((__int64 (*)(void))IsDwmActive)() )
    return (unsigned int)GdiDeleteSprite((HDEV)a1, v8, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v23, v11, 0, 0);
  v24 = *(_QWORD *)v10 + 520LL;
  v25 = 0;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v24);
  if ( (unsigned int)IsDwmActive(v12) )
  {
    v6 = 0;
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v26, v8, a3);
    v14 = v27;
    if ( v27 )
    {
      v15 = *((_QWORD *)v27 + 18);
      v16 = (void *)UserReferenceDwmApiPort(v13);
      v17 = DwmAsyncDestroySprite(v16);
      v18 = *(_QWORD *)(v15 + 184);
      v19 = v17;
      if ( !v18 || !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v18 - 24)) )
        goto LABEL_9;
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 248));
      if ( *(_DWORD *)(v18 + 300) && (*(_DWORD *)(v18 + 92) & 2) == 0 )
      {
        *((_DWORD *)v14 + 35) |= 0x10u;
        vspRemoveStateReferencesForSprite(v14);
        *(_QWORD *)(v18 + 480) = 0LL;
        *(_QWORD *)(v18 + 472) = a1;
        v22 = *(_QWORD *)v14;
        *(_DWORD *)(v18 + 92) |= 2u;
        *(_DWORD *)(v18 + 496) = 1;
        v4 = 0;
        *(_QWORD *)(v18 + 488) = v22;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 248));
      if ( v4 )
      {
LABEL_9:
        *((_DWORD *)v14 + 16) = *((_DWORD *)v14 + 14);
        *((_DWORD *)v14 + 17) = *((_DWORD *)v14 + 15);
        v20 = v27;
        if ( v27 )
          OBJECT::InterlockedDecrementExclusiveLockCount(v27);
        v27 = 0LL;
        vspDestroyDwmSpriteObjInternal((HDEV)a1, 0, v20);
      }
      v8 = a2;
    }
    else
    {
      v19 = -2143354870;
    }
    DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v26);
  }
  else
  {
    v19 = -1071775733;
  }
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)&v24);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v23);
  if ( v6 )
    return (unsigned int)GdiDeleteSprite((HDEV)a1, v8, a3);
  return v19;
}
