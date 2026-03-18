/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     UnsetLayeredWindow @ 0x14005AAD8 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x140063BF8 (zzzUpdateWindowsAfterModeChange.c)
 *     _SetLayeredWindowAttributes @ 0x1400E1004 (_SetLayeredWindowAttributes.c)
 *     zzzLockWindowUpdate2 @ 0x1401558AC (zzzLockWindowUpdate2.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1401DB0A4 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzResetSharedDesktops @ 0x1402557F0 (zzzResetSharedDesktops.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 *     xxxMinimizeHungWindow @ 0x14026BDFC (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B040 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14001B08C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B208 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14001B280 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     GreClientRgnUpdated @ 0x14001B35C (GreClientRgnUpdated.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
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
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     InvalidateDCE @ 0x14005A254 (InvalidateDCE.c)
 *     SpbCheckDce @ 0x14005A370 (SpbCheckDce.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400DAB80 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ??$GreAcquireSemaphore@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z @ 0x1400DC104 (--$GreAcquireSemaphore@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400DD91C (--$GreReleaseSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     InvalidateGDIWindows @ 0x14026E8E4 (InvalidateGDIWindows.c)
 *     ??$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14026F428 (--$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBA.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(ULONG_PTR a1, __int64 a2, int *a3)
{
  char v4; // r12
  ULONG_PTR v5; // r14
  __int64 *CurrentThreadNonPaged; // rax
  ULONG_PTR v7; // r15
  __int64 v8; // rdi
  __int64 UserSessionState; // rax
  Gre::Base *v10; // rcx
  LONG v11; // r8d
  LONG v12; // r9d
  LONG v13; // edx
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdi
  int v17; // r13d
  __int64 *v18; // rsi
  unsigned int v19; // esi
  __int64 v20; // rbx
  int v21; // ecx
  int v22; // edx
  void (__fastcall *v23)(_QWORD, struct _RECTL *); // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *i; // rbx
  int v27; // edx
  __int64 v28; // rdx
  __int64 j; // rax
  int v30; // r8d
  __int64 v31; // r10
  __int64 v32; // r9
  int v33; // edx
  bool v34; // zf
  __int64 v35; // rax
  int v36; // r12d
  unsigned int v37; // ebx
  unsigned int v38; // r13d
  Gre::Base *v39; // rcx
  ULONG_PTR v40; // r14
  struct Gre::Base::SESSION_GLOBALS *v41; // r12
  HSEMAPHORE v42; // rsi
  Gre::Base *v43; // rcx
  __int64 v44; // rdx
  Gre::Base *v45; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  Gre::Base *v47; // rcx
  __int64 *v48; // rax
  HSEMAPHORE v49; // rcx
  Gre::Base *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 *v53; // rdi
  __int64 v54; // rsi
  _QWORD *v55; // r13
  __int64 v56; // rbx
  __int64 v57; // rbx
  const struct tagWND **v58; // r14
  const struct tagWND *v59; // rbx
  __int64 v60; // rdx
  char v61; // r14
  int v62; // ebx
  __int64 v63; // r8
  bool v64; // zf
  bool v65; // cl
  HSEMAPHORE v66; // rbx
  struct _GRETHREAD *v67; // rax
  struct _GRETHREAD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  ULONG_PTR *v72; // rax
  BOOL v74; // esi
  __int64 v75; // r14
  void *v76; // rbx
  Win32kRS *v77; // rbx
  const struct REGION_CORE *v78; // rdx
  __int64 v79; // r14
  const struct BaseRustGlobals *BaseRustGlobals; // rsi
  char *v81; // rbx
  const struct tagWND *v82; // rsi
  unsigned int v83; // r14d
  __int64 v84; // rcx
  char v85; // al
  unsigned int v86; // edi
  const struct tagWND *v87; // r13
  __int64 v88; // rcx
  __int64 LayeredOrRedirectedParent; // rax
  __int64 v90; // rbx
  __int64 v91; // rsi
  int v92; // eax
  ULONG_PTR v93; // rdx
  unsigned __int8 v94; // dl
  void (__fastcall *v95)(_QWORD, int *); // r13
  __int64 v96; // [rsp+28h] [rbp-E0h] BYREF
  struct _RECTL v97; // [rsp+38h] [rbp-D0h]
  __int64 v98; // [rsp+48h] [rbp-C0h]
  _BYTE v99[22]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v100; // [rsp+66h] [rbp-A2h]
  __int16 v101; // [rsp+76h] [rbp-92h]
  int v102; // [rsp+78h] [rbp-90h]
  __int64 v103; // [rsp+7Ch] [rbp-8Ch]
  BOOL v104; // [rsp+84h] [rbp-84h]
  char v105[8]; // [rsp+88h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+90h] [rbp-78h] BYREF
  int v107; // [rsp+A8h] [rbp-60h] BYREF
  HSEMAPHORE v108; // [rsp+B0h] [rbp-58h] BYREF
  char v109; // [rsp+B8h] [rbp-50h]
  struct _RECTL v110; // [rsp+C8h] [rbp-40h] BYREF
  struct _RECTL v111; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v112; // [rsp+E8h] [rbp-20h] BYREF

  v4 = a2;
  v5 = a1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v7 = 0LL;
  if ( CurrentThreadNonPaged )
    v8 = *CurrentThreadNonPaged;
  else
    v8 = 0LL;
  BugCheckParameter3[0] = *(_QWORD *)(v8 + 456);
  *(_QWORD *)(v8 + 456) = BugCheckParameter3;
  BugCheckParameter3[1] = v5;
  HMLockObject(v5);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 528), 0, 0) & 0x8000) == 0 && (v4 & 0x10) == 0 )
    GenerateMouseMove(0LL);
  if ( (v4 & 1) != 0 )
  {
    v4 = 0;
    if ( *(_QWORD *)(v5 + 104) )
    {
      if ( v5 != GetDesktopWindow(v5) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v93 + 40) + 31LL) & 2) != 0 )
        {
          v4 = 4;
          v5 = v93;
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 4) != 0 )
        {
          v4 = 2;
          v5 = v93;
        }
      }
    }
  }
  if ( a3 )
  {
    UserSessionState = W32GetUserSessionState();
    v10 = (Gre::Base *)(unsigned int)a3[2];
    v11 = a3[3];
    v12 = v11;
    v13 = a3[1];
    v14 = *(_QWORD *)(UserSessionState + 56968);
    v15 = *a3;
    *(_QWORD *)&v97.left = __PAIR64__(v13, v15);
    v16 = *(_QWORD *)(v14 + 48);
    *(_QWORD *)&v97.right = __PAIR64__(v11, (unsigned int)v10);
    if ( v15 > (int)v10 )
    {
      v97.right = v15;
      v97.left = (int)v10;
    }
    v17 = (int)v10;
    if ( v15 <= (int)v10 )
    {
      v17 = v15;
      v15 = (int)v10;
    }
    if ( v13 > v11 )
    {
      v12 = v13;
      v97.bottom = v13;
      v13 = v11;
      v97.top = v11;
    }
    if ( v17 < v15 && v13 < v12 )
    {
      v18 = (__int64 *)Gre::Base::Globals(v10);
      if ( *(_DWORD *)(v16 + 140) )
      {
        v96 = 0LL;
        if ( !(unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>(v18) )
        {
          GreAcquireSemaphore<6,>(v18);
          v96 = 1LL;
        }
        v19 = 0;
        if ( *(_DWORD *)(v16 + 140) )
        {
          do
          {
            v20 = *(_QWORD *)(*(_QWORD *)(v16 + 144) + 8LL * v19);
            v110 = v97;
            v21 = *(_DWORD *)(v20 + 2576);
            v22 = *(_DWORD *)(v20 + 2580);
            v110.right = v97.right - v21;
            v110.top = v97.top - v22;
            v110.bottom = v97.bottom - v22;
            v110.left = v17 - v21;
            if ( bIntersect(&v110, (const struct _RECTL *)(v20 + 120), &v111) )
            {
              if ( v96 && !*(_BYTE *)(v20 + 208) )
                GreAcquireSemaphore<9,HSEMAPHORE__ *>(*(_QWORD *)(v20 + 200));
              v23 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(v20 + 3488);
              if ( v23 )
                v23(*(_QWORD *)(v20 + 1784), &v111);
            }
            ++v19;
          }
          while ( v19 < *(_DWORD *)(v16 + 140) );
          v7 = 0LL;
        }
      }
      else
      {
        v95 = *(void (__fastcall **)(_QWORD, int *))(v16 + 3488);
        if ( !(unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>(v18) )
        {
          GreAcquireSemaphore<6,>(v18);
          if ( !*(_BYTE *)(v16 + 208) )
            GreAcquireSemaphore<9,HSEMAPHORE__ *>(*(_QWORD *)(v16 + 200));
        }
        if ( v95 )
          v95(*(_QWORD *)(v16 + 1784), a3);
      }
    }
  }
  v24 = W32GetUserSessionState();
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v24 + 56968) + 48LL));
  v25 = W32GetUserSessionState();
  GreLockVisRgnPublish(*(_QWORD *)(*(_QWORD *)(v25 + 56968) + 48LL));
  for ( i = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState() + 56968) + 24LL);
        i != (__int64 *)(*(_QWORD *)(W32GetUserSessionState() + 56968) + 24LL);
        i = (__int64 *)*i )
  {
    v27 = *((_DWORD *)i + 12);
    if ( (v27 & 0x400800) == 0 )
    {
      if ( (v27 & 3) == 0 )
      {
        v63 = i[10];
        if ( (*(_BYTE *)(*(_QWORD *)(v63 + 40) + 31LL) & 2) != 0 )
        {
          v27 |= 8u;
          *((_DWORD *)i + 12) = v27;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v63 + 40) + 31LL) & 0x20) != 0 )
          *((_DWORD *)i + 12) = v27 & 0xFFFFFFF7;
      }
      v28 = i[10];
      for ( j = v28; j; j = *(_QWORD *)(j + 104) )
      {
        if ( j == v5 )
        {
          if ( v5 != v28 || (v4 & 2) == 0 && ((i[6] & 1) == 0 || (v4 & 4) == 0) )
          {
            v30 = *((_DWORD *)i + 12);
            if ( (v30 & 0x1000) != 0 )
            {
              v31 = i[11];
              if ( v30 >= 0 )
              {
                v30 &= 0xFFFFFFE7;
                v32 = v28 + 40;
                *((_DWORD *)i + 12) = v30;
                if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v28 + 136) + 8LL) + 8LL) >= 0
                  || (v94 = *(_BYTE *)(*(_QWORD *)(v31 + 40) + 31LL),
                      ((*(_BYTE *)(*(_QWORD *)v32 + 31LL) ^ v94) & 0x10) != 0) )
                {
                  v33 = v30;
                  if ( (*(_BYTE *)(*(_QWORD *)v32 + 31LL) & 0x22) == 2 )
                  {
                    v33 = v30 | 8;
                    *((_DWORD *)i + 12) = v30 | 8;
                  }
                  v30 = v33;
                  v34 = (*(_BYTE *)(*(_QWORD *)v32 + 31LL) & 4) == 0;
                }
                else
                {
                  v34 = (v94 & 4) == 0;
                }
                if ( !v34 )
                  v30 |= 0x10u;
              }
              *((_DWORD *)i + 12) = v30 | 0x2000;
              UserSetDCVisRgn(i);
            }
            else
            {
              SpbCheckDce(i);
              InvalidateDCE(i);
            }
          }
          break;
        }
      }
    }
  }
  v35 = W32GetUserSessionState();
  GreUnlockVisRgnPublish(*(_QWORD *)(*(_QWORD *)(v35 + 56968) + 48LL));
  v36 = v4 & 8;
  v37 = v36 != 0 ? 2 : 0;
  if ( *(_DWORD *)(W32GetUserSessionState() + 43272) )
  {
    InvalidateGDIWindows(v5);
    v37 |= 1u;
  }
  GreClientRgnUpdated((Gre::Base *)v37);
  v38 = v36 != 0 ? 4 : 0;
  LODWORD(v98) = v38;
  v39 = *(Gre::Base **)(W32GetUserSessionState() + 56968);
  v40 = *((_QWORD *)v39 + 6);
  *(_QWORD *)&v97.left = v40;
  v41 = Gre::Base::Globals(v39);
  v42 = (HSEMAPHORE)(*(_QWORD *)v41 + 1144LL);
  *(_QWORD *)&v110.left = v42;
  GreAcquireSemaphoreInternal(v42);
  GrepAcquireLockValidate<2>();
  if ( *((_QWORD *)Gre::Base::Globals(v43) + 17) )
  {
    BugCheckParameter3[2] = v40;
    v107 = 0;
    CurrentThread = GreGetCurrentThread((__int64)v45, v44);
    if ( !CurrentThread || !*((_DWORD *)CurrentThread + 87) && !*((_DWORD *)CurrentThread + 88) )
    {
      v48 = (__int64 *)Gre::Base::Globals(v47);
      GreAcquireSemaphore<6,>(v48);
      v107 = 1;
    }
    v49 = (HSEMAPHORE)(*(_QWORD *)v41 + 520LL);
    v109 = 0;
    v108 = v49;
    GreAcquireSemaphoreInternal(v49);
    GrepAcquireLockValidate<7>();
    if ( *((_QWORD *)Gre::Base::Globals(v50) + 17) )
    {
      v51 = *((_QWORD *)v41 + 17);
      v52 = *(_QWORD *)(v51 + 80);
      if ( v52 != v51 + 80 )
      {
        while ( 1 )
        {
          v53 = (__int64 *)(v52 - 24);
          if ( !v52 )
            v53 = 0LL;
          if ( !v53 )
          {
LABEL_77:
            v42 = *(HSEMAPHORE *)&v110.left;
            v40 = *(_QWORD *)&v97.left;
            v38 = v98;
            goto LABEL_78;
          }
          v54 = v53[5];
          if ( v54 )
            break;
LABEL_76:
          v51 = *((_QWORD *)v41 + 17);
          v52 = v53[3];
          if ( v52 == v51 + 80 )
            goto LABEL_77;
        }
        v55 = (_QWORD *)(v51 + 184);
        *(_QWORD *)&v111.left = v51 + 184;
        W32GetCurrentThreadNonPaged(v52, v51);
        if ( (unsigned __int64)(unsigned __int16)v54 >= *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 19872) + 8LL)
          || (v56 = W32GetUserSessionState(),
              v57 = *(_DWORD *)(W32GetUserSessionState() + 19896) * (unsigned int)(unsigned __int16)v54
                  + *(_QWORD *)(v56 + 19888),
              v58 = (const struct tagWND **)HMPkheFromPhe(v57),
              LOWORD(v54) = WORD1(v54) & 0x7FFF,
              (WORD1(v54) & 0x7FFF) != *(_WORD *)(v57 + 26))
          && (_WORD)v54 != 0x7FFF
          && ((_WORD)v54 || !PsGetCurrentProcessWow64Process())
          || (*(_BYTE *)(v57 + 25) & 1) != 0
          || *(_BYTE *)(v57 + 24) != 1
          || (v59 = *v58) == 0LL )
        {
          v62 = 0;
          goto LABEL_74;
        }
        if ( (*(_DWORD *)(*((_QWORD *)v59 + 5) + 232LL) & 2) == 0
          || _GhostWindowFromHungWindow(*v58)
          || (unsigned int)IsWindowContentProtected(v59) )
        {
          v60 = *((_QWORD *)v59 + 5);
          v61 = *(_BYTE *)(v60 + 31);
          if ( (*(_BYTE *)(v60 + 26) & 0x20) != 0 )
          {
            if ( (v61 & 0x10) != 0 )
            {
              SetRectRgnIndirect(*v55, v60 + 88);
              v62 = 1;
            }
            else
            {
LABEL_123:
              v62 = 0;
            }
          }
          else
          {
            v82 = v59;
            v83 = (4 * (v61 & 4)) | 0x4401;
            while ( v59 )
            {
              v84 = *((_QWORD *)v59 + 5);
              v85 = *(_BYTE *)(v84 + 31);
              if ( (v85 & 0x10) == 0 || (v85 & 0x20) != 0 && v59 != v82 )
              {
LABEL_122:
                v112 = 0LL;
                SetOrCreateRectRgnIndirectPublic(v55, &v112);
                goto LABEL_123;
              }
              if ( (*(_WORD *)(v84 + 42) & 0x2FFF) == 0x29D )
                break;
              v59 = (const struct tagWND *)*((_QWORD *)v59 + 13);
            }
            W32GetUserSessionState();
            v87 = v82;
            while ( 1 )
            {
              v88 = *((_QWORD *)v82 + 5);
              if ( (*(_BYTE *)(v88 + 27) & 0x20) != 0 )
                break;
              v82 = (const struct tagWND *)*((_QWORD *)v82 + 13);
              if ( !v82 )
                goto LABEL_141;
            }
            if ( (v82 == v87 || (*(_WORD *)(v88 + 42) & 0x2FFF) != 0x29D) && v82 && !GetRedirectionBitmap(v82) )
            {
              v55 = *(_QWORD **)&v111.left;
              goto LABEL_122;
            }
LABEL_141:
            W32GetUserSessionState();
            UpdatesLockedForDwm();
            LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(v87);
            v90 = LayeredOrRedirectedParent;
            if ( LayeredOrRedirectedParent )
            {
              v91 = *(_QWORD *)(LayeredOrRedirectedParent + 40);
              if ( GetRedirectionBitmap(LayeredOrRedirectedParent) )
              {
                if ( (*(_DWORD *)(v91 + 24) & 0x20000000) != 0 )
                {
                  v92 = *(_DWORD *)(v91 + 232);
                  if ( (v92 & 2) != 0 && (v92 & 1) == 0 && (*(_DWORD *)(v90 + 380) & 0x20000000) == 0 )
                    v83 &= ~0x4000u;
                }
              }
            }
            v62 = CalcVisRgnWorker(v87, *(HRGN **)&v111.left, v83);
          }
        }
        else
        {
          SetRectRgnIndirect(*v55, *((_QWORD *)v59 + 5) + 88LL);
          v62 = 1;
        }
        v64 = v62 == 0;
        if ( !v62 )
          goto LABEL_75;
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v99, *(HRGN *)(*((_QWORD *)v41 + 17) + 184LL), 0, 0);
        if ( !*(_QWORD *)v99 )
        {
LABEL_73:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v99);
LABEL_74:
          v64 = v62 == 0;
