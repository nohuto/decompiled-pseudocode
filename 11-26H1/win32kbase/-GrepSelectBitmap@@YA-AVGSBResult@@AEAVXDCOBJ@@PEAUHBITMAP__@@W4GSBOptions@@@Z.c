/*
 * XREFs of ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreSelectBitmap @ 0x14003E380 (GreSelectBitmap.c)
 * Callees:
 *     ?vInc_cRef@SURFACE@@QEAAXXZ @ 0x140012190 (-vInc_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400121C4 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x140012F1C (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012FA0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140013030 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ??$GrepAcquireLockValidate@$0CG@@@YAXXZ @ 0x1400132C8 (--$GrepAcquireLockValidate@$0CG@@@YAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x140014660 (IsThreadCrossSessionAttached.c)
 *     ??1?$SEMOBJEXORSHARED@$01@@QEAA@XZ @ 0x1400146D4 (--1-$SEMOBJEXORSHARED@$01@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x140014884 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0CF@@@YAXXZ @ 0x140015030 (--$GrepAcquireLockValidate@$0CF@@@YAXXZ.c)
 *     ?ReleaseLock@GrePushLock@@QEBAXXZ @ 0x1400150BC (-ReleaseLock@GrePushLock@@QEBAXXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140019490 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ?TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E4C (-TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001AFC0 (--$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B0C0 (--$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x14002EEB4 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x140037DB8 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1400C4910 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?Get@ThreadRestrictNewHandlesRegion@@SAPEAV1@PEAU_GRETHREAD@@@Z @ 0x1400FEE20 (-Get@ThreadRestrictNewHandlesRegion@@SAPEAV1@PEAU_GRETHREAD@@@Z.c)
 *     vMirrorIncludeNotifyWrap @ 0x140117E84 (vMirrorIncludeNotifyWrap.c)
 *     IsvMirrorIncludeNotifySupported @ 0x140122680 (IsvMirrorIncludeNotifySupported.c)
 *     ??1MLOCKOBJ@@QEAA@XZ @ 0x14012E5BC (--1MLOCKOBJ@@QEAA@XZ.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x140140F40 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x140141058 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1401B6664 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepSelectBitmap(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // esi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _GRETHREAD *v13; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v15; // rbx
  char v16; // r12
  __int64 v17; // r8
  SURFACE *v18; // r14
  __int64 v19; // rbx
  unsigned int v20; // edi
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v22; // rbx
  int v23; // r13d
  HSEMAPHORE v24; // rax
  HSEMAPHORE v25; // rsi
  unsigned int v26; // r14d
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 *v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // edx
  __int64 *v35; // rcx
  int v36; // r8d
  __int64 v37; // rbx
  DC **v38; // rbx
  __int64 v39; // r8
  SURFACE *v40; // r14
  int v41; // edi
  DC *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rax
  DC *v46; // r13
  __int64 v47; // rax
  __int64 v48; // r13
  __int64 v49; // rbx
  __int64 v50; // rcx
  DC *v51; // r10
  DC *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r13
  __int64 v56; // r13
  __int64 v57; // rax
  DC **v58; // r13
  DC *v59; // rcx
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rcx
  int (*v63)(void); // rax
  __int64 v64; // rcx
  void (__fastcall *v65)(DC **, SURFACE *, __int64); // rax
  int v66; // eax
  BOOL v67; // r8d
  int v68; // eax
  int v69; // ecx
  unsigned int v70; // eax
  __int64 v71; // rcx
  int v72; // edx
  int v73; // edx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  SURFACE *v77; // rbx
  __int64 v78; // rdi
  __int64 v79; // rdx
  unsigned int *v80; // rsi
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 *v83; // rdi
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  DC *v88; // r13
  DC *v89; // rbx
  __int64 v90; // r14
  __int64 v91; // rsi
  int v92; // edx
  int v93; // r8d
  _DWORD *v94; // r9
  unsigned __int64 v95; // xmm0_8
  int v96; // ecx
  struct _GRETHREAD *v97; // rax
  unsigned int v98; // esi
  __int64 *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rdx
  unsigned int v102; // ebx
  int v103; // eax
  __int64 v104; // rsi
  unsigned int v105; // ebx
  __int64 *v106; // r14
  __int64 v107; // rsi
  int v108; // r13d
  __int64 v109; // rax
  unsigned int *v110; // r14
  unsigned int v111; // ecx
  __int64 v112; // rsi
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 *v115; // rsi
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rbx
  int v119; // eax
  __int64 *v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  int v124; // ecx
  int v125; // r8d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v127; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v129; // rax
  __int64 v130; // rdi
  __int64 v131; // rcx
  bool v132; // zf
  __int64 v133; // rax
  char v135; // al
  int v136; // eax
  __int64 SessionState; // rax
  __int64 v138; // rax
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // r10
  __int64 v142; // r11
  int v143; // edx
  ThreadRestrictNewHandlesRegion *v144; // rcx
  struct ThreadRestrictNewHandlesRegion *v145; // rax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v148; // edx
  int v149; // eax
  unsigned int v151; // [rsp+38h] [rbp-C8h]
  __int64 v152; // [rsp+38h] [rbp-C8h]
  HSEMAPHORE v153; // [rsp+40h] [rbp-C0h]
  __int64 v154; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v155; // [rsp+50h] [rbp-B0h]
  unsigned int *v156; // [rsp+58h] [rbp-A8h] BYREF
  int v157; // [rsp+60h] [rbp-A0h]
  __int16 v158; // [rsp+64h] [rbp-9Ch]
  __int64 v159; // [rsp+68h] [rbp-98h]
  HSEMAPHORE v160; // [rsp+70h] [rbp-90h] BYREF
  int v161; // [rsp+78h] [rbp-88h]
  __int16 v162; // [rsp+7Ch] [rbp-84h]
  __int64 v163; // [rsp+80h] [rbp-80h]
  unsigned int v164[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v165; // [rsp+90h] [rbp-70h]
  __int64 v166; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v167; // [rsp+A0h] [rbp-60h]
  __int64 *v168; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v169)(); // [rsp+B0h] [rbp-50h]
  SURFACE *v170; // [rsp+B8h] [rbp-48h]
  __int64 v171; // [rsp+C0h] [rbp-40h]
  DC **v172; // [rsp+C8h] [rbp-38h]
  __int64 v173; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v174; // [rsp+D8h] [rbp-28h]
  __int64 *v175; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v176)(); // [rsp+E8h] [rbp-18h]
  __int64 *v177; // [rsp+F0h] [rbp-10h]
  _BYTE v178[12]; // [rsp+F8h] [rbp-8h] BYREF

  v171 = 0LL;
  v4 = a3;
  v166 = 0LL;
  v167 = 0LL;
  *(_QWORD *)v178 = a3;
  v172 = (DC **)a2;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    v8 = *CurrentThreadWin32Thread;
  else
    v8 = 0LL;
  v9 = v8 + 8;
  v10 = -v8;
  v11 = v9 & -(__int64)(v10 != 0);
  v168 = &v166;
  v169 = UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
  if ( v11 )
  {
    v12 = *(_QWORD *)((v9 & -(__int64)(v10 != 0)) + 0x58);
    if ( *(_QWORD *)(v12 + 8) != v11 + 88 )
      goto LABEL_5;
    v166 = *(_QWORD *)(v11 + 88);
    v167 = (__int64 *)(v11 + 88);
    *(_QWORD *)(v12 + 8) = &v166;
    v10 = (__int64)&v166;
    *(_QWORD *)(v11 + 88) = &v166;
  }
  else
  {
    v167 = &v166;
    v166 = (__int64)&v166;
  }
  v165 = *(_QWORD *)(a2 + 16);
  v170 = 0LL;
  v153 = (HSEMAPHORE)(**(_QWORD **)(W32GetSessionState(v10) + 88) + 624LL);
  EngAcquireSemaphoreShared(v153);
  v13 = GreGetCurrentThreadCrossSessionCheck();
  v15 = v13;
  v16 = 1;
  if ( v13 )
  {
    v17 = *(_QWORD *)v13;
    if ( (*(_QWORD *)v13 & 0xFFFFFFDFFFFFFFFEuLL) != 0 && (*(_QWORD *)v13 & 2) == 0 )
    {
      v148 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v149 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v17) == 0 )
          v149 = v148;
        v148 = v149;
      }
      if ( v149 > 1 && v149 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v149, v17);
    }
    LOBYTE(i) = *((_BYTE *)v15 + 9);
    *((_BYTE *)v15 + 9) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v15 |= 2uLL;
  }
  v162 = 0;
  v18 = 0LL;
  *(_QWORD *)v164 = *(_QWORD *)(W32GetSessionState(i) + 88);
  v19 = 0LL;
  v163 = *(_QWORD *)v164;
  v20 = (unsigned __int16)v4 | (v4 >> 8) & 0xFF0000;
  v154 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v154);
  if ( !(unsigned int)IsThreadCrossSessionAttached() && CurrentThreadWin32ThreadAndEnterCriticalRegion )
    v19 = *CurrentThreadWin32ThreadAndEnterCriticalRegion;
  v22 = (v19 + 8) & -(__int64)(v19 != 0);
  if ( v22 )
    v155 = *(__int64 **)(v22 + 64);
  else
    v155 = 0LL;
  v23 = 1;
  v161 = 1;
  v24 = (HSEMAPHORE)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v164 + 8LL) + 40LL))(
                      *(_QWORD *)(*(_QWORD *)v164 + 8LL),
                      v20);
  v160 = v24;
  v25 = v24;
  if ( v24 )
  {
    _m_prefetchw(v24 + 2);
    v26 = (_DWORD)v24[2] & 0xFFFFFFFE;
    if ( v26 != (v154 & 0xFFFFFFFC) && v26 && (!v155 || v26 != (unsigned int)UMPDGetThreadClientPID(v22)) )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v160);
      v23 = v161;
      v25 = v160;
      goto LABEL_19;
    }
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v164 + 8LL) + 96LL))(
                       *(_QWORD *)(*(_QWORD *)v164 + 8LL),
                       *(_DWORD *)v25)
                   + 14) & 0x20) == 0 )
    {
LABEL_19:
      v18 = 0LL;
      goto LABEL_20;
    }
    v18 = 0LL;
    if ( !v22
      || (v144 = *(ThreadRestrictNewHandlesRegion **)(v22 + 328)) == 0LL
      || !*((_BYTE *)v144 + 80)
      || !ThreadRestrictNewHandlesRegion::InRegion(v144, v20) )
    {
      LOBYTE(v162) = 1;
      HANDLELOCK::vUnlock((HANDLELOCK *)&v160);
      v23 = v161;
      v25 = v160;
    }
  }
  else
  {
    v23 = 0;
    KeLeaveCriticalRegion();
  }
LABEL_20:
  if ( v23 )
  {
    v27 = v163;
    if ( *((_BYTE *)v25 + 14) == 5 && *((_WORD *)v25 + 6) == *(_WORD *)&v178[2] )
    {
      v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v163 + 8) + 96LL))(
              *(_QWORD *)(v163 + 8),
              *(_DWORD *)v25);
      v29 = *(_QWORD *)v164;
      v18 = (SURFACE *)v28;
      ++*(_DWORD *)(v28 + 8);
      TrackObjectReferenceIncrement(v29, 3LL, *(_QWORD *)(v28 + 680));
    }
    v30 = *(__int64 **)(v27 + 8);
    v31 = *v30;
    v32 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v30 + 96))(v30, *(_DWORD *)v25);
    (*(void (__fastcall **)(__int64 *, __int64))(v31 + 48))(v30, v32);
    KeLeaveCriticalRegion();
  }
  v170 = v18;
  if ( v18 )
  {
    LOBYTE(v161) = (a4 & 2) != 0;
    v160 = (HSEMAPHORE)(*(_QWORD *)v165 + 1144LL);
    if ( (a4 & 2) != 0 )
      EngAcquireSemaphoreShared(v160);
    else
      GreAcquireSemaphoreInternal(v160);
    GrepAcquireLockValidate<2>();
    v35 = *(__int64 **)(W32GetSessionState(v33) + 88);
    v37 = *v35;
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer((_DWORD)v35, v34, v36, v37 + 1512, 0, (__int64)L"Hmgr");
    GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v35, v37 + 1512);
    v38 = v172;
    v39 = 0LL;
    v40 = v170;
    v41 = 1;
    v164[0] = 1;
    v42 = *v172;
    v43 = (__int64)v172[2];
    v44 = *((_QWORD *)*v172 + 6);
    if ( *(_QWORD *)*v172 )
    {
      v45 = HmgPentryFromPobj(v43);
      v39 = 0LL;
    }
    else
    {
      v159 = 0LL;
      v45 = (__int64)v42 + 2152;
      *(_OWORD *)((char *)v42 + 2152) = 0LL;
      *((_QWORD *)v42 + 271) = v159;
      *((_DWORD *)v42 + 540) = -2147483630;
      *((_QWORD *)v42 + 271) = 0LL;
    }
    v46 = *v38;
    v151 = *(_DWORD *)(v45 + 8) & 0xFFFFFFFE;
    if ( *((_DWORD *)*v38 + 8) != 1 )
    {
      *(_BYTE *)(a1 + 8) = 6;
      goto LABEL_225;
    }
    if ( *((_DWORD *)v40 + 42) && !(unsigned int)SURFACE::bStockSurface(v40) && *((_QWORD *)v40 + 20) != *(_QWORD *)v46 )
    {
      *(_BYTE *)(a1 + 8) = 7;
LABEL_225:
      *(_QWORD *)a1 = v39;
      goto LABEL_166;
    }
    v47 = *((_QWORD *)v40 + 16);
    v48 = *((_QWORD *)v46 + 6);
    v154 = v47;
    if ( (*((_WORD *)v40 + 50) != (_WORD)v39 || *((_QWORD *)v40 + 3) != v39) && *((_QWORD *)v40 + 6) != v48 )
    {
LABEL_199:
      *(_BYTE *)(a1 + 8) = v16;
      goto LABEL_225;
    }
    if ( !v47 )
    {
      if ( *((_DWORD *)v40 + 24) != *(_DWORD *)(v48 + 2092) )
      {
        v16 = 2;
        goto LABEL_199;
      }
      if ( (*(_DWORD *)(v48 + 2156) & 0x100) != 0 )
        v154 = v39;
      else
        v154 = *(_QWORD *)(v48 + 1792);
    }
    v49 = *((_QWORD *)v40 + 6);
    if ( v40 != *(SURFACE **)(*(_QWORD *)(W32GetSessionState(v43) + 88) + 4376LL) && v48 && *((_QWORD *)v40 + 5) )
    {
      if ( (*(_DWORD *)(v48 + 40) & 1) != 0 && (*((_DWORD *)v40 + 28) & 0x40000) != 0 )
      {
        *(_DWORD *)v178 = 33279186;
        *(_QWORD *)&v178[4] = 1LL;
        RtlLogUnexpectedCodepath(v178, 0LL);
        v135 = 3;
        goto LABEL_154;
      }
      if ( v49 && (*(_DWORD *)(v48 + 40) & 1) != (*(_DWORD *)(v49 + 40) & 1) )
      {
        *(_DWORD *)v178 = 33279186;
        *(_QWORD *)&v178[4] = 2LL;
        RtlLogUnexpectedCodepath(v178, 0LL);
        v135 = 4;
LABEL_154:
        *(_BYTE *)(a1 + 8) = v135;
        *(_QWORD *)a1 = 0LL;
        MLOCKOBJ::~MLOCKOBJ((MLOCKOBJ *)v164);
        SEMOBJEXORSHARED<2>::~SEMOBJEXORSHARED<2>(&v160);
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v153);
        SURFREF::~SURFREF((SURFREF *)&v166);
        return a1;
      }
    }
    v43 = v151;
    if ( v151 && (*((_DWORD *)v40 + 28) & 0x800) != 0 )
    {
      *(_QWORD *)a1 = 0LL;
      *(_BYTE *)(a1 + 8) = 9;
      goto LABEL_166;
    }
    if ( (a4 & 4) == 0 && !v151 )
    {
      *(_QWORD *)a1 = 0LL;
      *(_BYTE *)(a1 + 8) = 10;
      goto LABEL_166;
    }
    v50 = *(_QWORD *)(W32GetSessionState(v151) + 88);
    v51 = *v172;
    v52 = (DC *)*((_QWORD *)*v172 + 62);
    if ( v52 )
    {
      if ( v172[3] )
        v52 = v172[3];
    }
    else
    {
      v52 = *(DC **)(v50 + 4376);
    }
    v43 = 0x4000000LL;
    if ( ((*((_DWORD *)v52 + 28) & 0x4000000) == 0
       || (*((_DWORD *)v40 + 28) & 0x4000000) == 0
       || _bittest((const signed __int32 *)v52 + 29, 9u))
      && (a4 & 1) == 0 )
    {
      *(_QWORD *)a1 = 0LL;
      *(_BYTE *)(a1 + 8) = 11;
LABEL_166:
      SessionState = W32GetSessionState(v43);
      GreReleaseSemaphoreExclusive<20,>(*(_QWORD *)(SessionState + 88));
      SEMOBJEXORSHARED<2>::~SEMOBJEXORSHARED<2>(&v160);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v153);
      v132 = v170 == 0LL;
      goto LABEL_139;
    }
    v53 = *((_QWORD *)v51 + 122);
    v54 = *(unsigned int *)(v53 + 108);
    v164[0] = v54;
    if ( (v54 & 7) != 0 )
    {
      *(_DWORD *)(v53 + 108) = 0;
      v139 = *((_QWORD *)v51 + 122);
      v152 = *(_QWORD *)(v139 + 316);
      v140 = *(_QWORD *)(v139 + 324);
      LODWORD(v152) = -(int)v152;
      HIDWORD(v155) = HIDWORD(v140);
      LODWORD(v155) = -(int)v140;
      *(_QWORD *)(v139 + 316) = v152;
      *(_QWORD *)(*((_QWORD *)v51 + 122) + 324LL) = v155;
      DC::MirrorWindowOrg(v51);
      v142 = *(_QWORD *)(v141 + 976);
      if ( (*(_BYTE *)(v142 + 272) & 6) != 6 )
        *(_DWORD *)(v142 + 272) ^= 2u;
      v54 = *(unsigned int *)(v141 + 248);
      v143 = v54 & 0xFFFFFFFB;
      if ( (v54 & 4) == 0 )
        v143 = *(_DWORD *)(v141 + 248) | 4;
      *(_DWORD *)(v141 + 248) = v143;
      *(_DWORD *)(*(_QWORD *)(v141 + 976) + 340LL) |= 0x4090u;
    }
    v55 = v154;
    if ( *((_QWORD *)v40 + 16) != v154 )
    {
      *((_DWORD *)v40 + 28) |= 0x8000000u;
      *((_QWORD *)v40 + 16) = v55;
      if ( v55 )
      {
        v138 = W32GetSessionState(v54);
        HmgIncrementShareReferenceCount(*(_QWORD *)(v138 + 88), v55);
      }
    }
    if ( (*((_DWORD *)v52 + 28) & 0x1000000) != 0 )
      v171 = *(_QWORD *)v52;
    v56 = *((_QWORD *)v52 + 4);
    v154 = v56;
    if ( *(_QWORD *)v178 == v56 )
      goto LABEL_127;
    v57 = W32GetSessionState(v54);
    v58 = v172;
    v59 = *v172;
    if ( v40 == *(SURFACE **)(*(_QWORD *)(v57 + 88) + 4376LL) )
    {
      v60 = *((_DWORD *)v59 + 130);
      *((_QWORD *)v59 + 62) = 0LL;
      if ( (v60 & 1) != 0 )
      {
        *((_DWORD *)v59 + 9) |= 0x10u;
        *(_QWORD *)((char *)v59 + 524) = 0LL;
        *((_DWORD *)v59 + 130) = v60 & 0xFFFFFFF8 | 4;
        *(_QWORD *)((char *)v59 + 532) = 0LL;
        DC::vUpdateCachedDPIScaleValue(v59);
      }
    }
    else
    {
      *((_QWORD *)v59 + 62) = v40;
      if ( (*((_DWORD *)v40 + 29) & 0x800) != 0 )
      {
        DC::vSetDpiScaling(
          v59,
          _mm_unpacklo_ps((__m128)*((unsigned int *)v40 + 165), (__m128)*((unsigned int *)v40 + 166)).m128_u64[0]);
      }
      else
      {
        v136 = *((_DWORD *)v59 + 130);
        if ( (v136 & 1) != 0 )
        {
          *((_DWORD *)v59 + 9) |= 0x10u;
          *(_QWORD *)((char *)v59 + 524) = 0LL;
          *(_QWORD *)((char *)v59 + 532) = 0LL;
          *((_DWORD *)v59 + 130) = v136 & 0xFFFFFFF8 | 4;
          DC::vUpdateCachedDPIScaleValue(v59);
        }
      }
      if ( (*(_DWORD *)v40 & 0x800000) != 0 && _bittest16((const signed __int16 *)v40 + 51, 9u)
        || !*((_WORD *)v40 + 50) && *((_DWORD *)v40 + 54) )
      {
        *((_DWORD *)*v58 + 9) |= 0x10000u;
      }
      else
      {
        *((_DWORD *)*v58 + 9) &= ~0x10000u;
      }
    }
    *((_QWORD *)*v58 + 64) = *((_QWORD *)v40 + 7);
    v61 = *((_QWORD *)*v58 + 122);
    *(_DWORD *)(v61 + 152) |= 0xFu;
    v62 = *(_QWORD *)(W32GetSessionState(v61) + 88);
    if ( v52 != *(DC **)(v62 + 4376) )
    {
      if ( (*((_DWORD *)v52 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
        vMirrorIncludeNotifyWrap(v58, v52, 0LL);
      SURFACE::vDec_cRef(v52);
      if ( !*((_DWORD *)v52 + 42) )
      {
        if ( v171 )
          v171 = *(_QWORD *)v52;
        if ( (*((_DWORD *)v52 + 28) & 0x8000000) != 0 )
        {
          *(_QWORD *)v178 = *((_QWORD *)v52 + 16);
          *((_QWORD *)v52 + 16) = 0LL;
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)v178);
        }
        *((_DWORD *)v52 + 28) &= ~0x8000000u;
      }
    }
    v63 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v62) + 24) + 608LL);
    if ( v63 )
    {
      if ( v63() >= 0 )
      {
        v65 = *(void (__fastcall **)(DC **, SURFACE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v64) + 24)
                                                               + 616LL);
        if ( v65 )
          v65(v58, v40, 1LL);
      }
    }
    v66 = *((_DWORD *)v40 + 28);
    v67 = (v66 & 0x4000) != 0 || (v66 & 0x800010) != 0 && (*(_DWORD *)(v44 + 40) & 1) != 0;
    v68 = *((_DWORD *)*v58 + 9);
    v69 = v68 | 0x200;
    v70 = v68 & 0xFFFFFDFF;
    if ( !v67 )
      v69 = v70;
    *((_DWORD *)*v58 + 9) = v69;
    v71 = *((unsigned int *)*v58 + 9);
    if ( (v71 & 0x200) != 0 && (*((_DWORD *)v40 + 28) & 0x200) != 0 )
      LODWORD(v71) = v71 | 0x8000;
    else
      LODWORD(v71) = v71 & 0xFFFF7FFF;
    *((_DWORD *)*v58 + 9) = v71;
    if ( v40 != *(SURFACE **)(*(_QWORD *)(W32GetSessionState(v71) + 88) + 4376LL) )
    {
      SURFACE::vInc_cRef(v40);
      if ( (*(_DWORD *)v40 & 0x800000) == 0 || (*((_WORD *)v40 + 51) & 0x200) == 0 )
      {
        *((_QWORD *)v40 + 20) = *(_QWORD *)*v58;
        *((_QWORD *)v40 + 6) = *((_QWORD *)*v58 + 6);
      }
    }
    if ( *((_WORD *)v40 + 50) || (v72 = 1, !*((_QWORD *)v40 + 24)) )
      v72 = 0;
    **((_DWORD **)*v58 + 122) = v72 | **((_DWORD **)*v58 + 122) & 0xFFFFFFFE;
    if ( *((_WORD *)v40 + 50) || (v73 = 1, !*((_QWORD *)v40 + 24)) )
      v73 = 0;
    v74 = *((_QWORD *)*v58 + 122);
    if ( v73 )
      v75 = *((_QWORD *)v40 + 25);
    else
      v75 = 0LL;
    *(_QWORD *)(v74 + 24) = v75;
    v76 = W32GetSessionState(v74);
    v77 = v170;
    v156 = 0LL;
    v78 = *(_QWORD *)(v76 + 88);
    v79 = (unsigned __int16)*(_DWORD *)v170 | (*(_DWORD *)v170 >> 8) & 0xFF0000u;
    v157 = 0;
    v158 = 0;
    v159 = v78;
    HANDLELOCK::vLockHandle(&v156, v79, 1LL);
    if ( !v157 )
    {
      HmgPentryFromPobj(v78);
      goto LABEL_94;
    }
    v80 = v156;
    switch ( *((_BYTE *)v156 + 14) )
    {
      case 4:
        v81 = *((_QWORD *)v77 + 14);
        v82 = 2LL;
        break;
      case 5:
        v81 = *((_QWORD *)v77 + 85);
        v82 = 3LL;
        break;
      case 0x10:
        v81 = *((_QWORD *)v77 + 17);
        v82 = 0LL;
        break;
      default:
        goto LABEL_93;
    }
    TrackObjectReferenceDecrement(v78, v82, v81);
LABEL_93:
    --*((_DWORD *)v77 + 2);
    v83 = *(__int64 **)(v159 + 8);
    v84 = *v83;
    v85 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v83 + 96))(v83, *v80);
    (*(void (__fastcall **)(__int64 *, __int64))(v84 + 48))(v83, v85);
    KeLeaveCriticalRegion();
LABEL_94:
    v170 = 0LL;
    v87 = W32GetSessionState(v86);
    GreReleaseSemaphoreExclusive<20,>(*(_QWORD *)(v87 + 88));
    v41 = 0;
    DC::bSetDefaultRegion(*v58);
    v88 = *v58;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v88 + 1112, 0LL);
    GrepAcquireLockValidate<37>();
    GrepAcquireLockValidate<38>();
    v89 = *v172;
    v90 = *((_QWORD *)*v172 + 142);
    if ( *(_QWORD *)*v172 )
    {
      v91 = HmgPentryFromPobj(v165);
    }
    else
    {
      v91 = (__int64)v89 + 2152;
      *(_OWORD *)((char *)v89 + 2152) = 0LL;
      v159 = 0LL;
      *((_QWORD *)v89 + 271) = 0LL;
      *((_DWORD *)v89 + 540) = -2147483630;
      *((_QWORD *)v89 + 271) = 0LL;
    }
    if ( (*(_BYTE *)(v91 + 15) & 4) != 0 )
    {
      if ( !v90
        || (*(_QWORD *)v178 = v90,
            *(_DWORD *)(*((_QWORD *)v89 + 122) + 116LL) = RGNOBJ::iComplexity((RGNOBJ *)v178),
            (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v178) == 1) )
      {
        *(_OWORD *)(*((_QWORD *)v89 + 122) + 120LL) = xmmword_140265508;
      }
      else
      {
        v92 = *((_DWORD *)v89 + 258);
        v93 = *((_DWORD *)v89 + 259);
        v94 = (_DWORD *)*((_QWORD *)v89 + 122);
        v95 = _mm_srli_si128(*(__m128i *)(v90 + 52), 8).m128i_u64[0];
        v96 = HIDWORD(*(_QWORD *)(v90 + 52)) - v93;
        v94[30] = *(_OWORD *)(v90 + 52) - v92;
        v94[31] = v96;
        v94[32] = v95 - v92;
        v94[33] = HIDWORD(v95) - v93;
      }
      *(_BYTE *)(v91 + 15) &= ~4u;
    }
    v97 = GreGetCurrentThreadCrossSessionCheck();
    if ( v97 )
      *(_QWORD *)v97 &= ~0x4000000000uLL;
    GrePushLock::ReleaseLock((DC *)((char *)v88 + 1112));
    v98 = v171;
    if ( v171 )
    {
      v173 = 0LL;
      v174 = 0LL;
      v99 = (__int64 *)PsGetCurrentThreadWin32Thread();
      if ( v99 )
        v100 = *v99;
      else
        v100 = 0LL;
      v175 = &v173;
      v176 = UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
      if ( ((v100 + 8) & -(__int64)(v100 != 0)) != 0 )
      {
        v101 = *(_QWORD *)(((v100 + 8) & -(__int64)(v100 != 0)) + 0x58);
        if ( *(_QWORD *)(v101 + 8) != ((v100 + 8) & -(__int64)(v100 != 0)) + 88 )
LABEL_5:
          __fastfail(3u);
        v173 = *(_QWORD *)(((v100 + 8) & -(__int64)(v100 != 0)) + 0x58);
        v174 = (__int64 *)(((v100 + 8) & -(__int64)(v100 != 0)) + 88);
        *(_QWORD *)(v101 + 8) = &v173;
        *(_QWORD *)(((v100 + 8) & -(__int64)(v100 != 0)) + 0x58) = &v173;
      }
      else
      {
        v174 = &v173;
        v173 = (__int64)&v173;
      }
      v102 = v98;
      v159 = v165;
      v103 = (unsigned __int16)v98;
      v104 = 0LL;
      v155 = 0LL;
      v105 = v103 | (v102 >> 8) & 0xFF0000;
      v158 = 0;
      *(_QWORD *)v178 = 0LL;
      v106 = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v178);
      if ( !(unsigned int)IsThreadCrossSessionAttached() && v106 )
        v104 = *v106;
      v107 = (v104 + 8) & -(__int64)(v104 != 0);
      if ( v107 )
        v154 = *(_QWORD *)(v107 + 64);
      else
        v154 = 0LL;
      v108 = 1;
      v157 = 1;
      v109 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v165 + 8) + 40LL))(*(_QWORD *)(v165 + 8), v105);
      v156 = (unsigned int *)v109;
      v110 = (unsigned int *)v109;
      if ( v109 )
      {
        _m_prefetchw((const void *)(v109 + 8));
        v111 = *(_DWORD *)(v109 + 8) & 0xFFFFFFFE;
        if ( v111 == (*(_DWORD *)v178 & 0xFFFFFFFC)
          || !v111
          || v154 && v111 == (unsigned int)UMPDGetThreadClientPID(v107) )
        {
          if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v165 + 8) + 96LL))(
                             *(_QWORD *)(v165 + 8),
                             *v110)
                         + 14) & 0x20) == 0 )
            goto LABEL_117;
          v145 = ThreadRestrictNewHandlesRegion::Get((struct _GRETHREAD *)v107);
          if ( v145 )
          {
            if ( *((_BYTE *)v145 + 80) && ThreadRestrictNewHandlesRegion::InRegion(v145, v105) )
              goto LABEL_117;
          }
          LOBYTE(v158) = 1;
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)&v156);
        v110 = v156;
        v108 = v157;
      }
      else
      {
        v108 = 0;
        KeLeaveCriticalRegion();
      }
LABEL_117:
      if ( v108 )
      {
        v112 = v159;
        if ( *((_BYTE *)v110 + 14) == 5 && *((_WORD *)v110 + 6) == WORD1(v171) )
        {
          v113 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v159 + 8) + 96LL))(
                   *(_QWORD *)(v159 + 8),
                   *v110);
          v114 = v165;
          v155 = (__int64 *)v113;
          ++*(_DWORD *)(v113 + 8);
          TrackObjectReferenceIncrement(v114, 3LL, *(_QWORD *)(v113 + 680));
        }
        v115 = *(__int64 **)(v112 + 8);
        v116 = *v115;
        v117 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v115 + 96))(v115, *v110);
        (*(void (__fastcall **)(__int64 *, __int64))(v116 + 48))(v115, v117);
        KeLeaveCriticalRegion();
      }
      v118 = v165;
      v177 = v155;
      v119 = SURFACE::bDeleteSurface(v155, v165, 0, 0);
      v120 = v177;
      v132 = v119 == 0;
      v121 = *(_QWORD *)(v118 + 3088);
      if ( !v132 )
        v120 = 0LL;
      v177 = v120;
      v56 = *(_QWORD *)(v121 + 168);
      if ( v120 )
      {
        v122 = W32GetSessionState(v120);
        HmgDecrementShareReferenceCount(*(_QWORD *)(v122 + 88), v177);
      }
      PopThreadGuardedObject(&v173);
      goto LABEL_127;
    }
    v56 = v154;
LABEL_127:
    if ( (v164[0] & 7) != 0 )
      DC::dwSetLayout(*v172, -1, v164[0]);
    *(_QWORD *)a1 = v56;
    *(_BYTE *)(a1 + 8) = 0;
    if ( v41 )
    {
      v123 = W32GetSessionState(v54);
      GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(*(_QWORD *)(v123 + 88), **(_QWORD **)(v123 + 88) + 1512LL);
    }
    SEMOBJEXORSHARED<2>::~SEMOBJEXORSHARED<2>(&v160);
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v124,
        (unsigned int)&LockRelease,
        v125,
        (_DWORD)v153,
        (__int64)L"DynamicModeChange");
    CurrentThread = KeGetCurrentThread();
    v127 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v127 = *ThreadWin32Thread;
    }
    v129 = v127 + 8;
    v130 = -v127;
    if ( (v129 & -(__int64)(v130 != 0)) != 0 )
    {
      v132 = (*(_BYTE *)((v129 & -(__int64)(v130 != 0)) + 9))-- == 1;
      if ( v132 )
        *(_QWORD *)(v129 & -(__int64)(v130 != 0)) &= ~2uLL;
    }
    GreReleaseSemaphoreSharedInternal(v153);
    v132 = v170 == 0LL;
    goto LABEL_139;
  }
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 5;
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v153);
  v132 = v170 == 0LL;
LABEL_139:
  if ( !v132 )
  {
    v133 = W32GetSessionState(v131);
    HmgDecrementShareReferenceCount(*(_QWORD *)(v133 + 88), v170);
  }
  PopThreadGuardedObject(&v166);
  return a1;
}
