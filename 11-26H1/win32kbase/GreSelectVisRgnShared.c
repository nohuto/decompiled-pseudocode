/*
 * XREFs of GreSelectVisRgnShared @ 0x140017500
 * Callers:
 *     <none>
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

__int64 __fastcall GreSelectVisRgnShared(__int64 a1, HRGN a2, int a3)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int128 v10; // kr00_16
  __int64 result; // rax
  struct Gre::Base::SESSION_GLOBALS *v12; // r15
  __int64 v13; // r14
  HSEMAPHORE v14; // r12
  DC *v15; // rcx
  unsigned int v16; // ebx
  struct _ENTRY *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // r13
  __int64 v20; // rcx
  unsigned int *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 SessionState; // rax
  __int64 v25; // rax
  DC *v26; // rsi
  _DWORD *v27; // r13
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rax
  unsigned int ***v31; // rcx
  unsigned int **v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r10
  __int64 v35; // r11
  __int64 v36; // rax
  int v37; // eax
  int v38; // edx
  int v39; // r8d
  int v40; // r9d
  bool v41; // zf
  __int64 v42; // rax
  int v43; // r8d
  DC *v44; // rsi
  DC *v45; // rcx
  struct _ENTRY *v46; // rax
  DC *v47; // rbx
  __int64 v48; // rcx
  struct _GRETHREAD *v49; // rax
  __int64 v50; // rcx
  _QWORD **v51; // rax
  __int64 v52; // rax
  __int128 v53; // kr10_16
  unsigned int v54; // ebx
  __int64 *v55; // rbx
  __int64 v56; // rbx
  bool v57; // cc
  int v58; // eax
  unsigned int v59; // eax
  DC *v60; // rbx
  int v61; // esi
  __int64 v62; // rax
  unsigned int sizeScan; // eax
  const struct REGION_CORE *v64; // rsi
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  HSURF v68; // rdx
  __int64 v69; // [rsp+30h] [rbp-D0h] BYREF
  int v70; // [rsp+38h] [rbp-C8h]
  struct _RECTL v71; // [rsp+40h] [rbp-C0h]
  unsigned int *v72; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int **v73; // [rsp+58h] [rbp-A8h]
  unsigned int **v74; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v75)(); // [rsp+68h] [rbp-98h]
  __int64 v76; // [rsp+70h] [rbp-90h]
  DC *v77; // [rsp+80h] [rbp-80h] BYREF
  int v78; // [rsp+88h] [rbp-78h]
  struct Gre::Base::SESSION_GLOBALS *v79; // [rsp+90h] [rbp-70h]
  __int64 v80; // [rsp+98h] [rbp-68h]
  __int128 v81; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v82; // [rsp+B0h] [rbp-50h]
  int v83; // [rsp+C0h] [rbp-40h]
  __int64 v84; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v85; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD **v86; // [rsp+D8h] [rbp-28h]
  int v87; // [rsp+F8h] [rbp-8h]
  struct _RECTL v88; // [rsp+100h] [rbp+0h] BYREF

  v83 = a3;
  v79 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(a1) + 88);
  v80 = 0LL;
  v77 = 0LL;
  v78 = 0;
  v81 = 0LL;
  v82 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
  if ( !CurrentThreadWin32Thread || (v6 = *CurrentThreadWin32Thread) == 0 )
  {
    *(_QWORD *)&v82 = &v77;
    *((_QWORD *)&v82 + 1) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
    goto LABEL_115;
  }
  *(_QWORD *)&v82 = &v77;
  *((_QWORD *)&v82 + 1) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
  v7 = v6 + 8;
  if ( !v7 )
  {
LABEL_115:
    *((_QWORD *)&v81 + 1) = &v81;
    *(_QWORD *)&v81 = &v81;
    goto LABEL_7;
  }
  v8 = *(_QWORD *)(v7 + 88);
  v9 = (_QWORD *)(v7 + 88);
  if ( *(_QWORD **)(v8 + 8) != v9 )
    goto LABEL_5;
  *(_QWORD *)&v81 = v8;
  *((_QWORD *)&v81 + 1) = v9;
  *(_QWORD *)(v8 + 8) = &v81;
  *v9 = &v81;
LABEL_7:
  v77 = (DC *)HmgShareLock(v79, a1, 1LL, 1LL);
  if ( !v77 )
  {
    v10 = v81;
    if ( *(__int128 **)(v81 + 8) == &v81 && **((__int128 ***)&v81 + 1) == &v81 )
    {
      **((_QWORD **)&v81 + 1) = v81;
      *(_QWORD *)(v10 + 8) = *((_QWORD *)&v10 + 1);
      return 0LL;
    }
LABEL_5:
    __fastfail(3u);
  }
  v12 = v79;
  v13 = 0LL;
  v14 = (HSEMAPHORE)(*(_QWORD *)v79 + 1248LL);
  GreAcquireSemaphoreInternal(v14);
  GrepAcquireLockValidate<11>();
  v15 = v77;
  v16 = 1;
  v70 = 1;
  *((_DWORD *)v77 + 9) |= 0x10u;
  v17 = DC::PentryFromPobj(v15, v12);
  *((_BYTE *)v17 + 15) |= 4u;
  if ( !a2 )
  {
    DC::vReleaseVis(v77, v12);
    DC::bSetDefaultRegion(v77);
    goto LABEL_54;
  }
  PsGetCurrentProcessId();
  v19 = *(_QWORD **)(W32GetSessionState(v18) + 88);
  *(_QWORD *)&v88.left = *v19 + 1512LL;
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v20, *(_QWORD *)&v88.left);
  HANDLELOCK::HANDLELOCK(&v72, v19, a2, 1LL);
  if ( (_DWORD)v73 )
  {
    v21 = v72;
    if ( *((_BYTE *)v72 + 14) == 4
      && *((_WORD *)v72 + 6) == WORD1(a2)
      && ((v69 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)v74[1] + 96LL))(v74[1], *v72),
           GreGetCurrentThread(),
           !*(_WORD *)(v69 + 12))
       || *(struct _KTHREAD **)(v69 + 16) == KeGetCurrentThread()) )
    {
      v54 = v21[2] & 0xFFFFFFFE;
      if ( v54 && (unsigned int)HmgIncProcessHandleCount(0LL) )
      {
        HmgDecProcessHandleCount(v19, v54);
        HANDLELOCK::Pid((HANDLELOCK *)&v72, 0);
        *(_WORD *)(v69 + 14) &= ~0x10u;
      }
    }
    else
    {
      BYTE5(v73) = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v72);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v72);
  SEMOBJ<20>::vUnlock(&v88);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v84, a2, 0, 0);
  if ( !v84 )
    goto LABEL_62;
  v23 = *(_QWORD *)v77;
  SessionState = W32GetSessionState(v22);
  v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(SessionState + 88) + 8LL) + 16LL))(
          *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 8LL),
          (unsigned __int16)v23 | ((unsigned int)v23 >> 8) & 0xFF0000);
  if ( v25
    && *(_BYTE *)(v25 + 14) == 1
    && *(_WORD *)(v25 + 12) == WORD1(v23)
    && (*(_DWORD *)(v25 + 8) & 0xFFFFFFFE) == 0x80000012 )
  {
    goto LABEL_40;
  }
  v26 = v77;
  v27 = (_DWORD *)v84;
  if ( (*((_DWORD *)v77 + 9) & 0x100000) == 0 )
    goto LABEL_40;
  v28 = *((_QWORD *)v77 + 6);
  if ( !v28 || !v84 )
    goto LABEL_40;
  v72 = 0LL;
  v73 = 0LL;
  v29 = (_QWORD *)PsGetCurrentThreadWin32Thread();
  if ( !v29 || !*v29 )
  {
    v74 = &v72;
    v75 = UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
    goto LABEL_126;
  }
  v30 = *v29 + 8LL;
  v74 = &v72;
  v75 = UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
  if ( !v30 )
  {
LABEL_126:
    v73 = &v72;
    v72 = (unsigned int *)&v72;
    goto LABEL_30;
  }
  v31 = *(unsigned int ****)(v30 + 88);
  v32 = (unsigned int **)(v30 + 88);
  if ( v31[1] != v32 )
    goto LABEL_5;
  v72 = (unsigned int *)v31;
  v73 = v32;
  v31[1] = &v72;
  *v32 = (unsigned int *)&v72;
LABEL_30:
  v33 = 0LL;
  v41 = (*((_DWORD *)v26 + 9) & 0x40000) == 0;
  v34 = 0LL;
  v76 = 0LL;
  if ( v41 )
  {
    v35 = *((_QWORD *)v26 + 62);
    v36 = 0LL;
  }
  else
  {
    v68 = (HSURF)*((_QWORD *)v26 + 268);
    if ( v68 )
    {
      SURFREF::vLock((SURFREF *)&v72, v68);
      v34 = v76;
      v35 = v76;
      v36 = v76;
    }
    else
    {
      v35 = *(_QWORD *)(v28 + 2544);
      v36 = 0LL;
    }
  }
  if ( !v35 )
  {
    v41 = v36 == 0;
    goto LABEL_37;
  }
  if ( (*(_DWORD *)(v28 + 40) & 0x20000) != 0 && *(int *)(v35 + 112) < 0
    || (v37 = *((_DWORD *)v26 + 9),
        v38 = v27[13],
        v39 = v27[14],
        v40 = v27[15],
        v33 = (unsigned int)v27[16],
        *(_QWORD *)&v71.left = __PAIR64__(v39, v38),
        *(_QWORD *)&v71.right = __PAIR64__(v33, v40),
        (v37 & 0x1000) != 0)
    && (v37 & 0x4000) == 0
    || v39 == (_DWORD)v33
    || v38 == v40
    || v38 == 0x7FFFFFFF && (_DWORD)v33 == 0x80000000 && v39 == 0x7FFFFFFF && v40 == (_DWORD)v33 )
  {
LABEL_36:
    v41 = v34 == 0;
LABEL_37:
    if ( !v41 )
    {
      v42 = W32GetSessionState(v33);
      HmgDecrementShareReferenceCount(*(_QWORD *)(v42 + 88), v76);
    }
    PopThreadGuardedObject(&v72);
    goto LABEL_40;
  }
  v55 = (__int64 *)(v35 + 668);
  if ( (*(_DWORD *)(v35 + 116) & 0x800) == 0 )
    v55 = (__int64 *)(v35 + 56);
  v56 = *v55;
  v57 = v38 <= v40;
  if ( v38 < v40 )
  {
    if ( v39 < (int)v33 && v38 >= 0 && (int)v56 >= v40 && v39 >= 0 && SHIDWORD(v56) >= (int)v33 )
      goto LABEL_36;
    v57 = v38 <= v40;
  }
  if ( !v57 )
  {
    v58 = v38;
    v38 = v40;
    v71.left = v40;
    v40 = v58;
    v71.right = v58;
  }
  if ( v39 > (int)v33 )
  {
    v59 = v39;
    v71.top = v33;
    v39 = v33;
    v71.bottom = v59;
    v33 = v59;
  }
  if ( v38 < 0 )
  {
    v38 = 0;
    v71.left = 0;
  }
  if ( v39 < 0 )
  {
    v39 = 0;
    v71.top = 0;
  }
  if ( (int)v56 < v40 )
  {
    v40 = v56;
    v71.right = v56;
  }
  if ( SHIDWORD(v56) < (int)v33 )
  {
    v33 = HIDWORD(v56);
    v71.bottom = HIDWORD(v56);
  }
  if ( v40 < v38 )
  {
    v71.left = v40;
  }
  else if ( (int)v33 < v39 )
  {
    v71.top = v33;
  }
  v88 = v71;
  if ( v34 )
  {
    v62 = W32GetSessionState(v33);
    HmgDecrementShareReferenceCount(*(_QWORD *)(v62 + 88), v76);
  }
  PopThreadGuardedObject(&v72);
  RGNOBJ::vSet((RGNOBJ *)&v84, &v88);
LABEL_40:
  if ( v83 != 1 )
  {
    if ( v83 != 2 )
    {
      if ( v83 != 4 )
        goto LABEL_43;
      v60 = v77;
      GreInnermostPushLock::AcquireLockExclusive((DC *)((char *)v77 + 1112));
      v13 = *((_QWORD *)v77 + 142);
      if ( v13 )
      {
        if ( v13 != *((_QWORD *)v12 + 533) )
        {
          v69 = *((_QWORD *)v77 + 142);
          RGNOBJAPI::bSwap((RGNOBJAPI *)&v84, (struct RGNOBJ *)&v69);
          v13 = v69;
          v61 = 0;
          goto LABEL_103;
        }
      }
      else
      {
        v13 = *((_QWORD *)v12 + 533);
      }
      v70 = 0;
      v61 = 1;
LABEL_103:
      GreInnermostPushLock::ReleaseLock((DC *)((char *)v60 + 1112));
      if ( !v61 )
        goto LABEL_44;
      goto LABEL_43;
    }
    sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(v84 + 24));
    v69 = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v69, sizeScan);
    v13 = v69;
    if ( v69 )
    {
      if ( WPP_MAIN_CB.Dpc.DeferredContext )
      {
        v64 = (const struct REGION_CORE *)(v69 + 24);
        v65 = *(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext;
        v66 = v84 + 24;
        if ( !v84 )
          v66 = 0LL;
        (*(void (__fastcall **)(const struct REGION_CORE *, __int64))(v65 + 48))(v64, v66);
        RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)v65, v64);
      }
      else
      {
        v69 += 24LL;
        v67 = v84 + 24;
        if ( !v84 )
          v67 = 0LL;
        *(_QWORD *)&v88.left = v67;
        RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v69, (const struct RGNCOREOBJ *)&v88);
      }
      goto LABEL_43;
    }
LABEL_62:
    v13 = *((_QWORD *)v12 + 533);
    goto LABEL_43;
  }
  v13 = v84;
  if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)&v84) )
  {
    v84 = 0LL;
LABEL_43:
    v44 = v77;
    v45 = v77;
    *((_DWORD *)v77 + 9) |= 0x10u;
    v46 = DC::PentryFromPobj(v45, v12);
    *((_BYTE *)v46 + 15) |= 4u;
    GreInnermostPushLock::AcquireLockExclusive((DC *)((char *)v44 + 1112));
    *(_QWORD *)&v88.left = *((_QWORD *)v44 + 142);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v88);
    *((_QWORD *)v44 + 142) = *((_QWORD *)v12 + 533);
    GreInnermostPushLock::ReleaseLock((DC *)((char *)v44 + 1112));
LABEL_44:
    v47 = v77;
    GreInnermostPushLock::AcquireLockExclusive((DC *)((char *)v77 + 1112));
    *((_QWORD *)v77 + 142) = v13;
    *(_DWORD *)(v13 + 72) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v48) + 88)
                                                                            + 4248LL));
    v49 = GreGetCurrentThreadCrossSessionCheck();
    if ( v49 )
      *(_QWORD *)v49 &= ~0x4000000000uLL;
    GrePushLock::ReleaseLock((DC *)((char *)v47 + 1112));
    v16 = v70;
    goto LABEL_47;
  }
  v16 = 0;
LABEL_47:
  if ( !v87 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v84);
  if ( v84 )
    _InterlockedDecrement16((volatile signed __int16 *)(v84 + 12));
  v50 = v85;
  v51 = v86;
  if ( *(__int64 **)(v85 + 8) != &v85 || *v86 != &v85 )
    goto LABEL_5;
  *v86 = (_QWORD *)v85;
  *(_QWORD *)(v50 + 8) = v51;
LABEL_54:
  if ( v14 )
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v50, (unsigned int)&LockRelease, v43, (_DWORD)v14, (__int64)L"VisRgnPublish");
    GrepReleaseLockValidate<11>();
    GreReleaseSemaphoreSharedInternal(v14);
  }
  if ( v77 )
  {
    v52 = W32GetSessionState(v50);
    HmgDecrementShareReferenceCount(*(_QWORD *)(v52 + 88), v77);
    v77 = 0LL;
  }
  v53 = v81;
  if ( *(__int128 **)(v81 + 8) != &v81 || **((__int128 ***)&v81 + 1) != &v81 )
    goto LABEL_5;
  **((_QWORD **)&v81 + 1) = v81;
  result = v16;
  *(_QWORD *)(v53 + 8) = *((_QWORD *)&v53 + 1);
  return result;
}
