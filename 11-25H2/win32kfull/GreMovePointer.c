/*
 * XREFs of GreMovePointer @ 0x14008E890
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140060500 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     GreHidePointer @ 0x140094C3C (GreHidePointer.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x14025CB6C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008D78C (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14008D8A4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$03@@QEAAXXZ @ 0x14008D980 (-vUnlock@-$SEMOBJ@$03@@QEAAXXZ.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14008D9F8 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14008DF34 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     EngpMovePointer @ 0x14008F2A8 (EngpMovePointer.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140093A10 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140094B50 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall GreMovePointer(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // r12d
  int v6; // r15d
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  Gre::Base *v10; // rcx
  __int64 v11; // r13
  unsigned __int8 v12; // al
  struct _KTHREAD *CurrentThread; // r14
  __int64 v14; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v16; // rbx
  __int64 v17; // rdx
  char v18; // cl
  HSEMAPHORE v19; // r14
  int v20; // edi
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // ebx
  __int64 v25; // r8
  int v26; // ebx
  unsigned int v27; // r13d
  int v28; // r12d
  int v29; // eax
  Gre::Base *v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // r15
  struct _SURFOBJ *v33; // r15
  void (__fastcall *v34)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD); // rax
  HDEV hdev; // rbx
  Gre::Base *v36; // rcx
  struct _RECTL *v37; // r9
  struct Gre::Base::SESSION_GLOBALS *v38; // rax
  HSEMAPHORE v39; // rbx
  struct Gre::Base::SESSION_GLOBALS *v40; // rdi
  __int64 v41; // rdi
  Gre::Base *v42; // rcx
  struct _RECTL *v43; // r9
  LONG cy; // ecx
  void (__fastcall *v45)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD); // rax
  int v46; // r8d
  struct _GRETHREAD *v47; // rax
  bool v48; // zf
  HSEMAPHORE v49; // r14
  struct _KTHREAD *v50; // rsi
  __int64 v51; // rdi
  __int64 *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdi
  _QWORD *v55; // rdx
  __int64 SessionState; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 **v59; // rcx
  int v60; // edx
  __int64 *v61; // r14
  __int64 v62; // rax
  HSEMAPHORE v63; // rsi
  unsigned int v64; // r15d
  __int64 v65; // rbx
  unsigned int v66; // edi
  unsigned int v67; // r12d
  int v68; // eax
  _DWORD *v69; // rcx
  void (__fastcall *v70)(_DWORD *, _QWORD, _QWORD, _QWORD); // rax
  __int64 v71; // rdi
  Gre::Base *v72; // rcx
  struct _RECTL *v73; // r9
  struct Gre::Base::SESSION_GLOBALS *v74; // rax
  HSEMAPHORE v75; // rdi
  struct Gre::Base::SESSION_GLOBALS *v76; // r15
  __int64 v77; // r15
  Gre::Base *v78; // rcx
  struct _RECTL *v79; // r9
  struct _SURFOBJ *v80; // r15
  signed int v81; // edx
  void (__fastcall *v82)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD); // rax
  struct _GRETHREAD *v83; // rax
  HSEMAPHORE v84; // rdi
  __int64 v85; // rbx
  int v86; // ecx
  __int64 v87; // rax
  struct _SURFOBJ *v88; // rsi
  void (__fastcall *v89)(struct _SURFOBJ *, __int64, __int64, _QWORD); // rax
  struct _GRETHREAD *v90; // rax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v93; // ebx
  __int64 v94; // rax
  void (__fastcall *v95)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v96)(_DWORD *, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v97)(struct _SURFOBJ *, __int64, __int64, _QWORD); // rax
  unsigned __int64 v98; // rcx
  int v99; // r8d
  int v100; // eax
  int v101; // [rsp+38h] [rbp-59h]
  __int64 v102; // [rsp+40h] [rbp-51h]
  __int64 v103; // [rsp+48h] [rbp-49h]
  __int64 v104; // [rsp+50h] [rbp-41h] BYREF
  int v105; // [rsp+58h] [rbp-39h]
  _DWORD *v106; // [rsp+60h] [rbp-31h] BYREF
  struct _SURFOBJ *v107; // [rsp+68h] [rbp-29h]
  __int64 v108; // [rsp+70h] [rbp-21h]
  unsigned int v109; // [rsp+78h] [rbp-19h]
  HSEMAPHORE v110; // [rsp+80h] [rbp-11h] BYREF
  HSEMAPHORE v111; // [rsp+88h] [rbp-9h]
  _BYTE v112[8]; // [rsp+90h] [rbp-1h] BYREF
  HSEMAPHORE v113; // [rsp+98h] [rbp+7h]
  unsigned __int8 v114; // [rsp+F8h] [rbp+67h]
  int v115; // [rsp+100h] [rbp+6Fh] BYREF
  int v116; // [rsp+108h] [rbp+77h] BYREF
  int v117; // [rsp+110h] [rbp+7Fh]

  v117 = a4;
  v116 = a3;
  v115 = a2;
  v4 = a4;
  v104 = a1;
  v6 = 0;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v8 = *CurrentThreadNonPaged;
  else
    v8 = 0LL;
  v9 = v8 + 8;
  v114 = 0;
  v10 = (Gre::Base *)-v8;
  v11 = v9 & -(__int64)(v10 != 0LL);
  v102 = v11;
  if ( v11 )
  {
    v12 = *(_BYTE *)((v9 & -(__int64)(v10 != 0LL)) + 0x158);
    *(_DWORD *)(v11 + 344) &= ~1u;
    v114 = v12;
  }
  v113 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v10) + 624LL);
  GreAcquireSemaphoreSharedInternal(v113);
  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
  }
  v16 = (__int64 *)((v14 + 8) & -(__int64)(v14 != 0));
  if ( v16 )
  {
    v17 = *v16;
    if ( (*v16 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v16 & 2) == 0 )
    {
      v98 = 0LL;
      v99 = 37;
      do
      {
        v100 = v98;
        if ( !_bittest64(&v17, v98) )
          v100 = v99;
        ++v98;
        v99 = v100;
      }
      while ( v98 < 0x40 );
      if ( v100 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v98, v17, (unsigned int)v100);
    }
    v18 = *(_BYTE *)(((v14 + 8) & -(__int64)(v14 != 0)) + 9);
    *(_BYTE *)(((v14 + 8) & -(__int64)(v14 != 0)) + 9) = v18 + 1;
    if ( !v18 )
      *v16 |= 2uLL;
  }
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v112, (struct PDEVOBJ *)&v104);
  v19 = *(HSEMAPHORE *)(v104 + 56);
  v111 = v19;
  GreAcquireSemaphoreInternal(v19);
  GrepAcquireLockValidate<4>();
  DrvUniformSpaceToPixelSpacePoint(&v115, &v116);
  v20 = v116;
  v21 = v115;
  v22 = *(_QWORD *)(W32GetSessionState() + 96);
  *(_QWORD *)(v22 + 48) = a1;
  *(_DWORD *)(v22 + 56) = v21;
  *(_DWORD *)(v22 + 60) = v20;
  *(_DWORD *)(v22 + 64) = v4;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState() + 96) + 72LL) )
  {
    SessionState = W32GetSessionState();
    v108 = 0LL;
    v57 = *(_QWORD *)(SessionState + 96);
    v24 = 1;
    v103 = 1LL;
    v23 = 1LL;
    *(_DWORD *)(v57 + 80) = 1;
    if ( *(_DWORD *)(W32GetUserSessionState(v57, v58) + 36292) )
    {
      v108 = 1LL;
      v6 = 1;
      v103 = 1LL;
      v25 = 1LL;
    }
    else
    {
      v25 = v108;
    }
  }
  else
  {
    v23 = 0LL;
    v24 = 0;
    v25 = 0LL;
    v103 = 0LL;
    v108 = 0LL;
  }
  if ( (*(_DWORD *)(v104 + 40) & 0x20000) != 0 )
  {
    v59 = *(__int64 ***)(v104 + 1784);
    v60 = *((_DWORD *)v59 + 4);
    v61 = *v59;
    v101 = v60;
    while ( 1 )
    {
      v62 = v61[6];
      if ( v115 < *((_DWORD *)v61 + 7) || v115 >= *((_DWORD *)v61 + 9) )
        goto LABEL_97;
      if ( v116 < *((_DWORD *)v61 + 8) || v116 >= *((_DWORD *)v61 + 10) )
      {
        v60 = v101;
LABEL_97:
        if ( v23 && (*(_DWORD *)(v62 + 2112) & 0x2000) == 0 )
          goto LABEL_94;
        v84 = *(HSEMAPHORE *)(v62 + 56);
        GreAcquireSemaphoreInternal(v84);
        GrepAcquireLockValidate<4>();
        v85 = v61[6];
        if ( *(_DWORD *)(v85 + 64) != -1 || *(_DWORD *)(v85 + 68) != -1 || (*(_DWORD *)(v85 + 40) & 0x100000) != 0 )
        {
          v86 = *(_DWORD *)(v85 + 40);
          *(_DWORD *)(v85 + 64) = -1;
          *(_DWORD *)(v85 + 68) = -1;
          if ( (v86 & 0x400) == 0 )
          {
            v87 = *(_QWORD *)(v85 + 2544);
            if ( v87 )
            {
              v88 = (struct _SURFOBJ *)(v87 + 24);
              if ( (v86 & 2) != 0 )
              {
                v89 = *(void (__fastcall **)(struct _SURFOBJ *, __int64, __int64, _QWORD))(v85 + 3416);
                if ( v89 )
                {
                  v89(v88, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v4);
                }
                else
                {
                  v97 = *(void (__fastcall **)(struct _SURFOBJ *, __int64, __int64, _QWORD))(v85 + 2920);
                  if ( v97 )
                    v97(v88, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
                }
              }
              if ( (*(_DWORD *)(v85 + 40) & 4) != 0 )
                EngpMovePointer(v88, -1, -1, v4 & 0xF4);
            }
          }
        }
        if ( v84 )
        {
          EtwTraceGreLockReleaseSemaphore(L"Pointer", v84);
          v90 = GreGetCurrentThreadCrossSessionCheck();
          if ( v90 )
          {
            v48 = (*((_BYTE *)v90 + 12))-- == 1;
            if ( v48 )
              *(_QWORD *)v90 &= ~0x10uLL;
            if ( !*(_QWORD *)v90 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v84);
        }
        goto LABEL_92;
      }
      if ( v23 && (*(_DWORD *)(v62 + 2112) & 0x2000) == 0 && !v25 )
        goto LABEL_93;
      v63 = *(HSEMAPHORE *)(v62 + 56);
      v64 = v4 | 4;
      if ( !v25 )
        v64 = v4;
      v109 = v64;
      GreAcquireSemaphoreInternal(v63);
      GrepAcquireLockValidate<4>();
      v65 = v61[6];
      v67 = v116 - *((_DWORD *)v61 + 8);
      v105 = v115 - *((_DWORD *)v61 + 7);
      v66 = v105;
      if ( *(_QWORD *)(v65 + 64) != __PAIR64__(v67, v105) || (*(_DWORD *)(v65 + 40) & 0x100000) != 0 )
      {
        v68 = *(_DWORD *)(v65 + 40);
        *(_DWORD *)(v65 + 64) = v105;
        *(_DWORD *)(v65 + 68) = v67;
        if ( (v68 & 0x400) == 0 )
        {
          v69 = *(_DWORD **)(v65 + 2544);
          v106 = v69;
          if ( v69 )
            break;
        }
      }
LABEL_84:
      if ( v63 )
      {
        EtwTraceGreLockReleaseSemaphore(L"Pointer", v63);
        v83 = GreGetCurrentThreadCrossSessionCheck();
        if ( v83 )
        {
          v48 = (*((_BYTE *)v83 + 12))-- == 1;
          if ( v48 )
            *(_QWORD *)v83 &= ~0x10uLL;
          if ( !*(_QWORD *)v83 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v63);
      }
      v4 = v117;
LABEL_92:
      v23 = v103;
LABEL_93:
      v60 = v101;
LABEL_94:
      v61 = (__int64 *)*v61;
      --v60;
      v25 = v108;
      v101 = v60;
      if ( !v60 )
      {
        v19 = v111;
        goto LABEL_36;
      }
    }
    v107 = (struct _SURFOBJ *)(v69 + 6);
    if ( (v68 & 2) != 0 )
    {
      v70 = *(void (__fastcall **)(_DWORD *, _QWORD, _QWORD, _QWORD))(v65 + 3416);
      if ( v70 )
      {
        v70(v69 + 6, v66, v67, v64);
LABEL_72:
        v69 = v106;
        goto LABEL_73;
      }
      v96 = *(void (__fastcall **)(_DWORD *, _QWORD, _QWORD, _QWORD))(v65 + 2920);
      if ( v96 )
      {
        v96(v69 + 6, v66, v67, 0LL);
        goto LABEL_72;
      }
    }
LABEL_73:
    if ( (*(_DWORD *)(v65 + 40) & 4) != 0 )
    {
      v71 = *((_QWORD *)v69 + 6);
      if ( IsDwmActive((Gre::Base *)v69) )
      {
        v74 = Gre::Base::Globals(v72);
        v75 = *(HSEMAPHORE *)(v71 + 56);
        v76 = v74;
        v110 = v75;
        GreAcquireSemaphoreInternal(v75);
        GrepAcquireLockValidate<4>();
        v77 = *(_QWORD *)v76 + 1040LL;
        EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"Sprite", v77);
        GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedStarveExclusiveInternal,
          v77);
        if ( IsDwmActive(v78) )
        {
          v66 = v105;
          DwmMovePointer(v107, v105, v67, v79, v109 & 0xF4);
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v77);
          SEMOBJ<4>::vUnlock(&v110);
          goto LABEL_77;
        }
        GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v77);
        if ( v75 )
          GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v75);
      }
      v80 = v107;
      v66 = v105;
      GdiMovePointer(v107, v105, v67, v73, 0);
      goto LABEL_78;
    }
LABEL_77:
    v80 = v107;
LABEL_78:
    if ( (*(_DWORD *)(v65 + 1808) & 0x10000) != 0 && v67 != -1 && (signed int)v66 < v106[14] )
    {
      v81 = v106[15];
      if ( (int)v67 < v81 )
      {
        v82 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD))(v65 + 2920);
        if ( v82 )
          v82(v80, v66, v67 - v81, 0LL);
      }
    }
    goto LABEL_84;
  }
  if ( !v24 || (*(_DWORD *)(v104 + 2112) & 0x2000) != 0 || v6 )
  {
    v26 = v115;
    v27 = v4 | 4;
    v117 = v115;
    if ( !v6 )
      v27 = v4;
    v28 = v116;
    if ( *(_DWORD *)(a1 + 64) == v115 && *(_DWORD *)(a1 + 68) == v116 && (*(_DWORD *)(a1 + 40) & 0x100000) == 0 )
      goto LABEL_36;
    v29 = *(_DWORD *)(a1 + 40);
    v30 = (Gre::Base *)(unsigned int)v115;
    v31 = v116;
    *(_DWORD *)(a1 + 64) = v115;
    *(_DWORD *)(a1 + 68) = v31;
    if ( (v29 & 0x400) != 0 )
      goto LABEL_36;
    v32 = *(_QWORD *)(a1 + 2544);
    if ( !v32 )
      goto LABEL_36;
    v33 = (struct _SURFOBJ *)(v32 + 24);
    if ( (v29 & 2) != 0 )
    {
      v34 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD))(a1 + 3416);
      if ( v34 )
      {
        v34(v33, (unsigned int)v30, v31, v27);
      }
      else
      {
        v95 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD))(a1 + 2920);
        if ( v95 )
          v95(v33, (unsigned int)v30, v31, 0LL);
      }
    }
    if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
    {
      hdev = v33->hdev;
      if ( IsDwmActive(v30) )
      {
        v38 = Gre::Base::Globals(v36);
        v39 = (HSEMAPHORE)*((_QWORD *)hdev + 7);
        v40 = v38;
        v106 = v39;
        GreAcquireSemaphoreInternal(v39);
        GrepAcquireLockValidate<4>();
        v41 = *(_QWORD *)v40 + 1040LL;
        EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"Sprite", v41);
        GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedStarveExclusiveInternal,
          v41);
        if ( IsDwmActive(v42) )
        {
          v26 = v117;
          DwmMovePointer(v33, v117, v28, v43, v27 & 0xF4);
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v41);
          SEMOBJ<4>::vUnlock((HSEMAPHORE *)&v106);
          goto LABEL_30;
        }
        GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v41);
        if ( v39 )
          GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v39);
      }
      v26 = v117;
      GdiMovePointer(v33, v117, v28, v37, 0);
    }
LABEL_30:
    if ( (*(_DWORD *)(a1 + 1808) & 0x10000) != 0 && v28 != -1 && v26 < v33->sizlBitmap.cx )
    {
      cy = v33->sizlBitmap.cy;
      if ( v28 < cy )
      {
        v45 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD))(a1 + 2920);
        if ( v45 )
          v45(v33, (unsigned int)v26, (unsigned int)(v28 - cy), 0LL);
      }
    }
LABEL_36:
    v11 = v102;
  }
  v46 = v116;
  *(_DWORD *)(v104 + 64) = v115;
  *(_DWORD *)(v104 + 68) = v46;
  if ( v19 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Pointer", v19);
    v47 = GreGetCurrentThreadCrossSessionCheck();
    if ( v47 )
    {
      v48 = (*((_BYTE *)v47 + 12))-- == 1;
      if ( v48 )
        *(_QWORD *)v47 &= ~0x10uLL;
      if ( !*(_QWORD *)v47 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v19);
  }
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v112);
  if ( v11 )
    *(_DWORD *)(v11 + 344) ^= ((unsigned __int8)*(_DWORD *)(v11 + 344) ^ v114) & 1;
  v49 = v113;
  EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", v113);
  v50 = KeGetCurrentThread();
  v51 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v93 = W32GetCurrentWin32kSessionId(),
        v94 = PsGetCurrentThreadProcess(),
        v93 == (unsigned int)PsGetProcessSessionIdEx(v94)) )
  {
    v52 = (__int64 *)PsGetThreadWin32Thread(v50);
    if ( v52 )
      v51 = *v52;
  }
  v53 = v51 + 8;
  v54 = -v51;
  v55 = (_QWORD *)(v53 & -(__int64)(v54 != 0));
  if ( v55 )
  {
    v48 = (*(_BYTE *)((v53 & -(__int64)(v54 != 0)) + 9))-- == 1;
    if ( v48 )
      *v55 &= ~2uLL;
    if ( !*v55 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreSharedInternal(v49);
}
