/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x14001B740
 * Callers:
 *     GreGetClipBox @ 0x14003ACA0 (GreGetClipBox.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     ??$GrepAcquireLockValidate@$02@@YAXXZ @ 0x14001C604 (--$GrepAcquireLockValidate@$02@@YAXXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D03C (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D12C (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x14001D2CC (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001D35C (--$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1400384A8 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x140038E94 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B5D4 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x140040610 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C66D4 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GrepGetCurrentProcessBehaviorRestriction@@YA?AW4GreBehaviorRestriction@@XZ @ 0x1400FE870 (-GrepGetCurrentProcessBehaviorRestriction@@YA-AW4GreBehaviorRestriction@@XZ.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, __int64 **a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  int (*v10)(void); // rax
  void (__fastcall *v11)(DEVLOCKOBJ *, _QWORD); // rax
  struct _ERESOURCE **v12; // r15
  int v13; // r12d
  struct _GRETHREAD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _GRETHREAD *v17; // rbx
  int v18; // edi
  __int64 v19; // r8
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  int v24; // r8d
  struct _GRETHREAD *v25; // rax
  __int64 v26; // r8
  struct _GRETHREAD *v27; // rbx
  __int64 v28; // rdx
  char v29; // cl
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // r8d
  __int64 *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 *v45; // rax
  int v46; // ecx
  int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 *v50; // rcx
  DC *v51; // rdx
  DC *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rdi
  struct _ERESOURCE *v55; // rbx
  __int64 v56; // rcx
  struct _ERESOURCE *v57; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 ThreadWin32Thread; // rax
  _QWORD *v60; // rdx
  bool v61; // zf
  struct _ERESOURCE *v62; // rdi
  struct _KTHREAD *v63; // rbp
  __int64 v64; // rax
  _QWORD *v65; // rdx
  int (*v66)(void); // rax
  __int64 v67; // rcx
  __int64 (__fastcall *v68)(DEVLOCKOBJ *, __int64 **); // rax
  int v69; // ecx
  int v70; // eax
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rbp
  __int64 v74; // r13
  unsigned int v75; // r15d
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // r14
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rcx
  int v80; // r12d
  __int64 v81; // rax
  unsigned int *v82; // r14
  unsigned int v83; // ecx
  struct _KTHREAD *v84; // rbx
  __int64 v85; // rax
  __int64 *v86; // rdi
  __int64 v87; // rbx
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rcx
  int (*v92)(void); // rax
  __int64 v93; // rcx
  __int64 (__fastcall *v94)(__int64 **, char *, char *, char *); // rax
  int v95; // eax
  __int64 **v96; // rax
  __int64 v97; // rdx
  __int64 *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  struct _ERESOURCE *v101; // rdx
  int v102; // eax
  __int64 v103; // rax
  int v104; // ebx
  __int64 v105; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 i; // rcx
  int v110; // eax
  ThreadRestrictNewHandlesRegion *v111; // rcx
  __int64 v112; // rax
  int v113; // ebx
  __int64 v114; // rax
  unsigned __int64 j; // rcx
  int v116; // eax
  unsigned int *v117; // [rsp+30h] [rbp-58h] BYREF
  int v118; // [rsp+38h] [rbp-50h]
  __int16 v119; // [rsp+3Ch] [rbp-4Ch]
  __int64 v120; // [rsp+40h] [rbp-48h]
  __int64 v121; // [rsp+90h] [rbp+8h] BYREF
  __int64 v122; // [rsp+98h] [rbp+10h]
  unsigned int v123; // [rsp+A0h] [rbp+18h]

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  v6 = **a2;
  *((_QWORD *)this + 19) = v6;
  if ( !a3 )
  {
    if ( (v92 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 24) + 2032LL)) == 0LL
      || v92() < 0
      || ((v6 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v93) + 24),
           (v94 = *(__int64 (__fastcall **)(__int64 **, char *, char *, char *))(v6 + 2040)) == 0LL)
        ? (v95 = 0)
        : (v95 = v94(a2, (char *)this + 144, (char *)this + 136, (char *)this + 28)),
          v95 != 1) )
    {
      *((_DWORD *)this + 6) &= ~1u;
      return 0LL;
    }
  }
  v8 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 24);
  v10 = *(int (**)(void))(v8 + 768);
  if ( v10 )
  {
    if ( v10() >= 0 )
    {
      v8 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 24);
      v11 = *(void (__fastcall **)(DEVLOCKOBJ *, _QWORD))(v8 + 776);
      if ( v11 )
        v11(this, 0LL);
    }
  }
  if ( a3 == 1 )
    *((_DWORD *)this + 6) |= 0x20000u;
  v12 = (struct _ERESOURCE **)a2[2];
  v13 = 0;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
  {
    *((_QWORD *)this + 1) = *v12 + 6;
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v8,
        (unsigned int)&LockAcquireShared,
        v9,
        *(_DWORD *)v12 + 624,
        (__int64)L"DynamicModeChange");
    EngAcquireSemaphoreShared((HSEMAPHORE)&(*v12)[6]);
    v14 = GreGetCurrentThreadCrossSessionCheck();
    v17 = v14;
    v18 = 38;
    if ( v14 )
    {
      v19 = *(_QWORD *)v14;
      LOBYTE(v15) = (*(_QWORD *)v14 & 0xFFFFFFDFFFFFFFFEuLL) != 0;
      if ( ((unsigned __int8)v15 & ((*(_QWORD *)v14 & 2) == 0)) != 0 )
      {
        LODWORD(v15) = 38;
        for ( i = 0LL; i < 0x40; ++i )
        {
          v110 = i;
          if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v19) == 0 )
            v110 = v15;
          v15 = (unsigned int)v110;
        }
        if ( v110 > 1 && v110 != 38 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v110, v19);
      }
      v16 = *((unsigned __int8 *)v17 + 9);
      *((_BYTE *)v17 + 9) = v16 + 1;
      if ( !(_BYTE)v16 )
        *(_QWORD *)v17 |= 2uLL;
    }
    *((_DWORD *)this + 6) |= 8u;
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v16, v15);
    if ( (!CurrentThreadWin32Thread
       || (v21 = *CurrentThreadWin32Thread) == 0
       || (v22 = v21 + 8) == 0
       || !*(_DWORD *)(v22 + 340))
      && !ExIsResourceAcquiredSharedLite(*v12 + 11) )
    {
      if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v23,
          (unsigned int)&LockAcquireShared,
          v24,
          *(_DWORD *)v12 + 1144,
          (__int64)L"GreLock");
      EngAcquireSemaphoreShared((HSEMAPHORE)&(*v12)[11]);
      v25 = GreGetCurrentThreadCrossSessionCheck();
      v27 = v25;
      if ( v25 )
      {
        v28 = *(_QWORD *)v25;
        if ( (*(_QWORD *)v25 & 0xFFFFFFDFFFFFFFFCuLL) != 0 && (v28 & 4) == 0 )
        {
          for ( j = 0LL; j < 0x40; ++j )
          {
            v116 = j;
            if ( ((1LL << j) & 0xFFFFFFDFFFFFFFFFuLL & v28) == 0 )
              v116 = v18;
            v18 = v116;
          }
          if ( v116 > 2 && v116 != 38 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(j, v28, v26);
        }
        v29 = *((_BYTE *)v27 + 10);
        *((_BYTE *)v27 + 10) = v29 + 1;
        if ( !v29 )
          *(_QWORD *)v27 |= 4uLL;
      }
      v13 = 1;
    }
    v30 = (*a2)[6];
    if ( (*(_DWORD *)(*a2)[122] & 1) == 0 && (*((_DWORD *)*a2 + 9) & 0x8000) == 0
      || (v31 = *(unsigned int *)(v30 + 40), (*(_DWORD *)(v30 + 40) & 0x1000001) != 1)
      || *(_DWORD *)(v30 + 2604) != 5
      && (v31 & 0x20000) == 0
      && ((v32 = *(_QWORD *)(v30 + 2568)) == 0 || v32 == -4 || (*(_DWORD *)(v32 + 160) & 0x800000) == 0)
      || (v33 = *(_QWORD *)(v30 + 24),
          v34 = *(_QWORD *)(W32GetSessionState(v31) + 88),
          (*(_DWORD *)(v30 + 2112) & 0x400) != 0)
      || (LOBYTE(v35) = (*(_DWORD *)(v30 + 40) & 0x48000000) == 0,
          ((unsigned __int8)v35 & ((*(_DWORD *)(v30 + 1808) & 0x8000000) == 0)) == 0)
      || (*(_DWORD *)(v33 + 40) & 0x1000000) != 0
      || !*(_DWORD *)(v34 + 4232) )
    {
      v101 = (struct _ERESOURCE *)(*a2)[8];
      *(_QWORD *)this = v101;
      *((_QWORD *)this + 2) = (*a2)[6];
      if ( v13 == 1 && v101 == &(*v12)[11] )
      {
        GreReleaseSemaphoreShared<2,>(v12);
        v13 = 0;
      }
      if ( *(struct _ERESOURCE **)this == &(*v12)[11] )
      {
        *((_DWORD *)this + 6) |= 0x100000u;
        GreAcquireSemaphore<2,>(v12);
      }
      else
      {
        GreAcquireSemaphore<8,PDEVOBJ>(*((_QWORD *)this + 2));
      }
      v34 = *((unsigned int *)this + 6);
      if ( (v34 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
      {
        LODWORD(v34) = v34 | 0x200;
        *((_DWORD *)this + 6) = v34;
      }
    }
    v36 = (__int64 *)PsGetCurrentThreadWin32Thread(v35, v34);
    if ( !v36 || (v38 = *v36) == 0 || v38 == -8 || !*(_DWORD *)(v38 + 348) )
    {
      *((_DWORD *)this + 6) |= 0x1000u;
      v40 = (__int64 *)PsGetCurrentThreadWin32Thread(v38, v37);
      if ( v40 )
      {
        v43 = *v40;
        if ( v43 )
        {
          v44 = v43 + 8;
          if ( v44 )
          {
            *(_QWORD *)(v44 + 304) = 0LL;
            *(_QWORD *)(v44 + 296) = 0LL;
          }
        }
      }
      v45 = (__int64 *)PsGetCurrentThreadWin32Thread(v42, v41);
      if ( v45 )
      {
        v48 = *v45;
        if ( v48 )
        {
          v49 = v48 + 8;
          if ( v49 )
            ++*(_DWORD *)(v49 + 340);
        }
      }
      if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v46,
          (unsigned int)&LockAcquireShared,
          v47,
          *(_DWORD *)v12 + 728,
          (__int64)L"DCVisRgn");
      EngAcquireSemaphoreShared((HSEMAPHORE)&(*v12)[7]);
      GrepAcquireLockValidate<3>();
    }
    v50 = (__int64 *)*((unsigned int *)*a2 + 9);
    if ( ((unsigned __int16)v50 & 0x1000) != 0 && ((unsigned __int16)v50 & 0x4000) == 0 )
    {
      if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
        GreReleaseSemaphoreShared<3,>(v12);
      if ( v13 )
      {
LABEL_158:
        GreReleaseSemaphoreShared<2,>(v12);
        *((_DWORD *)this + 6) &= ~1u;
        return 0LL;
      }
LABEL_154:
      *((_DWORD *)this + 6) &= ~1u;
      return 0LL;
    }
  }
  else
  {
    v96 = (__int64 **)PsGetCurrentThreadWin32Thread(v8, v7);
    if ( !v96 || (v50 = *v96) == 0LL || v50 == (__int64 *)-8LL || !*((_DWORD *)v50 + 87) )
    {
      *((_DWORD *)this + 6) |= 0x80000u;
      v98 = (__int64 *)PsGetCurrentThreadWin32Thread(v50, v97);
      if ( v98 )
      {
        v99 = *v98;
        if ( v99 )
        {
          v100 = v99 + 8;
          if ( v100 )
            ++*(_DWORD *)(v100 + 340);
        }
      }
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 1) )
        GreReleaseSemaphoreShared<3,>(v12);
      if ( v13 )
        goto LABEL_158;
      goto LABEL_154;
    }
  }
  else if ( *((_QWORD *)this + 1) )
  {
    goto LABEL_57;
  }
  v50 = *a2;
  if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !(unsigned int)DC::bCompute((DC *)v50) )
  {
    if ( *((_QWORD *)this + 1) )
      GreReleaseSemaphoreShared<3,>(v12);
    if ( v13 )
      GreReleaseSemaphoreShared<2,>(v12);
    goto LABEL_154;
  }
