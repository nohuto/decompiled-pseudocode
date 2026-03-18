/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x140071D90 (vDynamicConvertNewSurfaceDCs.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x140086260 (-vCleanupSurfaces@@YAXK@Z.c)
 *     bDeleteSurface @ 0x14008CE40 (bDeleteSurface.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x14008D32C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x140092BB0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x140093688 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1680 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001A830 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x14001B260 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x14001B29C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B6B0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     SURFACE_Free @ 0x14001D1C0 (SURFACE_Free.c)
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x140043ED8 (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400458F8 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x140045DD0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140046704 (-vUnlock@-$SEMOBJ@$0CE@@@QEAAXXZ.c)
 *     EngFreeUserMem @ 0x140073720 (EngFreeUserMem.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x140083AF8 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x140083B68 (-GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x140085008 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x1400865B0 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x140086D90 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008E1A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14008E5C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDeleteDriverRealization@SURFACE@@QEAAXXZ @ 0x14008E610 (-vDeleteDriverRealization@SURFACE@@QEAAXXZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x14008E750 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1400DE8DC (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x14011DE80 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x140129FB4 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x14013974C (UMPDGetThreadClientPID.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C6124 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(__int64 a1, int a2, int a3)
{
  unsigned int v5; // esi
  __int64 v6; // rcx
  void *v7; // r13
  __int64 v8; // r13
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  void *v11; // rax
  __int128 v12; // xmm0
  void *v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // r12
  ULONG IsResourceAcquiredSharedLite; // ebx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rbx
  int (*v21)(void); // rax
  void (__fastcall *v22)(__int128 *, _QWORD); // rax
  bool v23; // zf
  __int64 v24; // rcx
  int (*v25)(void); // rax
  void (__fastcall *v26)(__int128 *, _QWORD); // rax
  struct HOBJ__ *v27; // r15
  __int64 SessionState; // rax
  unsigned int v29; // r8d
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r10
  unsigned int v33; // r9d
  __int64 v34; // rcx
  __int64 v35; // r11
  __int64 v36; // rax
  __int64 v37; // r10
  unsigned int v38; // edx
  unsigned int v39; // ecx
  __int64 v40; // r10
  __int64 v41; // r9
  int v42; // r15d
  __int64 v43; // rcx
  __int64 v44; // rbx
  unsigned __int64 v45; // rdx
  unsigned int v46; // r8d
  __int64 v47; // r10
  unsigned int v48; // r9d
  __int64 v49; // rcx
  __int64 v50; // r11
  __int64 v51; // rax
  __int64 v52; // r9
  unsigned int v53; // r8d
  __int64 v54; // rcx
  __int64 v55; // r10
  __int64 v56; // rbx
  int v57; // eax
  char v58; // cl
  __int64 v59; // rdx
  __int64 v60; // rcx
  int (*v61)(void); // rax
  void (__fastcall *v62)(__int64); // rax
  HANDLE v63; // rbx
  HANDLE v64; // rbx
  __int64 v65; // rbx
  int v67; // eax
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v69; // r14d
  _QWORD *v70; // rcx
  struct _GRETHREAD *v71; // rbx
  __int64 v72; // rdx
  int v73; // eax
  PVOID v74; // rdx
  PEPROCESS *v75; // r8
  __int64 v76; // rax
  __int64 v77; // rcx
  _QWORD *v78; // rdx
  int v79; // eax
  __int64 v80; // rcx
  struct _ERESOURCE **v81; // rcx
  int (*v82)(void); // rax
  void (__fastcall *v83)(__int64); // rax
  struct _ERESOURCE **v84; // rcx
  int (*v85)(void); // rax
  void (__fastcall *v86)(PVOID); // rax
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v88; // [rsp+58h] [rbp-A8h]
  struct HOBJ__ *v89; // [rsp+60h] [rbp-A0h]
  int v90; // [rsp+68h] [rbp-98h]
  int v91; // [rsp+6Ch] [rbp-94h]
  struct _ERESOURCE *v92; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v93; // [rsp+78h] [rbp-88h] BYREF
  __int64 v94; // [rsp+80h] [rbp-80h]
  _QWORD *v95; // [rsp+88h] [rbp-78h]
  __int64 v96; // [rsp+90h] [rbp-70h]
  __int64 v97; // [rsp+98h] [rbp-68h]
  int v98; // [rsp+A0h] [rbp-60h]
  HANDLE v99; // [rsp+A8h] [rbp-58h]
  HANDLE SecureHandle; // [rsp+B0h] [rbp-50h]
  __int64 v101; // [rsp+B8h] [rbp-48h]
  PVOID v102; // [rsp+C0h] [rbp-40h]
  PVOID Object[2]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v104[4]; // [rsp+D8h] [rbp-28h]
  __int64 v105; // [rsp+E8h] [rbp-18h]
  int v106; // [rsp+F0h] [rbp-10h]
  __int64 v107; // [rsp+F8h] [rbp-8h] BYREF
  HSEMAPHORE v108; // [rsp+100h] [rbp+0h] BYREF
  __int64 v109; // [rsp+108h] [rbp+8h]
  __int64 v110; // [rsp+110h] [rbp+10h]
  __int64 *v111; // [rsp+118h] [rbp+18h] BYREF
  bool v112; // [rsp+120h] [rbp+20h]
  __int128 v113; // [rsp+130h] [rbp+30h] BYREF
  __int64 v114; // [rsp+140h] [rbp+40h]
  int v115; // [rsp+148h] [rbp+48h]
  char v116[80]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v117; // [rsp+1A0h] [rbp+A0h]
  __int64 v118; // [rsp+1A8h] [rbp+A8h]
  __int64 v119; // [rsp+1B0h] [rbp+B0h]
  _OWORD v120[6]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v121; // [rsp+230h] [rbp+130h] BYREF
  int v122; // [rsp+238h] [rbp+138h]
  ULONG_PTR RegionSize; // [rsp+248h] [rbp+148h] BYREF

  v122 = a2;
  v5 = 1;
  if ( a1 != *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4264LL) && a1 )
  {
    v7 = 0LL;
    SecureHandle = 0LL;
    v101 = 0LL;
    v99 = 0LL;
    LODWORD(RegionSize) = 0;
    if ( !*(_WORD *)(a1 + 100) )
    {
      v8 = *(_QWORD *)(a1 + 72);
      SecureHandle = *(HANDLE *)(a1 + 192);
      v101 = *(_QWORD *)(a1 + 184);
      LODWORD(RegionSize) = *(_DWORD *)(a1 + 216);
      v6 = (unsigned __int16)*(_DWORD *)(a1 + 212);
      v7 = (void *)(v8 - v6);
      v99 = *(HANDLE *)(a1 + 224);
    }
    v9 = *(_OWORD *)(a1 + 272);
    v10 = *(_OWORD *)(a1 + 288);
    v110 = *(_QWORD *)(a1 + 128);
    v109 = *(_QWORD *)(a1 + 136);
    v11 = *(void **)(a1 + 72);
    v120[0] = v9;
    BaseAddress = v11;
    v12 = *(_OWORD *)(a1 + 304);
    v91 = *(unsigned __int16 *)(a1 + 102);
    v13 = *(void **)(a1 + 248);
    v120[2] = v12;
    v102 = v13;
    v14 = *(_OWORD *)(a1 + 584);
    LODWORD(v13) = *(_DWORD *)(a1 + 320);
    v120[1] = v10;
    v90 = (int)v13;
    v15 = *(_OWORD *)(a1 + 600);
    *(_OWORD *)Object = v14;
    v105 = *(_QWORD *)(a1 + 616);
    *(_OWORD *)v104 = v15;
    v16 = *(_QWORD *)(W32GetSessionState(v6) + 88);
    IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)(*(_QWORD *)v16 + 624LL));
    v112 = IsResourceAcquiredSharedLite == 0;
    v19 = *(__int64 **)(W32GetSessionState(v18) + 88);
    v111 = v19;
    if ( !IsResourceAcquiredSharedLite )
      GreAcquireSemaphoreShared<1,>(v19);
    v20 = *(_QWORD *)(a1 + 48);
    v107 = v20;
    if ( !v20 || (*(_DWORD *)(a1 + 112) & 0x400000) == 0 || (*(_DWORD *)(v20 + 40) & 1) == 0 )
      NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v111);
    v92 = 0LL;
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v116);
    v114 = 0LL;
    v113 = 0LL;
    v115 = 0;
    v21 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 768LL);
    if ( v21 )
    {
      if ( v21() >= 0 )
      {
        v22 = *(void (__fastcall **)(__int128 *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 776LL);
        if ( v22 )
          v22(&v113, 0LL);
      }
    }
    v23 = (*(_DWORD *)(a1 + 112) & 0x400000) == 0;
    v119 = 0LL;
    v118 = 0LL;
    v117 = 0LL;
    if ( v23 || !v20 )
    {
      v114 = 0LL;
      v113 = 0LL;
      v115 = 0;
      v24 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
      v25 = *(int (**)(void))(v24 + 768);
      if ( v25 )
      {
        if ( v25() >= 0 )
        {
          v24 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
          v26 = *(void (__fastcall **)(__int128 *, _QWORD))(v24 + 776);
          if ( v26 )
            v26(&v113, 0LL);
        }
      }
      v119 = 0LL;
      v118 = 0LL;
      v117 = 0LL;
    }
    else
    {
      v92 = 0LL;
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v107) && (*(_DWORD *)(v20 + 40) & 0x8000) == 0 )
      {
        v84 = *(struct _ERESOURCE ***)(W32GetSessionState(v80) + 88);
        v92 = *v84 + 11;
        GreAcquireSemaphore<2,>(v84);
      }
      v118 = 0LL;
      v113 = 0LL;
      v117 = 0LL;
      DEVLOCKOBJ::bPrepareTrgDco((DEVLOCKOBJ *)&v113, 0LL);
      v115 = 1;
      if ( (*(_DWORD *)(v20 + 40) & 1) != 0 )
      {
        v81 = *(struct _ERESOURCE ***)(W32GetSessionState(v24) + 88);
        *(_QWORD *)&v113 = *(_QWORD *)(v20 + 48);
        v114 = v20;
        if ( (struct _ERESOURCE *)v113 == &(*v81)[11] )
        {
          v115 |= 0x100000u;
          GreAcquireSemaphore<2,>(v81);
        }
        else
        {
          GreAcquireSemaphore<8,PDEVOBJ>(v20);
        }
      }
    }
    v89 = *(struct HOBJ__ **)a1;
    v27 = v89;
    v88 = -2147483614;
    SessionState = W32GetSessionState(v24);
    v29 = (unsigned __int16)v27 | ((unsigned int)v27 >> 8) & 0xFF0000;
    v30 = *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 5672LL);
    if ( v29 >= 0x10000 )
    {
      v31 = (unsigned __int16)v89;
      if ( *(_DWORD *)v30 <= 0x10000u )
      {
        v29 = (unsigned __int16)v89;
      }
      else
      {
        v32 = *(_QWORD *)(v30 + 16);
        v33 = *(_DWORD *)(v32 + 2056);
        if ( (unsigned __int16)v89 >= v33 + ((*(unsigned __int16 *)(v32 + 2) + 0xFFFF) << 16) )
        {
          v36 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v89 >= v33 )
            v34 = (((unsigned __int16)v89 - v33) >> 16) + 1;
          else
            v34 = 0LL;
          v35 = *(_QWORD *)(v32 + 8 * v34 + 8);
          if ( (_DWORD)v34 )
            v31 = ((1 - (_DWORD)v34) << 16) - v33 + (unsigned __int16)v89;
          v36 = 0LL;
          if ( (unsigned int)v31 < *(_DWORD *)(v35 + 20) )
            v36 = *(_QWORD *)v35 + 24 * v31;
        }
        if ( *(unsigned __int8 *)(v36 + 13) == HIWORD(v29) )
          v29 = (unsigned __int16)v89;
      }
    }
    v37 = *(_QWORD *)(v30 + 16);
    v38 = *(_DWORD *)(v37 + 2056);
    if ( v29 < v38 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
    {
      if ( v29 >= v38 )
        v39 = ((v29 - v38) >> 16) + 1;
      else
        v39 = 0;
      v40 = *(_QWORD *)(v37 + 8LL * v39 + 8);
      if ( v39 )
        v29 += ((1 - v39) << 16) - v38;
      v41 = 0LL;
      if ( v29 < *(_DWORD *)(v40 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * ((unsigned __int64)v29 >> 8))
                     + 16LL * (unsigned __int8)v29
                     + 8) )
      {
        v41 = *(_QWORD *)v40 + 24LL * v29;
      }
      if ( v41 && *(_BYTE *)(v41 + 14) == 5 && *(_WORD *)(v41 + 12) == WORD1(v89) )
        v88 = *(_DWORD *)(v41 + 8) & 0xFFFFFFFE;
    }
    LODWORD(v121) = 0;
    if ( a3 )
      goto LABEL_75;
    v42 = *(_DWORD *)(v16 + 3032);
    SEMOBJ<20>::SEMOBJ<20>(&v108);
    v93 = 0LL;
    LODWORD(v94) = 0;
    WORD2(v94) = 0;
    v95 = *(_QWORD **)(W32GetSessionState(v43) + 88);
    HANDLELOCK::vLockHandle((__int64 *)&v93, (unsigned __int16)v89 | ((unsigned int)v89 >> 8) & 0xFF0000, 0);
    if ( (_DWORD)v94 )
    {
      v44 = v95[709];
      v45 = *v93;
      if ( (unsigned int)v45 >= 0x10000 )
      {
        v46 = (unsigned __int16)v45;
        if ( *(_DWORD *)v44 <= 0x10000u )
        {
          v45 = (unsigned __int16)v45;
        }
        else
        {
          v47 = *(_QWORD *)(v44 + 16);
          v48 = *(_DWORD *)(v47 + 2056);
          if ( (unsigned __int16)v45 >= v48 + ((*(unsigned __int16 *)(v47 + 2) + 0xFFFF) << 16) )
          {
            v51 = 0LL;
          }
          else
          {
            if ( (unsigned __int16)v45 >= v48 )
              v49 = (((unsigned __int16)v45 - v48) >> 16) + 1;
            else
              v49 = 0LL;
            v50 = *(_QWORD *)(v47 + 8 * v49 + 8);
            if ( (_DWORD)v49 )
              v46 = ((1 - (_DWORD)v49) << 16) - v48 + (unsigned __int16)v45;
            v51 = 0LL;
            if ( v46 < *(_DWORD *)(v50 + 20) )
              v51 = *(_QWORD *)v50 + 24LL * v46;
          }
          if ( *(unsigned __int8 *)(v51 + 13) == WORD1(v45) )
            v45 = (unsigned __int16)v45;
        }
      }
      v52 = *(_QWORD *)(v44 + 16);
      v53 = *(_DWORD *)(v52 + 2056);
      if ( (unsigned int)v45 >= v53 + ((*(unsigned __int16 *)(v52 + 2) + 0xFFFF) << 16) )
        goto LABEL_122;
      if ( (unsigned int)v45 >= v53 )
        v54 = (((unsigned int)v45 - v53) >> 16) + 1;
      else
        v54 = 0LL;
      v55 = *(_QWORD *)(v52 + 8 * v54 + 8);
      if ( (_DWORD)v54 )
        v45 = ((1 - (_DWORD)v54) << 16) - v53 + (unsigned int)v45;
      if ( (unsigned int)v45 >= *(_DWORD *)(v55 + 20) )
LABEL_122:
        v56 = 0LL;
      else
        v56 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v55 + 24) + 8 * (v45 >> 8)) + 16LL * (unsigned __int8)v45 + 8);
      if ( *((_BYTE *)v93 + 14) == 5 && *((_WORD *)v93 + 6) == WORD1(v89) )
      {
        v57 = *(_DWORD *)(v56 + 8);
        if ( v57 != 1 || *(_WORD *)(v56 + 12) )
        {
          *((_BYTE *)v93 + 15) |= 8u;
          LODWORD(v121) = v57;
        }
        else if ( v42 || (*((_BYTE *)v93 + 15) & 1) == 0 )
        {
          v58 = *(_BYTE *)(HmgPentryFromPobj((_DWORD *)v56) + 14);
          if ( v58 == 5 )
          {
            v59 = *(_QWORD *)(v56 + 680);
            v60 = 0LL;
          }
          else
          {
            if ( v58 != 16 )
            {
LABEL_72:
              HANDLELOCK::vUnlockAndRelease(&v93);
              goto LABEL_73;
            }
            v59 = *(_QWORD *)(v56 + 136);
            v60 = 2LL;
          }
          TrackObjectReferenceDecrement(v60, v59);
          goto LABEL_72;
        }
      }
      else
      {
        BYTE5(v94) = 1;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v93);
    }
    v56 = 0LL;
