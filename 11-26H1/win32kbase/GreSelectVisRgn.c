/*
 * XREFs of GreSelectVisRgn @ 0x140016B80
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     NtUserGetDC @ 0x1401A2020 (NtUserGetDC.c)
 * Callees:
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140013030 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?ReleaseLock@GrePushLock@@QEBAXXZ @ 0x1400150BC (-ReleaseLock@GrePushLock@@QEBAXXZ.c)
 *     ??$GrepReleaseLockValidate@$0L@@@YAXXZ @ 0x140015598 (--$GrepReleaseLockValidate@$0L@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0L@@@YAXXZ @ 0x140015634 (--$GrepAcquireLockValidate@$0L@@@YAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?AcquireLockExclusive@GreInnermostPushLock@@QEAAXXZ @ 0x140017EF0 (-AcquireLockExclusive@GreInnermostPushLock@@QEAAXXZ.c)
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?ReleaseLock@GreInnermostPushLock@@QEBAXXZ @ 0x14001B2E0 (-ReleaseLock@GreInnermostPushLock@@QEBAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001ED10 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x140021890 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x140026D44 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x140056DC4 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1400C5A0C (HmgIncProcessHandleCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1400FEB6C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vReleaseVis@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140179DF8 (-vReleaseVis@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreSelectVisRgn(__int64 a1, HRGN a2, int a3)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r12
  __int64 v11; // rsi
  HSEMAPHORE v12; // rbx
  DC *v13; // rcx
  unsigned int v14; // r13d
  struct _ENTRY *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r15
  __int64 v18; // rcx
  unsigned int *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 SessionState; // rax
  __int64 v23; // rax
  DC *v24; // rdi
  _DWORD *v25; // r14
  __int64 v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r11
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  LONG v35; // r10d
  LONG v36; // edx
  LONG v37; // r9d
  LONG v38; // r8d
  bool v39; // zf
  __int64 v40; // rax
  int v41; // ebx
  int v42; // r8d
  DC *v43; // rdi
  DC *v44; // rcx
  struct _ENTRY *v45; // rax
  DC *v46; // rbx
  __int64 v47; // rcx
  struct _GRETHREAD *v48; // rax
  __int64 v49; // rcx
  _QWORD **v50; // rax
  __int64 v51; // rax
  __int128 v52; // kr00_16
  __int64 result; // rax
  __int128 v54; // kr10_16
  __int64 v55; // rdi
  unsigned int v56; // ebx
  __int64 *v57; // rax
  __int64 v58; // rax
  bool v59; // cc
  DC *v60; // rbx
  __int64 v61; // rax
  unsigned int sizeScan; // eax
  const struct BaseRustExports *v63; // rbx
  const struct REGION_CORE *v64; // rdi
  HSURF v65; // rdx
  __int64 v66; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v67; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int *v68; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int **v69; // [rsp+48h] [rbp-B8h]
  unsigned int **v70; // [rsp+50h] [rbp-B0h]
  __int64 (__fastcall *v71)(); // [rsp+58h] [rbp-A8h]
  __int64 v72; // [rsp+60h] [rbp-A0h]
  __int64 v73; // [rsp+68h] [rbp-98h] BYREF
  DC *v74; // [rsp+70h] [rbp-90h] BYREF
  int v75; // [rsp+78h] [rbp-88h]
  struct Gre::Base::SESSION_GLOBALS *v76; // [rsp+80h] [rbp-80h]
  __int64 v77; // [rsp+88h] [rbp-78h]
  __int128 v78; // [rsp+90h] [rbp-70h] BYREF
  __int128 v79; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD **v82; // [rsp+C0h] [rbp-40h]
  int v83; // [rsp+E0h] [rbp-20h]
  HSEMAPHORE v84; // [rsp+E8h] [rbp-18h]
  struct _RECTL v85; // [rsp+F0h] [rbp-10h] BYREF

  LODWORD(v66) = a3;
  v76 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(a1) + 88);
  v77 = 0LL;
  v74 = 0LL;
  v75 = 0;
  v78 = 0LL;
  v79 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    v7 = *CurrentThreadWin32Thread;
  else
    v7 = 0LL;
  v8 = (v7 + 8) & -(__int64)(v7 != 0);
  *(_QWORD *)&v79 = &v74;
  *((_QWORD *)&v79 + 1) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
  if ( v8 )
  {
    v9 = *(_QWORD *)(((v7 + 8) & -(__int64)(v7 != 0)) + 0x58);
    if ( *(_QWORD *)(v9 + 8) != v8 + 88 )
      goto LABEL_5;
    *(_QWORD *)&v78 = *(_QWORD *)(v8 + 88);
    *((_QWORD *)&v78 + 1) = v8 + 88;
    *(_QWORD *)(v9 + 8) = &v78;
    *(_QWORD *)(v8 + 88) = &v78;
  }
  else
  {
    *((_QWORD *)&v78 + 1) = &v78;
    *(_QWORD *)&v78 = &v78;
  }
  LOBYTE(v6) = 1;
  v74 = (DC *)HmgShareLock(v76, a1, v6, 1LL);
  if ( v74 )
  {
    v10 = v76;
    v11 = 0LL;
    v12 = (HSEMAPHORE)(*(_QWORD *)v76 + 1248LL);
    v84 = v12;
    GreAcquireSemaphoreInternal(v12);
    GrepAcquireLockValidate<11>();
    v13 = v74;
    v14 = 1;
    *((_DWORD *)v74 + 9) |= 0x10u;
    v15 = DC::PentryFromPobj(v13, v10);
    LODWORD(v67) = 1;
    *((_BYTE *)v15 + 15) |= 4u;
    if ( !a2 )
    {
      DC::vReleaseVis(v74, v10);
      DC::bSetDefaultRegion(v74);
      goto LABEL_52;
    }
    PsGetCurrentProcessId();
    v17 = *(_QWORD **)(W32GetSessionState(v16) + 88);
    v73 = *v17 + 1512LL;
    GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v18, v73);
    HANDLELOCK::HANDLELOCK(&v68, v17, a2, 1LL);
    if ( (_DWORD)v69 )
    {
      v19 = v68;
      if ( *((_BYTE *)v68 + 14) == 4
        && *((_WORD *)v68 + 6) == WORD1(a2)
        && ((v55 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)v70[1] + 96LL))(v70[1], *v68),
             GreGetCurrentThread(),
             !*(_WORD *)(v55 + 12))
         || *(struct _KTHREAD **)(v55 + 16) == KeGetCurrentThread()) )
      {
        v56 = v19[2] & 0xFFFFFFFE;
        if ( v56 && (unsigned int)HmgIncProcessHandleCount(0LL) )
        {
          HmgDecProcessHandleCount(v17, v56);
          HANDLELOCK::Pid((HANDLELOCK *)&v68, 0);
          *(_WORD *)(v55 + 14) &= ~0x10u;
        }
      }
      else
      {
        BYTE5(v69) = 1;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v68);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v68);
    SEMOBJ<20>::vUnlock(&v73);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v80, a2, 0, 0);
    if ( !v80 )
      goto LABEL_63;
    v21 = *(_QWORD *)v74;
    SessionState = W32GetSessionState(v20);
    v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(SessionState + 88) + 8LL) + 16LL))(
            *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 8LL),
            (unsigned __int16)v21 | ((unsigned int)v21 >> 8) & 0xFF0000);
    if ( v23
      && *(_BYTE *)(v23 + 14) == 1
      && *(_WORD *)(v23 + 12) == WORD1(v21)
      && (*(_DWORD *)(v23 + 8) & 0xFFFFFFFE) == 0x80000012
      || (v24 = v74, v25 = (_DWORD *)v80, (*((_DWORD *)v74 + 9) & 0x100000) == 0)
      || (v26 = *((_QWORD *)v74 + 6)) == 0
      || !v80 )
    {
LABEL_38:
      v41 = v66;
      if ( (_DWORD)v66 == 1 )
      {
        v11 = v80;
        if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)&v80) )
        {
          v80 = 0LL;
          goto LABEL_41;
        }
        v14 = 0;
LABEL_70:
        if ( !v14 && v41 == 1 )
        {
LABEL_45:
          if ( !v83 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v80);
          if ( v80 )
            _InterlockedDecrement16((volatile signed __int16 *)(v80 + 12));
          v49 = v81;
          v50 = v82;
          if ( *(__int64 **)(v81 + 8) != &v81 || *v82 != &v81 )
            goto LABEL_5;
          v12 = v84;
          *v82 = (_QWORD *)v81;
          *(_QWORD *)(v49 + 8) = v50;
LABEL_52:
          if ( v12 )
          {
            if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pz_EtwWriteTransfer(
                v49,
                (unsigned int)&LockRelease,
                v42,
                (_DWORD)v12,
                (__int64)L"VisRgnPublish");
            GrepReleaseLockValidate<11>();
            GreReleaseSemaphoreSharedInternal(v12);
          }
          if ( v74 )
          {
            v51 = W32GetSessionState(v49);
            HmgDecrementShareReferenceCount(*(_QWORD *)(v51 + 88), v74);
            v74 = 0LL;
          }
          v52 = v78;
          if ( *(__int128 **)(v78 + 8) == &v78 && **((__int128 ***)&v78 + 1) == &v78 )
          {
            **((_QWORD **)&v78 + 1) = v78;
            result = v14;
            *(_QWORD *)(v52 + 8) = *((_QWORD *)&v52 + 1);
            return result;
          }
LABEL_5:
          __fastfail(3u);
        }
        if ( !(_DWORD)v67 )
        {
LABEL_42:
          v46 = v74;
          GreInnermostPushLock::AcquireLockExclusive((DC *)((char *)v74 + 1112));
          *((_QWORD *)v74 + 142) = v11;
          *(_DWORD *)(v11 + 72) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v47)
                                                                                              + 88)
                                                                                  + 4248LL));
          v48 = GreGetCurrentThreadCrossSessionCheck();
          if ( v48 )
            *(_QWORD *)v48 &= ~0x4000000000uLL;
          GrePushLock::ReleaseLock((DC *)((char *)v46 + 1112));
          goto LABEL_45;
        }
LABEL_41:
        v43 = v74;
        v44 = v74;
        *((_DWORD *)v74 + 9) |= 0x10u;
        v45 = DC::PentryFromPobj(v44, v10);
        *((_BYTE *)v45 + 15) |= 4u;
        GreInnermostPushLock::AcquireLockExclusive((DC *)((char *)v43 + 1112));
        v73 = *((_QWORD *)v43 + 142);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v73);
        *((_QWORD *)v43 + 142) = *((_QWORD *)v10 + 533);
        GreInnermostPushLock::ReleaseLock((DC *)((char *)v43 + 1112));
        goto LABEL_42;
      }
      if ( (_DWORD)v66 != 2 )
      {
        if ( (_DWORD)v66 != 4 )
          goto LABEL_41;
        v60 = v74;
        GreInnermostPushLock::AcquireLockExclusive((DC *)((char *)v74 + 1112));
        v11 = *((_QWORD *)v74 + 142);
        if ( v11 )
        {
          if ( v11 != *((_QWORD *)v10 + 533) )
          {
            v67 = *((_QWORD *)v74 + 142);
            RGNOBJAPI::bSwap((RGNOBJAPI *)&v80, (struct RGNOBJ *)&v67);
            v11 = v67;
            LODWORD(v67) = 0;
LABEL_109:
            GreInnermostPushLock::ReleaseLock((DC *)((char *)v60 + 1112));
            v41 = v66;
            goto LABEL_70;
          }
        }
        else
        {
          v11 = *((_QWORD *)v10 + 533);
        }
        v14 = 0;
        goto LABEL_109;
      }
      sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(v80 + 24));
      v66 = 0LL;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v66, sizeScan);
      v11 = v66;
      if ( v66 )
      {
        if ( WPP_MAIN_CB.Dpc.DeferredContext )
        {
          v63 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
          v64 = (const struct REGION_CORE *)((v66 + 24) & -(__int64)(v66 != 0));
          (*(void (__fastcall **)(const struct REGION_CORE *, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 48LL))(
            v64,
            (v80 + 24) & -(__int64)(v80 != 0));
          RgnCaptureLiveMemoryDumpOnZeroSizedScan(v63, v64);
        }
        else
        {
          v66 = (v66 + 24) & -(__int64)(v66 != 0);
          v73 = (v80 + 24) & -(__int64)(v80 != 0);
          RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v66, (const struct RGNCOREOBJ *)&v73);
        }
        goto LABEL_41;
      }
LABEL_63:
      v11 = *((_QWORD *)v10 + 533);
      goto LABEL_41;
    }
    v68 = 0LL;
    v69 = 0LL;
    v27 = (__int64 *)PsGetCurrentThreadWin32Thread();
    if ( v27 )
      v28 = *v27;
    else
      v28 = 0LL;
    v29 = (v28 + 8) & -(__int64)(v28 != 0);
    v70 = &v68;
    v71 = UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
    if ( v29 )
    {
      v30 = *(_QWORD *)(((v28 + 8) & -(__int64)(v28 != 0)) + 0x58);
      if ( *(_QWORD *)(v30 + 8) != v29 + 88 )
        goto LABEL_5;
      v68 = *(unsigned int **)(v29 + 88);
      v69 = (unsigned int **)(v29 + 88);
      *(_QWORD *)(v30 + 8) = &v68;
      *(_QWORD *)(v29 + 88) = &v68;
    }
    else
    {
      v69 = &v68;
      v68 = (unsigned int *)&v68;
    }
    v39 = (*((_DWORD *)v24 + 9) & 0x40000) == 0;
    v31 = 0LL;
    v72 = 0LL;
    if ( v39 )
    {
      v32 = *((_QWORD *)v24 + 62);
    }
    else
    {
      v65 = (HSURF)*((_QWORD *)v24 + 268);
      if ( v65 )
      {
        SURFREF::vLock((SURFREF *)&v68, v65);
        v31 = v72;
        v32 = v72;
        v33 = v72;
LABEL_30:
        if ( !v32 )
        {
          v39 = v33 == 0;
          goto LABEL_35;
        }
        if ( (*(_DWORD *)(v26 + 40) & 0x20000) != 0 && *(int *)(v32 + 112) < 0
          || (v34 = *((_DWORD *)v24 + 9), v35 = v25[13],
                                          v36 = v25[14],
                                          v37 = v25[15],
                                          v38 = v25[16],
                                          (v34 & 0x1000) != 0)
          && (v34 & 0x4000) == 0
          || v36 == v38
          || v35 == v37
          || v35 == 0x7FFFFFFF && v38 == 0x80000000 && v36 == 0x7FFFFFFF && v37 == 0x80000000 )
        {
LABEL_34:
          v39 = v31 == 0;
LABEL_35:
          if ( !v39 )
          {
            v40 = W32GetSessionState(v32);
            HmgDecrementShareReferenceCount(*(_QWORD *)(v40 + 88), v72);
          }
          PopThreadGuardedObject(&v68);
          goto LABEL_38;
        }
        v57 = (__int64 *)(v32 + 668);
        if ( (*(_DWORD *)(v32 + 116) & 0x800) == 0 )
          v57 = (__int64 *)(v32 + 56);
        v58 = *v57;
        v59 = v35 <= v37;
        if ( v35 < v37 )
        {
          if ( v36 < v38 && v35 >= 0 && (int)v58 >= v37 && v36 >= 0 && SHIDWORD(v58) >= v38 )
            goto LABEL_34;
          v59 = v35 <= v37;
        }
        if ( !v59 )
        {
          v32 = (unsigned int)v35;
          v35 = v25[15];
          v37 = v32;
        }
        if ( v36 > v38 )
        {
          v32 = (unsigned int)v36;
          v36 = v25[16];
          v38 = v32;
        }
        if ( v35 < 0 )
          v35 = 0;
        v85.left = v35;
        if ( v36 < 0 )
          v36 = 0;
        v85.top = v36;
        if ( (int)v58 < v37 )
          v37 = v58;
        v85.right = v37;
        if ( SHIDWORD(v58) < v38 )
          v38 = HIDWORD(v58);
        v85.bottom = v38;
        if ( v37 < v35 )
        {
          v85.left = v37;
        }
        else
        {
          if ( v38 < v36 )
            v36 = v38;
          v85.top = v36;
        }
        if ( v31 )
        {
          v61 = W32GetSessionState(v32);
          HmgDecrementShareReferenceCount(*(_QWORD *)(v61 + 88), v72);
        }
        PopThreadGuardedObject(&v68);
        RGNOBJ::vSet((RGNOBJ *)&v80, &v85);
        goto LABEL_38;
      }
      v32 = *(_QWORD *)(v26 + 2544);
    }
    v33 = 0LL;
    goto LABEL_30;
  }
  v54 = v78;
  if ( *(__int128 **)(v78 + 8) != &v78 || **((__int128 ***)&v78 + 1) != &v78 )
    goto LABEL_5;
  **((_QWORD **)&v78 + 1) = v78;
  *(_QWORD *)(v54 + 8) = *((_QWORD *)&v54 + 1);
  return 0LL;
}
