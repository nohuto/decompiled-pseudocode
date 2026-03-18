/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x14001BBB0
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     zzzDecomposeDesktop @ 0x1401229EC (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B040 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14001B08C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B208 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14001B280 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D260 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x14001D2A8 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x14001D2DC (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     IsWindowContentProtected @ 0x14001D640 (IsWindowContentProtected.c)
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14001D774 (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140031C80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetLayeredOrRedirectedParent @ 0x140033E50 (GetLayeredOrRedirectedParent.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400DAB80 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ??$GreAcquireSemaphore@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z @ 0x1400DC104 (--$GreAcquireSemaphore@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400DD91C (--$GreReleaseSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall GreUpdateSpriteVisRgn(Gre::Base *a1, unsigned int a2)
{
  Gre::Base *v2; // rsi
  unsigned int v3; // r14d
  struct Gre::Base::SESSION_GLOBALS *v4; // r12
  HSEMAPHORE v5; // rdi
  Gre::Base *v6; // rcx
  __int64 v7; // rdx
  Gre::Base *v8; // rcx
  unsigned int v9; // r15d
  __int64 *CurrentThreadNonPaged; // rax
  Gre::Base *v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rax
  HSEMAPHORE v14; // rcx
  Gre::Base *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // rsi
  HRGN *v20; // r13
  __int64 UserSessionState; // rbx
  __int64 v22; // rbx
  const struct tagWND **v23; // r14
  const struct tagWND *v24; // rbx
  __int64 v25; // rdx
  char v26; // r14
  int v27; // ebx
  bool v28; // zf
  bool v29; // cl
  HSEMAPHORE v30; // rbx
  struct _GRETHREAD *v31; // rax
  struct _GRETHREAD *v32; // rax
  BOOL v33; // esi
  __int64 v34; // r14
  void *v35; // rbx
  Win32kRS *v36; // rbx
  const struct REGION_CORE *v37; // rdx
  __int64 v38; // r14
  const struct BaseRustGlobals *BaseRustGlobals; // rsi
  char *v40; // rbx
  const struct tagWND *v41; // rsi
  unsigned int v42; // r14d
  __int64 v43; // rcx
  char v44; // al
  const struct tagWND *v45; // r13
  __int64 v46; // rcx
  __int64 LayeredOrRedirectedParent; // rax
  __int64 v48; // rbx
  __int64 v49; // rsi
  int v50; // eax
  __int64 v51; // rax
  Gre::Base *v52; // [rsp+28h] [rbp-69h] BYREF
  unsigned int v53; // [rsp+30h] [rbp-61h]
  HSEMAPHORE v54; // [rsp+38h] [rbp-59h] BYREF
  HRGN *v55; // [rsp+40h] [rbp-51h]
  _BYTE v56[22]; // [rsp+48h] [rbp-49h] BYREF
  __int128 v57; // [rsp+5Eh] [rbp-33h]
  __int16 v58; // [rsp+6Eh] [rbp-23h]
  int v59; // [rsp+70h] [rbp-21h]
  __int64 v60; // [rsp+74h] [rbp-1Dh]
  BOOL v61; // [rsp+7Ch] [rbp-15h]
  Gre::Base *v62; // [rsp+80h] [rbp-11h]
  Gre::Base *v63; // [rsp+88h] [rbp-9h]
  int v64; // [rsp+90h] [rbp-1h] BYREF
  HSEMAPHORE v65; // [rsp+98h] [rbp+7h] BYREF
  char v66; // [rsp+A0h] [rbp+Fh]
  __int128 v67; // [rsp+A8h] [rbp+17h] BYREF

  v2 = a1;
  v3 = a2;
  v53 = a2;
  v62 = a1;
  v4 = Gre::Base::Globals(a1);
  v5 = (HSEMAPHORE)(*(_QWORD *)v4 + 1144LL);
  v54 = v5;
  GreAcquireSemaphoreInternal(v5);
  GrepAcquireLockValidate<2>();
  v9 = 0;
  if ( *((_QWORD *)Gre::Base::Globals(v6) + 17) )
  {
    v63 = v2;
    v64 = 0;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v8, v7);
    if ( !CurrentThreadNonPaged
      || (v12 = *CurrentThreadNonPaged) == 0
      || (v51 = v12 + 8) == 0
      || !*(_DWORD *)(v51 + 348) && !*(_DWORD *)(v51 + 352) )
    {
      v13 = (__int64 *)Gre::Base::Globals(v11);
      GreAcquireSemaphore<6,>(v13);
      v64 = 1;
    }
    v14 = (HSEMAPHORE)(*(_QWORD *)v4 + 520LL);
    v66 = 0;
    v65 = v14;
    GreAcquireSemaphoreInternal(v14);
    GrepAcquireLockValidate<7>();
    if ( *((_QWORD *)Gre::Base::Globals(v15) + 17) )
    {
      v16 = *((_QWORD *)v4 + 17);
      v17 = *(_QWORD *)(v16 + 80);
      if ( v17 != v16 + 80 )
      {
        while ( 1 )
        {
          v18 = (__int64 *)(v17 - 24);
          if ( !v17 )
            v18 = 0LL;
          if ( !v18 )
          {
LABEL_24:
            v2 = v62;
            v3 = v53;
            goto LABEL_25;
          }
          v19 = v18[5];
          if ( v19 )
            break;
LABEL_23:
          v16 = *((_QWORD *)v4 + 17);
          v17 = v18[3];
          if ( v17 == v16 + 80 )
            goto LABEL_24;
        }
        v20 = (HRGN *)(v16 + 184);
        v55 = (HRGN *)(v16 + 184);
        W32GetCurrentThreadNonPaged(v17, v16);
        if ( (unsigned __int64)(unsigned __int16)v19 >= *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 19872) + 8LL)
          || (UserSessionState = W32GetUserSessionState(),
              v22 = *(_DWORD *)(W32GetUserSessionState() + 19896) * (unsigned int)(unsigned __int16)v19
                  + *(_QWORD *)(UserSessionState + 19888),
              v23 = (const struct tagWND **)HMPkheFromPhe(v22),
              LOWORD(v19) = WORD1(v19) & 0x7FFF,
              (WORD1(v19) & 0x7FFF) != *(_WORD *)(v22 + 26))
          && (_WORD)v19 != 0x7FFF
          && ((_WORD)v19 || !PsGetCurrentProcessWow64Process())
          || (*(_BYTE *)(v22 + 25) & 1) != 0
          || *(_BYTE *)(v22 + 24) != 1
          || (v24 = *v23) == 0LL )
        {
          v27 = 0;
          goto LABEL_21;
        }
        if ( (*(_DWORD *)(*((_QWORD *)v24 + 5) + 232LL) & 2) == 0
          || _GhostWindowFromHungWindow(*v23)
          || (unsigned int)IsWindowContentProtected(v24) )
        {
          v25 = *((_QWORD *)v24 + 5);
          v26 = *(_BYTE *)(v25 + 31);
          if ( (*(_BYTE *)(v25 + 26) & 0x20) != 0 )
          {
            if ( (v26 & 0x10) != 0 )
            {
              SetRectRgnIndirect(*v20, v25 + 88);
              v27 = 1;
            }
            else
            {
LABEL_68:
              v27 = 0;
            }
          }
          else
          {
            v41 = v24;
            v42 = (4 * (v26 & 4)) | 0x4401;
            while ( v24 )
            {
              v43 = *((_QWORD *)v24 + 5);
              v44 = *(_BYTE *)(v43 + 31);
              if ( (v44 & 0x10) == 0 || (v44 & 0x20) != 0 && v24 != v41 )
              {
LABEL_67:
                v67 = 0LL;
                SetOrCreateRectRgnIndirectPublic(v20, &v67);
                goto LABEL_68;
              }
              if ( (*(_WORD *)(v43 + 42) & 0x2FFF) == 0x29D )
                break;
              v24 = (const struct tagWND *)*((_QWORD *)v24 + 13);
            }
            W32GetUserSessionState();
            v45 = v41;
            while ( 1 )
            {
              v46 = *((_QWORD *)v41 + 5);
              if ( (*(_BYTE *)(v46 + 27) & 0x20) != 0 )
                break;
              v41 = (const struct tagWND *)*((_QWORD *)v41 + 13);
              if ( !v41 )
                goto LABEL_84;
            }
            if ( (v41 == v45 || (*(_WORD *)(v46 + 42) & 0x2FFF) != 0x29D) && v41 && !GetRedirectionBitmap(v41) )
            {
              v20 = v55;
              goto LABEL_67;
            }
LABEL_84:
            W32GetUserSessionState();
            UpdatesLockedForDwm();
            LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(v45);
            v48 = LayeredOrRedirectedParent;
            if ( LayeredOrRedirectedParent )
            {
              v49 = *(_QWORD *)(LayeredOrRedirectedParent + 40);
              if ( GetRedirectionBitmap(LayeredOrRedirectedParent) )
              {
                if ( (*(_DWORD *)(v49 + 24) & 0x20000000) != 0 )
                {
                  v50 = *(_DWORD *)(v49 + 232);
                  if ( (v50 & 2) != 0 && (v50 & 1) == 0 && (*(_DWORD *)(v48 + 380) & 0x20000000) == 0 )
                    v42 &= ~0x4000u;
                }
              }
            }
            v27 = CalcVisRgnWorker(v45, v55, v42);
          }
        }
        else
        {
          SetRectRgnIndirect(*v20, *((_QWORD *)v24 + 5) + 88LL);
          v27 = 1;
        }
        v28 = v27 == 0;
        if ( !v27 )
          goto LABEL_22;
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v56, *(HRGN *)(*((_QWORD *)v4 + 17) + 184LL), 0, 0);
        if ( !*(_QWORD *)v56 )
        {
LABEL_20:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v56);
LABEL_21:
          v28 = v27 == 0;
LABEL_22:
          v29 = !v28;
          if ( !v28 != (*((_BYTE *)v18 + 140) & 1) )
          {
            v33 = v29;
            *((_DWORD *)v18 + 35) = v29 | *((_DWORD *)v18 + 35) & 0xFFFFFFFE;
            v34 = *v18;
            v35 = (void *)UserReferenceDwmApiPort();
            IncrementDWMWindowUniqueness();
            if ( v35 )
            {
              v58 = 0;
              *(_DWORD *)v56 = 3670032;
              v59 = 1073741831;
              *(_WORD *)&v56[4] = 0x8000;
              v60 = v34;
              *(_OWORD *)&v56[6] = 0LL;
              v61 = v33;
              v57 = 0LL;
              EtwUpdateEvent(v34, 1073741831LL);
              LpcRequestPort(v35, v56);
              ObfDereferenceObject(v35);
            }
          }
          goto LABEL_23;
        }
        if ( GetBaseRustGlobals() )
        {
          v38 = *(_QWORD *)v56 + 24LL;
          if ( !*(_QWORD *)v56 )
            v38 = 0LL;
          BaseRustGlobals = GetBaseRustGlobals();
          v40 = (char *)BaseRustGlobals + 8;
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx((char *)BaseRustGlobals + 8, 2LL);
          LODWORD(BaseRustGlobals) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)BaseRustGlobals + 72LL))(v38);
          ExReleasePushLockSharedEx(v40, 2LL);
          KeLeaveCriticalRegion();
          if ( (_DWORD)BaseRustGlobals != 1 )
            goto LABEL_59;
        }
        else if ( *(_DWORD *)(*(_QWORD *)v56 + 48LL) != 1 )
        {
          v36 = (Win32kRS *)(*(_QWORD *)v56 + 24LL);
          if ( GetBaseRustGlobals() )
            Win32kRS::RegionCore_get_sizeScan(v36, v37);
LABEL_59:
          v27 = 1;
          goto LABEL_20;
        }
        v27 = 0;
        goto LABEL_20;
      }
    }