LABEL_75:
          v65 = !v64;
          if ( !v64 != (*((_BYTE *)v53 + 140) & 1) )
          {
            v74 = v65;
            *((_DWORD *)v53 + 35) = v65 | *((_DWORD *)v53 + 35) & 0xFFFFFFFE;
            v75 = *v53;
            v76 = (void *)UserReferenceDwmApiPort();
            IncrementDWMWindowUniqueness();
            if ( v76 )
            {
              v101 = 0;
              *(_DWORD *)v99 = 3670032;
              v102 = 1073741831;
              *(_WORD *)&v99[4] = 0x8000;
              v103 = v75;
              *(_OWORD *)&v99[6] = 0LL;
              v104 = v74;
              v100 = 0LL;
              EtwUpdateEvent(v75, 1073741831LL);
              LpcRequestPort(v76, v99);
              ObfDereferenceObject(v76);
            }
          }
          goto LABEL_76;
        }
        if ( GetBaseRustGlobals() )
        {
          v79 = *(_QWORD *)v99 + 24LL;
          if ( !*(_QWORD *)v99 )
            v79 = 0LL;
          BaseRustGlobals = GetBaseRustGlobals();
          v81 = (char *)BaseRustGlobals + 8;
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx((char *)BaseRustGlobals + 8, 2LL);
          LODWORD(BaseRustGlobals) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)BaseRustGlobals + 72LL))(v79);
          ExReleasePushLockSharedEx(v81, 2LL);
          KeLeaveCriticalRegion();
          if ( (_DWORD)BaseRustGlobals != 1 )
            goto LABEL_114;
        }
        else if ( *(_DWORD *)(*(_QWORD *)v99 + 48LL) != 1 )
        {
          v77 = (Win32kRS *)(*(_QWORD *)v99 + 24LL);
          if ( GetBaseRustGlobals() )
            Win32kRS::RegionCore_get_sizeScan(v77, v78);
LABEL_114:
          v62 = 1;
          goto LABEL_73;
        }
        v62 = 0;
        goto LABEL_73;
      }
    }