LABEL_73:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v93);
    SEMOBJ<20>::vUnlock(&v108);
    if ( v56 )
    {
      v27 = v89;
      goto LABEL_75;
    }
    if ( v122 != 1 || (v27 = v89, !HmgRemoveObjectImpl(v89, 0, 1, 2, 5, (unsigned int *)&v121)) )
    {
      if ( (_DWORD)v121 == 1 )
      {
        if ( !_bittest((const signed __int32 *)(a1 + 112), 0xBu) )
        {
          EngSetLastError(0xAAu);
LABEL_117:
          v5 = 0;
          goto LABEL_94;
        }
      }
      else
      {
        if ( !*(_QWORD *)(a1 + 160)
          && !(unsigned int)SURFACE::bStockSurface((SURFACE *)a1)
          && !_bittest((const signed __int32 *)(a1 + 112), 0xBu) )
        {
          goto LABEL_117;
        }
        v67 = *(_DWORD *)(a1 + 112);
        if ( (v67 & 0x800) != 0 )
        {
          if ( !*(_DWORD *)(a1 + 320) )
          {
            *(_DWORD *)(a1 + 320) = 1;
            _InterlockedAdd((volatile signed __int32 *)(v16 + 12), 1u);
          }
        }
        else
        {
          *(_DWORD *)(a1 + 112) = v67 | 0x1000000;
        }
      }
      HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)a1, 0LL);
