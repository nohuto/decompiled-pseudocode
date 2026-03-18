/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14009CB84
 * Callers:
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x14009CA18 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     GreDeleteSprite @ 0x14009CAE8 (GreDeleteSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1400A1B40 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x14009CE1C (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14009D0A4 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     DwmAsyncDestroySprite @ 0x14009D21C (DwmAsyncDestroySprite.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x14009D2C0 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400A4644 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1400A6C24 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(Gre::Base *a1, Gre::Base *a2, void *a3, int a4)
{
  int v4; // r12d
  int v6; // esi
  void *v7; // r14
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rdi
  struct PDEVOBJ *v12; // rdx
  HSEMAPHORE v13; // rcx
  Gre::Base *v14; // rcx
  __int64 v15; // rbx
  Gre::Base *v16; // rcx
  struct DWMSPRITE *v17; // rsi
  __int64 v18; // rax
  struct Gre::Base::SESSION_GLOBALS *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdi
  void *v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rbx
  unsigned int v25; // r14d
  struct DWMSPRITE *v26; // r8
  __int64 v28; // rax
  Gre::Base *v29; // [rsp+20h] [rbp-50h] BYREF
  char v30[8]; // [rsp+28h] [rbp-48h] BYREF
  HSEMAPHORE v31; // [rsp+30h] [rbp-40h]
  char v32; // [rsp+38h] [rbp-38h]
  _OWORD v33[2]; // [rsp+40h] [rbp-30h] BYREF
  struct DWMSPRITE *v34; // [rsp+60h] [rbp-10h]

  v4 = 1;
  v6 = 1;
  v7 = a3;
  v11 = Gre::Base::Globals(a1);
  if ( !a4 || !IsDwmActive(v10) )
    return (unsigned int)GdiDeleteSprite((HDEV)a1, (HWND)a2, v7);
  v29 = a1;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v30, v12, 0, 0);
  v13 = (HSEMAPHORE)(*(_QWORD *)v11 + 520LL);
  v32 = 0;
  v31 = v13;
  GreAcquireSemaphoreInternal(v13);
  GrepAcquireLockValidate<7>();
  if ( IsDwmActive(v14) )
  {
    v15 = (__int64)v7;
    memset(v33, 0, sizeof(v33));
    PushThreadGuardedObject(
      v33,
      v33,
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
    v17 = 0LL;
    v34 = 0LL;
    if ( a2 )
    {
      v18 = DWMSPRITEREF::hspLookupWindow(a2);
      v17 = v34;
      v15 = v18;
    }
    if ( v15 )
    {
      v19 = Gre::Base::Globals(v16);
      LOBYTE(v20) = 15;
      v17 = (struct DWMSPRITE *)HmgLock(v19, v15, v20, 0LL);
      v34 = v17;
    }
    if ( v17 )
    {
      v21 = *((_QWORD *)v17 + 18);
      v22 = (void *)UserReferenceDwmApiPort(v16);
      v23 = DwmAsyncDestroySprite(v22);
      v24 = *(_QWORD *)(v21 + 184);
      v25 = v23;
      if ( !v24 || !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v24 - 24)) )
        goto LABEL_10;
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v24 + 248));
      if ( *(_DWORD *)(v24 + 300) && (*(_DWORD *)(v24 + 92) & 2) == 0 )
      {
        *((_DWORD *)v17 + 34) |= 0x10u;
        vspRemoveStateReferencesForSprite(v17);
        *(_QWORD *)(v24 + 472) = a1;
        *(_QWORD *)(v24 + 480) = 0LL;
        v28 = *(_QWORD *)v17;
        *(_DWORD *)(v24 + 92) |= 2u;
        *(_DWORD *)(v24 + 496) = 1;
        v4 = 0;
        *(_QWORD *)(v24 + 488) = v28;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v24 + 248));
      if ( v4 )
      {
LABEL_10:
        *((_DWORD *)v17 + 16) = *((_DWORD *)v17 + 14);
        *((_DWORD *)v17 + 17) = *((_DWORD *)v17 + 15);
        v26 = v34;
        if ( v34 )
          _InterlockedDecrement16((volatile signed __int16 *)v34 + 6);
        v34 = 0LL;
        vspDestroyDwmSpriteObjInternal((HDEV)a1, 0, v26);
      }
      v17 = v34;
    }
    else
    {
      v25 = -2143354870;
    }
    if ( v17 )
      _InterlockedDecrement16((volatile signed __int16 *)v17 + 6);
    v34 = 0LL;
    PopThreadGuardedObject(v33);
    v6 = 0;
  }
  else
  {
    v25 = -1071775733;
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)&v29);
  if ( v6 )
  {
    v7 = a3;
    return (unsigned int)GdiDeleteSprite((HDEV)a1, (HWND)a2, v7);
  }
  return v25;
}