LABEL_78:
    SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(&v108);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v107);
  }
  v96 = v40;
  Gre::Base::Globals(v45);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v105, (struct PDEVOBJ *)&v96);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v40 + 200)) )
  {
    if ( !*(_BYTE *)(v40 + 208) )
      GreReleaseSemaphoreCommon<9,void (*)(HSEMAPHORE__ *)>(
        GreReleaseSemaphoreExclusiveInternal,
        *(_QWORD *)(v40 + 200));
    v66 = *(HSEMAPHORE *)(v96 + 48);
    GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      (__int64)v66);
    if ( !*(_BYTE *)(v40 + 208) )
      GreAcquireSemaphore<9,HSEMAPHORE__ *>(*(_QWORD *)(v40 + 200));
  }
  else
  {
    v66 = *(HSEMAPHORE *)(v96 + 48);
    GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      (__int64)v66);
  }
  if ( *(_DWORD *)(v40 + 140) )
  {
    v86 = 0;
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v40 + 144) + 8LL * v86++), v38);
    while ( v86 < *(_DWORD *)(v40 + 140) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v40 + 80), v38);
  }
  if ( v66 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DevLock", v66);
    v67 = GreGetCurrentThreadCrossSessionCheck();
    if ( v67 )
    {
      v34 = (*((_BYTE *)v67 + 16))-- == 1;
      if ( v34 )
        *(_QWORD *)v67 &= ~0x100uLL;
      if ( !*(_QWORD *)v67 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v66);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v105);
  if ( v42 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreLock", v42);
    v68 = GreGetCurrentThreadCrossSessionCheck();
    if ( v68 )
    {
      v34 = (*((_BYTE *)v68 + 10))-- == 1;
      if ( v34 )
        *(_QWORD *)v68 &= ~4uLL;
      if ( !*(_QWORD *)v68 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v42);
  }
  v69 = W32GetUserSessionState();
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v69 + 56968) + 48LL));
  v72 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v71, v70);
  if ( v72 )
    v7 = *v72;
  Win32HM_UnlockFromThread<0>(v7, BugCheckParameter3);
  return 1LL;
}