LABEL_94:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v113);
      NEEDGRELOCK::vUnlock(&v92);
      NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v111);
      return v5;
    }
LABEL_75:
    if ( v90 )
      _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
    if ( (*(_DWORD *)(a1 + 112) & 0x40000) != 0 && *(_QWORD *)(a1 + 560) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v61 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2072LL);
    if ( v61 )
    {
      if ( v61() >= 0 )
      {
        v62 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2080LL);
        if ( v62 )
          v62(a1);
      }
    }
    SURFACE::vDeleteDriverRealization((SURFACE *)a1);
    v63 = v99;
    if ( v99 )
    {
      if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        MmUnsecureVirtualMemory(v63);
      goto LABEL_89;
    }
    if ( (_DWORD)RegionSize )
    {
      if ( BaseAddress )
      {
        Object[0] = 0LL;
        Object[1] = 0LL;
        *(_QWORD *)v104 = v7;
        *(_QWORD *)&v104[2] = 0LL;
        v105 = 0LL;
        v106 = 3;
        Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)Object);
      }
      goto LABEL_89;
    }
    v64 = SecureHandle;
    if ( SecureHandle )
    {
      if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        MmUnsecureVirtualMemory(v64);
        if ( BaseAddress )
        {
          if ( v101 )
          {
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
          }
          else
          {
            RegionSize = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
          }
        }
      }
      goto LABEL_89;
    }
    if ( (v91 & 8) == 0 )
    {
      if ( (v91 & 0x800) != 0 )
      {
        RegionSize = *(_QWORD *)v16 + 936LL;
        GreAcquireSemaphoreInternal((struct _ERESOURCE *)RegionSize);
        GrepAcquireLockValidate<36>();
        v75 = *(PEPROCESS **)(a1 + 264);
        if ( v75 )
        {
          v76 = a1 + 528;
          v77 = *(_QWORD *)(a1 + 528);
          if ( v77 != a1 + 528 )
          {
            if ( *(_QWORD *)(v77 + 8) != v76 || (v78 = *(_QWORD **)(a1 + 536), *v78 != v76) )
              __fastfail(3u);
            *v78 = v77;
            *(_QWORD *)(v77 + 8) = v78;
          }
          if ( BaseAddress && v102 )
          {
            v79 = (unsigned int)GrepW32PidFromW32Process(v75);
            Gre::MapViewOfSectionObj::Unmap(v79, BaseAddress);
          }
        }
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)v120);
        if ( v102 )
          ObfDereferenceObject(v102);
        SEMOBJ<36>::vUnlock((struct _ERESOURCE **)&RegionSize);
      }
      else if ( (v91 & 0x10) != 0 )
      {
        vFreeKernelSection(BaseAddress);
      }
      goto LABEL_89;
    }
    if ( (v91 & 0x80u) == 0 )
    {
      EngFreeUserMem(BaseAddress);
LABEL_89:
      if ( (*(_DWORD *)(a1 + 116) & 0x1000) != 0 )
        DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 4LL, v27, (unsigned int)v121, v88, 0LL, 0LL, 0);
      SURFACE_Free((_QWORD *)a1);
      v65 = v109;
      if ( v109 )
      {
        v82 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2120LL);
        if ( v82 )
        {
          if ( v82() >= 0 )
          {
            v83 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2128LL);
            if ( v83 )
              v83(v65);
          }
        }
      }
      if ( v110 )
      {
        v121 = v110;
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v121);
      }
      goto LABEL_94;
    }
    CurrentThread = GreGetCurrentThread();
    v69 = v104[2];
    v70 = Object[1];
    v71 = CurrentThread;
    v93 = 0LL;
    v96 = 0LL;
    if ( v104[2] )
      v70 = BaseAddress;
    v95 = v70;
    v94 = 0LL;
    v97 = 0LL;
    v98 = 1;
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v93);
    if ( v71 && *((_QWORD *)v71 + 8) )
    {
      v73 = UMPDGetThreadClientPID(v71, v72);
    }
    else
    {
      if ( !(_DWORD)v105 )
      {
        v85 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2104LL);
        if ( v85 )
        {
          if ( v85() >= 0 )
          {
            v86 = *(void (__fastcall **)(PVOID))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2112LL);
            if ( v86 )
              v86(BaseAddress);
          }
        }
        goto LABEL_135;
      }
      v73 = v104[3];
    }
    v74 = BaseAddress;
    if ( v69 )
      v74 = Object[1];
    Gre::MapViewOfSectionObj::Unmap(v73, v74);
LABEL_135:
    if ( Object[0] )
      ObfDereferenceObject(Object[0]);
    else
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 68LL, 2LL, 0LL, 0LL, 0LL, 0LL, 0);
    goto LABEL_89;
  }
  return v5;
}
