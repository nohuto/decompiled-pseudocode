/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140044190
 * Callers:
 *     GreGetClipBox @ 0x14008E7A0 (GreGetClipBox.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B6B0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001BB00 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x14001BBA0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x14001BC30 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x140045A00 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphoreShared @ 0x140045A70 (EngAcquireSemaphoreShared.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x1400462A4 (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046440 (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046508 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x14009004C (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140177C40 (-bCompute@DC@@QEAAHXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, struct _ERESOURCE ***a2, int a3)
{
  __int64 v3; // rbp
  int (*v7)(void); // rax
  void (__fastcall *v8)(DEVLOCKOBJ *, _QWORD); // rax
  int v9; // r13d
  struct _ERESOURCE **v10; // r12
  struct _KTHREAD *v11; // rbp
  __int64 v12; // rdi
  int v13; // r15d
  __int64 *v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rdx
  char v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rax
  struct _KTHREAD *v22; // rbp
  __int64 v23; // rdi
  __int64 *v24; // rax
  __int64 *v25; // rbx
  __int64 v26; // rdx
  char v27; // cl
  struct _ERESOURCE **v28; // rdx
  struct _ERESOURCE *v29; // rbx
  __int64 ExclusiveWaiters_low; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  struct _KTHREAD *v42; // rbp
  __int64 v43; // rdi
  __int64 *v44; // rax
  __int64 v45; // r8
  __int64 *v46; // rbx
  __int64 v47; // rdx
  char v48; // cl
  int v49; // edx
  struct _ERESOURCE **v50; // rbx
  struct _ERESOURCE **v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  HSEMAPHORE v55; // rdi
  struct _GRETHREAD *v56; // rax
  struct _ERESOURCE *v57; // rdi
  struct _KTHREAD *CurrentThread; // r15
  __int64 *ThreadWin32Thread; // rax
  __int64 v60; // rdx
  struct _ERESOURCE *v61; // rdi
  struct _KTHREAD *v62; // r15
  __int64 v63; // rbp
  __int64 *v64; // rax
  __int64 v65; // rdx
  int (*v66)(void); // rax
  __int64 (__fastcall *v67)(DEVLOCKOBJ *, struct XDCOBJ *); // rax
  int v68; // ecx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rax
  struct _DC_ATTR *UserAttr; // rax
  int (*v74)(void); // rax
  __int64 (__fastcall *v75)(struct XDCOBJ *, char *, char *, char *); // rax
  int v76; // ecx
  bool v77; // al
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rax
  struct _ERESOURCE *v84; // r8
  int v85; // edx
  struct _ERESOURCE *v86; // rcx
  __int64 v87; // rcx
  int v88; // eax
  unsigned int v89; // eax
  __int64 v90; // rcx
  int v91; // edx
  int v92; // edx
  __int64 v93; // rax
  int v94; // ebx
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // ebx
  __int64 v98; // rax
  __int64 v99; // rax
  int v100; // ebx
  __int64 v101; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v105; // rax
  int v106; // ebx
  __int64 v107; // rax
  int v108; // r8d
  unsigned __int64 i; // rcx
  int v110; // eax
  unsigned __int64 k; // rcx
  int v112; // eax
  int v113; // r8d
  unsigned __int64 j; // rcx
  int v115; // eax

  v3 = 0LL;
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = **a2;
  if ( !a3 )
  {
    v74 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2056LL);
    if ( v74 && v74() >= 0 )
    {
      v75 = *(__int64 (__fastcall **)(struct XDCOBJ *, char *, char *, char *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable()
                                                                                          + 24)
                                                                              + 2064LL);
      v76 = v75 ? v75((struct XDCOBJ *)a2, (char *)this + 120, (char *)this + 112, (char *)this + 28) : 0;
      v77 = v76 == 1;
    }
    else
    {
      v77 = 0;
    }
    if ( !v77 )
    {
      *((_DWORD *)this + 6) &= ~1u;
      return 0LL;
    }
  }
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 768LL);
  if ( v7 )
  {
    if ( v7() >= 0 )
    {
      v8 = *(void (__fastcall **)(DEVLOCKOBJ *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 776LL);
      if ( v8 )
        v8(this, 0LL);
    }
  }
  if ( a3 == 1 )
    *((_DWORD *)this + 6) |= 0x20000u;
  v9 = 0;
  v10 = a2[2];
  if ( (*((_DWORD *)*a2 + 9) & 0x200) == 0 )
  {
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
    if ( !CurrentThreadNonPaged )
      goto LABEL_141;
    v79 = 0LL;
    v20 = *CurrentThreadNonPaged == 0LL;
    v80 = *CurrentThreadNonPaged + 8LL;
    if ( !v20 )
      v79 = v80;
    if ( !v79 || !*(_DWORD *)(v79 + 348) )
    {
LABEL_141:
      *((_DWORD *)this + 6) |= 0x80000u;
      v81 = (_QWORD *)W32GetCurrentThreadNonPaged();
      if ( v81 )
      {
        v82 = 0LL;
        v20 = *v81 == 0LL;
        v83 = *v81 + 8LL;
        if ( !v20 )
          v82 = v83;
        if ( v82 )
          ++*(_DWORD *)(v82 + 348);
      }
    }
LABEL_70:
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
      {
        if ( *((_QWORD *)this + 1) )
          GreReleaseSemaphoreShared<3,>(v10);
        if ( v9 )
          goto LABEL_215;
LABEL_148:
        *((_DWORD *)this + 6) &= ~1u;
        return 0LL;
      }
    }
    else if ( *((_QWORD *)this + 1) )
    {
      goto LABEL_75;
    }
    if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !(unsigned int)DC::bCompute((DC *)*a2) )
    {
      if ( *((_QWORD *)this + 1) )
        GreReleaseSemaphoreShared<3,>(v10);
      if ( v9 )
        GreReleaseSemaphoreShared<2,>(v10);
      goto LABEL_148;
    }
LABEL_75:
    v50 = *a2;
    if ( (!(*a2)[146] || ((_DWORD)v50[5] & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)*a2))
      && !v50[144]
      && (!v50[145] || ((_DWORD)v50[5] & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v50))
      && !v50[143] )
    {
      goto LABEL_148;
    }
    if ( (*((_DWORD *)this + 6) & 0x20000) == 0
      && (*((_DWORD *)this + 6) & 0x1000) != 0
      && (*((_DWORD *)v50 + 9) & 0x200) != 0 )
    {
      if ( !*((_QWORD *)this + 14) )
      {
        v51 = &v50[(_DWORD)v50[5] & 1];
        *((_DWORD *)v50 + 256) = *((_DWORD *)v51 + 254);
        *((_DWORD *)v50 + 257) = *((_DWORD *)v51 + 255);
        *((_DWORD *)v50 + 262) = *((_DWORD *)v50 + 258);
        *((_DWORD *)v50 + 263) = *((_DWORD *)v50 + 259);
        *((_DWORD *)v50 + 264) = *((_DWORD *)v50 + 260);
        *((_DWORD *)v50 + 265) = *((_DWORD *)v50 + 261);
        *((_DWORD *)v50 + 10) |= 1u;
        if ( (*((_DWORD *)v50 + 9) & 0x4000) != 0 )
        {
          v86 = v50[62];
          if ( v86[2].ExclusiveWaiters || (HIDWORD(v86[1].SystemResourcesList.Blink) & 1) != 0 )
          {
            KeWaitForSingleObject(v86[3].SystemResourcesList.Flink[4].Flink, UserRequest, 0, 0, 0LL);
            ++HIDWORD(v50[62][3].SystemResourcesList.Blink);
            KeReleaseMutex((PRKMUTEX)v50[62][3].SystemResourcesList.Flink[4].Flink, 0);
          }
        }
      }
      v52 = (_QWORD *)W32GetCurrentThreadNonPaged();
      if ( v52 )
      {
        v53 = 0LL;
        v20 = *v52 == 0LL;
        v54 = *v52 + 8LL;
        if ( !v20 )
          v53 = v54;
        if ( v53 )
        {
          *(_QWORD *)(v53 + 296) = *a2;
          if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
          {
            *(_DWORD *)(v53 + 344) |= 1u;
            (*a2)[247] = 0LL;
            v55 = (HSEMAPHORE)&(*v10)[8];
            EngAcquireSemaphoreShared(v55);
            GrepAcquireLockValidate<14>();
            *(_DWORD *)(v53 + 356) = *((_DWORD *)v10 + 1070);
            EtwTraceGreLockReleaseSemaphore(L"VisRgnUniqueness", v55);
            v56 = GreGetCurrentThreadCrossSessionCheck();
            if ( v56 )
            {
              v20 = (*((_BYTE *)v56 + 22))-- == 1;
              if ( v20 )
                *(_QWORD *)v56 &= ~0x4000uLL;
            }
            GreReleaseSemaphoreSharedInternal(v55);
          }
        }
      }
    }
    if ( *((_QWORD *)this + 1) && (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      v57 = *v10;
      EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", &(*v10)[7]);
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (CurrentProcess = PsGetCurrentProcess(),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v3 = *ThreadWin32Thread;
        v60 = 0LL;
        if ( v3 )
          v60 = v3 + 8;
        if ( v60 )
        {
          v20 = (*(_BYTE *)(v60 + 11))-- == 1;
          if ( v20 )
            *(_QWORD *)v60 &= ~8uLL;
        }
      }
      GreReleaseSemaphoreSharedInternal((HSEMAPHORE)&v57[7]);
    }
    if ( v9 )
    {
      v61 = *v10;
      EtwTraceGreLockReleaseSemaphore(L"GreLock", &(*v10)[11]);
      v62 = KeGetCurrentThread();
      v63 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v93 = PsGetCurrentProcess(),
            v94 = PsGetProcessSessionIdEx(v93),
            v95 = PsGetCurrentThreadProcess(),
            v94 == (unsigned int)PsGetProcessSessionIdEx(v95)) )
      {
        v64 = (__int64 *)PsGetThreadWin32Thread(v62);
        if ( v64 )
          v63 = *v64;
        v65 = 0LL;
        if ( v63 )
          v65 = v63 + 8;
        if ( v65 )
        {
          v20 = (*(_BYTE *)(v65 + 10))-- == 1;
          if ( v20 )
            *(_QWORD *)v65 &= ~4uLL;
        }
      }
      GreReleaseSemaphoreSharedInternal((HSEMAPHORE)&v61[11]);
    }
    if ( (*((_DWORD *)this + 6) & 0x20000) != 0 )
      return 1LL;
    v66 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 768LL);
    if ( v66 && v66() >= 0 )
    {
      v67 = *(__int64 (__fastcall **)(DEVLOCKOBJ *, struct XDCOBJ *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24)
                                                                    + 776LL);
      if ( v67 )
        v68 = v67(this, (struct XDCOBJ *)a2);
      else
        v68 = 0;
      v69 = *((_DWORD *)this + 6);
      if ( v68 )
      {
        if ( (v69 & 0x81000) == 0 )
          return 1LL;
        v70 = *((_QWORD *)this + 4);
        if ( v70 )
        {
LABEL_127:
          *(_DWORD *)(v70 + 40) |= 2u;
          *((_BYTE *)this + 104) = 1;
          return 1LL;
        }
        XDCOBJ::vLockIgnoreAttributes((DEVLOCKOBJ *)((char *)this + 32), (HDC)**a2);
        v71 = *((_QWORD *)this + 4);
        if ( !v71 )
          goto LABEL_125;
        if ( (*(_DWORD *)(v71 + 44) & 2) == 0 )
        {
          if ( (*((_DWORD *)this + 16) & 2) == 0 )
          {
            UserAttr = XDCOBJ::GetUserAttr((DEVLOCKOBJ *)((char *)this + 32));
            if ( UserAttr )
            {
              if ( !(unsigned int)DC::SaveAttributes(*((DC **)this + 4), UserAttr) )
              {
                OBJECT::InterlockedDecrementExclusiveLockCount(*((OBJECT **)this + 4));
                *((_QWORD *)this + 4) = 0LL;
                goto LABEL_125;
              }
            }
          }
          *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) |= 2u;
          *((_DWORD *)this + 10) = 1;
        }
        v87 = *((_QWORD *)this + 4);
        v88 = *(_DWORD *)(v87 + 520);
        if ( (v88 & 4) != 0 )
        {
          v89 = v88 & 0xFFFFFFFB;
          *(_DWORD *)(v87 + 520) = v89;
          v90 = *(_QWORD *)(v87 + 976);
          v91 = *(_DWORD *)(v90 + 340);
          if ( (v89 & 1) != 0 )
            v92 = v91 | 0x16090;
          else
            v92 = v91 | 0x6090;
          *(_DWORD *)(v90 + 340) = v92;
        }
LABEL_125:
        v70 = *((_QWORD *)this + 4);
        if ( v70 )
        {
          *((_BYTE *)this + 105) = 0;
          goto LABEL_127;
        }
        return 1LL;
      }
    }
    else
    {
      v69 = *((_DWORD *)this + 6);
    }
    *((_DWORD *)this + 6) = v69 & 0xFFFFFFFE;
    return 0LL;
  }
  *((_QWORD *)this + 1) = *v10 + 6;
  EtwTraceGreLockAcquireSemaphoreShared(L"DynamicModeChange", &(*v10)[6]);
  EngAcquireSemaphoreShared((HSEMAPHORE)&(*v10)[6]);
  v11 = KeGetCurrentThread();
  v12 = 0LL;
  v13 = 37;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v96 = PsGetCurrentProcess(),
        v97 = PsGetProcessSessionIdEx(v96),
        v98 = PsGetCurrentThreadProcess(),
        v97 == (unsigned int)PsGetProcessSessionIdEx(v98)) )
  {
    v14 = (__int64 *)PsGetThreadWin32Thread(v11);
    if ( v14 )
      v12 = *v14;
    v15 = 0LL;
    if ( v12 )
      v15 = (__int64 *)(v12 + 8);
    if ( v15 )
    {
      v16 = *v15;
      if ( (*v15 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v15 & 2) == 0 )
      {
        v108 = 37;
        for ( i = 0LL; i < 0x40; ++i )
        {
          v110 = i;
          if ( !_bittest64(&v16, i) )
            v110 = v108;
          v108 = v110;
        }
        if ( v110 > 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(i, v16, (unsigned int)v110);
      }
      v17 = *((_BYTE *)v15 + 9);
      *((_BYTE *)v15 + 9) = v17 + 1;
      if ( !v17 )
        *v15 |= 2uLL;
    }
  }
  *((_DWORD *)this + 6) |= 8u;
  v18 = (_QWORD *)W32GetCurrentThreadNonPaged();
  if ( !v18 )
    goto LABEL_224;
  v19 = 0LL;
  v20 = *v18 == 0LL;
  v21 = *v18 + 8LL;
  if ( !v20 )
    v19 = v21;
  if ( !v19 || !*(_DWORD *)(v19 + 348) )
  {
LABEL_224:
    if ( !ExIsResourceAcquiredSharedLite(*v10 + 11) )
    {
      EtwTraceGreLockAcquireSemaphoreShared(L"GreLock", &(*v10)[11]);
      EngAcquireSemaphoreShared((HSEMAPHORE)&(*v10)[11]);
      v22 = KeGetCurrentThread();
      v23 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v105 = PsGetCurrentProcess(),
            v106 = PsGetProcessSessionIdEx(v105),
            v107 = PsGetCurrentThreadProcess(),
            v106 == (unsigned int)PsGetProcessSessionIdEx(v107)) )
      {
        v24 = (__int64 *)PsGetThreadWin32Thread(v22);
        if ( v24 )
          v23 = *v24;
        v25 = 0LL;
        if ( v23 )
          v25 = (__int64 *)(v23 + 8);
        if ( v25 )
        {
          v26 = *v25;
          if ( (*v25 & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (*v25 & 4) == 0 )
          {
            v113 = 37;
            for ( j = 0LL; j < 0x40; ++j )
            {
              v115 = j;
              if ( !_bittest64(&v26, j) )
                v115 = v113;
              v113 = v115;
            }
            if ( v115 > 2 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(j, v26, (unsigned int)v115);
          }
          v27 = *((_BYTE *)v25 + 10);
          *((_BYTE *)v25 + 10) = v27 + 1;
          if ( !v27 )
            *v25 |= 4uLL;
        }
      }
      v9 = 1;
    }
  }
  v28 = *a2;
  v29 = (*a2)[6];
  if ( ((__int64)(*a2)[122]->SystemResourcesList.Flink & 1) != 0 || (*((_DWORD *)v28 + 9) & 0x8000) != 0 )
  {
    ExclusiveWaiters_low = LODWORD(v29->ExclusiveWaiters);
    if ( ((__int64)v29->ExclusiveWaiters & 0x1000001) == 1 )
    {
      if ( HIDWORD(v29[25].SystemResourcesList.Flink) == 5
        || (ExclusiveWaiters_low & 0x20000) != 0
        || (ExclusiveWaiters_low = *(_QWORD *)&v29[24].NumberOfSharedWaiters,
            ((ExclusiveWaiters_low + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0)
        && (*(_DWORD *)(ExclusiveWaiters_low + 160) & 0x800000) != 0 )
      {
        v31 = *(_QWORD *)&v29->ActiveCount;
        v32 = *(_QWORD *)(W32GetSessionState(ExclusiveWaiters_low) + 88);
        if ( ((__int64)v29[20].SharedWaiters & 0x400) == 0
          && ((__int64)v29->ExclusiveWaiters & 0x48000000) == 0
          && ((__int64)v29[17].ExclusiveWaiters & 0x8000000) == 0
          && (*(_DWORD *)(v31 + 40) & 0x1000000) == 0
          && *(_DWORD *)(v32 + 4128) )
        {
          goto LABEL_45;
        }
      }
    }
    v28 = *a2;
  }
  v84 = v28[8];
  *(_QWORD *)this = v84;
  *((_QWORD *)this + 2) = (*a2)[6];
  if ( v9 == 1 && v84 == &(*v10)[11] )
  {
    GreReleaseSemaphoreShared<2,>(v10);
    v9 = 0;
  }
  if ( *(struct _ERESOURCE **)this == &(*v10)[11] )
  {
    *((_DWORD *)this + 6) |= 0x100000u;
    GreAcquireSemaphore<2,>(v10);
  }
  else
  {
    GreAcquireSemaphore<8,PDEVOBJ>(*((_QWORD *)this + 2));
  }
  v85 = *((_DWORD *)this + 6);
  if ( (v85 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
    *((_DWORD *)this + 6) = v85 | 0x200;
LABEL_45:
  v33 = (_QWORD *)W32GetCurrentThreadNonPaged();
  v3 = 0LL;
  if ( !v33 )
    goto LABEL_50;
  v34 = 0LL;
  v20 = *v33 == 0LL;
  v35 = *v33 + 8LL;
  if ( !v20 )
    v34 = v35;
  if ( !v34 || !*(_DWORD *)(v34 + 348) )
  {
LABEL_50:
    *((_DWORD *)this + 6) |= 0x1000u;
    v36 = (_QWORD *)W32GetCurrentThreadNonPaged();
    if ( v36 )
    {
      v37 = 0LL;
      v20 = *v36 == 0LL;
      v38 = *v36 + 8LL;
      if ( !v20 )
        v37 = v38;
      if ( v37 )
      {
        *(_QWORD *)(v37 + 304) = 0LL;
        *(_QWORD *)(v37 + 296) = 0LL;
      }
    }
    v39 = (_QWORD *)W32GetCurrentThreadNonPaged();
    if ( v39 )
    {
      v40 = 0LL;
      v20 = *v39 == 0LL;
      v41 = *v39 + 8LL;
      if ( !v20 )
        v40 = v41;
      if ( v40 )
        ++*(_DWORD *)(v40 + 348);
    }
    EtwTraceGreLockAcquireSemaphoreShared(L"DCVisRgn", &(*v10)[7]);
    EngAcquireSemaphoreShared((HSEMAPHORE)&(*v10)[7]);
    v42 = KeGetCurrentThread();
    v43 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v99 = PsGetCurrentProcess(),
          v100 = PsGetProcessSessionIdEx(v99),
          v101 = PsGetCurrentThreadProcess(),
          v100 == (unsigned int)PsGetProcessSessionIdEx(v101)) )
    {
      v44 = (__int64 *)PsGetThreadWin32Thread(v42);
      if ( v44 )
        v43 = *v44;
      v3 = 0LL;
      v46 = 0LL;
      if ( v43 )
        v46 = (__int64 *)(v43 + 8);
      if ( v46 )
      {
        v47 = *v46;
        if ( (*v46 & 0xFFFFFFFFFFFFFFF8uLL) != 0 && (*v46 & 8) == 0 )
        {
          for ( k = 0LL; k < 0x40; ++k )
          {
            v112 = k;
            if ( !_bittest64(&v47, k) )
              v112 = v13;
            v13 = v112;
          }
          if ( v112 > 3 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(k, v47, v45);
        }
        v48 = *((_BYTE *)v46 + 11);
        *((_BYTE *)v46 + 11) = v48 + 1;
        if ( !v48 )
          *v46 |= 8uLL;
      }
    }
    else
    {
      v3 = 0LL;
    }
  }
  v49 = *((_DWORD *)*a2 + 9);
  if ( (v49 & 0x1000) == 0 || (v49 & 0x4000) != 0 )
    goto LABEL_70;
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    GreReleaseSemaphoreShared<3,>(v10);
  if ( !v9 )
    goto LABEL_148;
LABEL_215:
  GreReleaseSemaphoreShared<2,>(v10);
  *((_DWORD *)this + 6) &= ~1u;
  return 0LL;
}