LABEL_57:
  v51 = (DC *)*a2;
  if ( (!(*a2)[146] || (*((_DWORD *)v51 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)*a2))
    && !*((_QWORD *)v51 + 144)
    && (!*((_QWORD *)v51 + 145) || (*((_DWORD *)v51 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v51))
    && !*((_QWORD *)v51 + 143) )
  {
    goto LABEL_154;
  }
  if ( (*((_DWORD *)this + 6) & 0x20000) == 0 )
  {
    v52 = v51;
    LOBYTE(v50) = (*((_DWORD *)this + 6) & 0x1000) != 0;
    if ( ((unsigned __int8)v50 & ((*((_DWORD *)v51 + 9) & 0x200) != 0)) != 0 )
    {
      if ( !*((_QWORD *)this + 17) )
      {
        v50 = (__int64 *)((char *)v51 + 1024);
        if ( (*((_DWORD *)v51 + 10) & 1) == 0 )
          v50 = (__int64 *)((char *)v51 + 1016);
        *((_DWORD *)v51 + 256) = *(_DWORD *)v50;
        *((_DWORD *)v51 + 257) = *((_DWORD *)v50 + 1);
        *((_DWORD *)v51 + 262) = *((_DWORD *)v51 + 258);
        *((_DWORD *)v51 + 263) = *((_DWORD *)v51 + 259);
        *((_DWORD *)v51 + 264) = *((_DWORD *)v51 + 260);
        *((_DWORD *)v51 + 265) = *((_DWORD *)v51 + 261);
        *((_DWORD *)v51 + 10) |= 1u;
        if ( (*((_DWORD *)v51 + 9) & 0x4000) != 0 )
        {
          v50 = (__int64 *)*((_QWORD *)v51 + 62);
          if ( v50[31] || (*((_DWORD *)v50 + 29) & 1) != 0 )
          {
            KeWaitForSingleObject(*(PVOID *)(v50[39] + 64), UserRequest, 0, 0, 0LL);
            ++*(_DWORD *)(*((_QWORD *)v52 + 62) + 324LL);
            KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(*((_QWORD *)v52 + 62) + 312LL) + 64LL), 0);
          }
        }
      }
      v53 = PsGetCurrentThreadWin32Thread(v50, v51);
      if ( v53 )
      {
        if ( *(_QWORD *)v53 )
        {
          v54 = *(_QWORD *)v53 + 8LL;
          if ( *(_QWORD *)v53 != -8LL )
          {
            *(_QWORD *)(*(_QWORD *)v53 + 304LL) = *a2;
            if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
            {
              *(_DWORD *)(v54 + 336) |= 1u;
              (*a2)[247] = 0LL;
              v55 = *v12;
              EngAcquireSemaphoreShared((HSEMAPHORE)&(*v12)[8]);
              GrepAcquireLockValidate<14>();
              *(_DWORD *)(v54 + 348) = *((_DWORD *)v12 + 1098);
              GreReleaseSemaphoreCommon<14,void (*)(HSEMAPHORE__ *)>(v56, &v55[8]);
            }
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 1) && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    v57 = *v12;
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        (_DWORD)v50,
        (unsigned int)&LockRelease,
        v39,
        (_DWORD)v57 + 728,
        (__int64)L"DCVisRgn");
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentProcess = PsGetCurrentProcess(),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *(_QWORD *)ThreadWin32Thread )
        {
          v60 = (_QWORD *)(*(_QWORD *)ThreadWin32Thread + 8LL);
          if ( *(_QWORD *)ThreadWin32Thread != -8LL )
          {
            v61 = (*(_BYTE *)(*(_QWORD *)ThreadWin32Thread + 19LL))-- == 1;
            if ( v61 )
              *v60 &= ~8uLL;
          }
        }
      }
    }
    GreReleaseSemaphoreSharedInternal(v57 + 7);
  }
  if ( v13 )
  {
    v62 = *v12;
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        (_DWORD)v50,
        (unsigned int)&LockRelease,
        v39,
        (_DWORD)v62 + 1144,
        (__int64)L"GreLock");
    v63 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v103 = PsGetCurrentProcess(),
          v104 = PsGetProcessSessionIdEx(v103),
          v105 = PsGetCurrentThreadProcess(),
          v104 == (unsigned int)PsGetProcessSessionIdEx(v105)) )
    {
      v64 = PsGetThreadWin32Thread(v63);
      if ( v64 )
      {
        if ( *(_QWORD *)v64 )
        {
          v65 = (_QWORD *)(*(_QWORD *)v64 + 8LL);
          if ( *(_QWORD *)v64 != -8LL )
          {
            v61 = (*(_BYTE *)(*(_QWORD *)v64 + 18LL))-- == 1;
            if ( v61 )
              *v65 &= ~4uLL;
          }
        }
      }
    }
    GreReleaseSemaphoreSharedInternal(v62 + 11);
  }
  if ( (*((_DWORD *)this + 6) & 0x20000) != 0 )
    return 1LL;
  v66 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v50) + 24) + 768LL);
  if ( v66 && v66() >= 0 )
  {
    v68 = *(__int64 (__fastcall **)(DEVLOCKOBJ *, __int64 **))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v67) + 24) + 776LL);
    if ( v68 )
      v69 = v68(this, a2);
    else
      v69 = 0;
    v70 = *((_DWORD *)this + 6);
    if ( v69 )
    {
      if ( (v70 & 0x81000) == 0 )
        return 1LL;
      v71 = **a2;
      v72 = *((_QWORD *)this + 4);
      if ( v72 )
      {
LABEL_119:
        *(_DWORD *)(v72 + 40) |= 2u;
        *((_BYTE *)this + 128) = 1;
        return 1LL;
      }
      v73 = 0LL;
      v74 = *((_QWORD *)this + 6);
      v119 = 0;
      v120 = v74;
      v75 = (unsigned __int16)v71 | ((unsigned int)v71 >> 8) & 0xFF0000;
      v121 = 0LL;
      CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v121);
      if ( (!(unsigned __int8)KeIsAttachedProcess()
         || (v112 = PsGetCurrentProcess(),
             v113 = PsGetProcessSessionIdEx(v112),
             v114 = PsGetCurrentThreadProcess(),
             v113 == (unsigned int)PsGetProcessSessionIdEx(v114)))
        && CurrentThreadWin32ThreadAndEnterCriticalRegion
        && (v77 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
      {
        v78 = v77 + 8;
        if ( v77 != -8 )
        {
          v122 = *(_QWORD *)(v77 + 72);
          goto LABEL_102;
        }
      }
      else
      {
        v78 = 0LL;
      }
      v122 = 0LL;
LABEL_102:
      v79 = *(_QWORD *)(v74 + 8);
      v80 = 1;
      v118 = 1;
      v81 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v79 + 40LL))(v79, v75);
      v117 = (unsigned int *)v81;
      v82 = (unsigned int *)v81;
      if ( !v81 )
      {
        v80 = 0;
        KeLeaveCriticalRegion();
        goto LABEL_105;
      }
      _m_prefetchw((const void *)(v81 + 8));
      v83 = *(_DWORD *)(v81 + 8) & 0xFFFFFFFE;
      v123 = v83;
      if ( v83 == (v121 & 0xFFFFFFFC) || !v83 || v122 && (v102 = UMPDGetThreadClientPID(v78), v123 == v102) )
      {
        if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v74 + 8) + 96LL))(
                           *(_QWORD *)(v74 + 8),
                           *v82)
                       + 14) & 0x20) == 0
          || v78
          && (v111 = *(ThreadRestrictNewHandlesRegion **)(v78 + 328)) != 0LL
          && *((_BYTE *)v111 + 80)
          && ThreadRestrictNewHandlesRegion::InRegion(v111, v75) )
        {
LABEL_105:
          if ( v80 )
          {
            if ( *((_BYTE *)v82 + 14) == 1 && *((_WORD *)v82 + 6) == WORD1(v71) )
            {
              v84 = KeGetCurrentThread();
              v85 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v74 + 8) + 96LL))(
                      *(_QWORD *)(v74 + 8),
                      *v82);
              v73 = v85;
              if ( !*(_WORD *)(v85 + 12) || *(struct _KTHREAD **)(v85 + 16) == v84 )
              {
                _InterlockedIncrement16((volatile signed __int16 *)(v85 + 12));
                *(_QWORD *)(v85 + 16) = v84;
              }
              else
              {
                v73 = 0LL;
              }
            }
            v86 = *(__int64 **)(v74 + 8);
            v87 = *v86;
            v88 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v86 + 96))(v86, *v82);
            (*(void (__fastcall **)(__int64 *, __int64))(v87 + 48))(v86, v88);
            KeLeaveCriticalRegion();
          }
          *((_QWORD *)this + 4) = v73;
          if ( v73 )
          {
            if ( *(_DWORD *)(v73 + 2136) )
            {
              _InterlockedDecrement16((volatile signed __int16 *)(v73 + 12));
              *((_QWORD *)this + 4) = 0LL;
              goto LABEL_117;
            }
          }
          else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1
                 && (unsigned __int8)PsIsWin32KFilterAuditEnabled() )
          {
            PsGetWin32KFilterSet();
          }
          if ( *((_QWORD *)this + 4) )
          {
            v89 = DCOBJ::SaveAttributes((DEVLOCKOBJ *)((char *)this + 32));
            v90 = *((_QWORD *)this + 4);
            if ( v89 )
            {
              if ( (*(_DWORD *)(v90 + 520) & 4) != 0 )
                DC::vMarkTransformDirty((DC *)v90);
            }
            else
            {
              _InterlockedDecrement16((volatile signed __int16 *)(v90 + 12));
              *((_QWORD *)this + 4) = 0LL;
            }
          }
LABEL_117:
          v72 = *((_QWORD *)this + 4);
          if ( v72 )
          {
            *((_BYTE *)this + 129) = 0;
            goto LABEL_119;
          }
          return 1LL;
        }
        LOBYTE(v119) = 1;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v117);
      v82 = v117;
      v80 = v118;
      v74 = v120;
      goto LABEL_105;
    }
  }
  else
  {
    v70 = *((_DWORD *)this + 6);
  }
  *((_DWORD *)this + 6) = v70 & 0xFFFFFFFE;
  return 0LL;
}