LABEL_25:
    SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(&v65);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v64);
    v5 = v54;
  }
  v52 = v2;
  Gre::Base::Globals(v8);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v54, (struct PDEVOBJ *)&v52);
  if ( ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v2 + 25)) )
  {
    if ( !*((_BYTE *)v2 + 208) )
      GreReleaseSemaphoreCommon<9,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, *((_QWORD *)v2 + 25));
    v30 = (HSEMAPHORE)*((_QWORD *)v52 + 6);
    GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      (__int64)v30);
    if ( !*((_BYTE *)v2 + 208) )
      GreAcquireSemaphore<9,HSEMAPHORE__ *>(*((_QWORD *)v2 + 25));
  }
  else
  {
    v30 = (HSEMAPHORE)*((_QWORD *)v52 + 6);
    GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      (__int64)v30);
  }
  if ( *((_DWORD *)v2 + 35) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*((_QWORD *)v2 + 18) + 8LL * v9++), v3);
    while ( v9 < *((_DWORD *)v2 + 35) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*((HDEV *)v2 + 10), v3);
  }
  if ( v30 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DevLock", v30);
    v31 = GreGetCurrentThreadCrossSessionCheck();
    if ( v31 )
    {
      v28 = (*((_BYTE *)v31 + 16))-- == 1;
      if ( v28 )
        *(_QWORD *)v31 &= ~0x100uLL;
      if ( !*(_QWORD *)v31 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v30);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v54);
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreLock", v5);
    v32 = GreGetCurrentThreadCrossSessionCheck();
    if ( v32 )
    {
      v28 = (*((_BYTE *)v32 + 10))-- == 1;
      if ( v28 )
        *(_QWORD *)v32 &= ~4uLL;
      if ( !*(_QWORD *)v32 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v5);
  }
}
