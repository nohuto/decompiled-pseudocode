/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x14004DA74
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6DD8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     UserIsConsoleConnection @ 0x14004D1E0 (UserIsConsoleConnection.c)
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E29C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DCompositionIsShellProcess @ 0x14004E640 (DCompositionIsShellProcess.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(int *a1)
{
  int v1; // edi
  int v2; // r12d
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // rcx
  int v6; // r15d
  __int64 v7; // r13
  __int64 v8; // rbp
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rcx
  char v12; // r14
  __int64 *i; // rsi
  struct _ERESOURCE *v14; // r14
  struct _GRETHREAD *v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _WORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int16 v22; // ax
  _WORD *v23; // rax
  int v25; // ecx
  int IsWddmConnectedSession; // eax
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  unsigned int v31; // eax
  int v32; // ecx
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // ecx
  int v36; // edx
  __int64 v37; // rax
  unsigned int v38; // edx
  int v39; // eax
  unsigned int v40; // edx
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  int v49; // edx

  v1 = 0;
  v2 = *a1;
  if ( (unsigned int)a1[1] < 0x808 )
  {
    v6 = -1073741789;
    if ( v2 == -21 )
    {
      v1 = 1144084225;
      WdLogSingleEntry3(2LL, (unsigned int)a1[1], 2056LL, 1144084225LL);
      WdLogGlobalForLineNumber = 18855;
      goto LABEL_74;
    }
    return (unsigned int)v6;
  }
  a1[513] = 0;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(DxgkWin32kInterface + 256))(
         *((_QWORD *)a1 + 1),
         (unsigned int)a1[4],
         0LL,
         a1);
  if ( v6 < 0 && v2 == -21 )
  {
    WdLogSingleEntry4(2LL, a1[3], (unsigned int)a1[2]);
    v1 = a1[506];
    WdLogGlobalForLineNumber = 18879;
    goto LABEL_74;
  }
  if ( a1[4] == -1 )
    goto LABEL_32;
  v7 = *(_QWORD *)(W32GetSessionState(v5) + 88);
  v8 = *(_QWORD *)(v7 + 1096);
  if ( !v8 )
    goto LABEL_92;
  v9 = a1[2];
  while ( _bittest((const signed __int32 *)(v8 + 160), 0x17u) )
  {
    if ( v9 == *(_DWORD *)(v8 + 240) )
    {
      v10 = *(_DWORD *)(v8 + 244);
      goto LABEL_9;
    }
LABEL_10:
    v8 = *(_QWORD *)(v8 + 128);
    if ( !v8 )
      goto LABEL_13;
  }
  if ( v9 != *(_DWORD *)(v8 + 288) )
    goto LABEL_10;
  v10 = *(_DWORD *)(v8 + 292);
LABEL_9:
  if ( a1[3] != v10 || *(_DWORD *)(v8 + 248) != a1[4] )
    goto LABEL_10;
LABEL_13:
  if ( v8 && (*(_QWORD *)(v8 + 144) || *(_QWORD *)(v8 + 296)) )
  {
    if ( !_bittest((const signed __int32 *)(v8 + 160), 0x17u) && !*(_DWORD *)(v8 + 288) && !*(_DWORD *)(v8 + 292) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 18952;
    }
    if ( (*(_DWORD *)(v8 + 164) & 1) != 0 )
    {
      v6 = -1073741130;
      if ( v2 == -21 )
      {
        v1 = 1144084228;
        WdLogSingleEntry5(
          2LL,
          a1[3],
          (unsigned int)a1[2],
          (unsigned int)a1[4],
          *(unsigned int *)(v8 + 160),
          1144084228LL);
        WdLogGlobalForLineNumber = 18969;
      }
      else
      {
        WdLogSingleEntry1(4LL, -1073741130LL);
        WdLogGlobalForLineNumber = 18974;
      }
    }
    else
    {
      GreAcquireSemaphore<19,>(v7);
      if ( !(unsigned int)UserIsCurrentProcessDwm() && !(unsigned __int8)DCompositionIsShellProcess() && v2 != -30
        || (v12 = 1, !(unsigned int)UserIsWddmConnectedSession()) )
      {
        v12 = 0;
      }
      for ( i = *(__int64 **)(*(_QWORD *)(W32GetSessionState(v11) + 88) + 3848LL); i; i = (__int64 *)*i )
      {
        v25 = *((_DWORD *)i + 10);
        if ( (v25 & 0x401) == 1 )
        {
          if ( v12 )
          {
            if ( (v25 & 0x20000) == 0 )
            {
              v34 = i[321];
              if ( ((v34 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v34 + 160) & 0x800000) != 0 )
              {
                v35 = *((_DWORD *)i + 644);
                if ( a1[411] == v35 )
                {
                  v36 = *((_DWORD *)i + 645);
                  if ( a1[412] == v36 )
                  {
                    v37 = i[267];
                    if ( a1[413] == (_DWORD)v37 + v35 && a1[414] == v36 + HIDWORD(v37) )
                    {
                      v38 = a1[513] & 0xFFFFFFFE;
                      a1[513] = v38;
                      if ( *((_DWORD *)i + 644) || (v39 = 2, *((_DWORD *)i + 645)) )
                        v39 = 0;
                      v40 = v39 | v38 & 0xFFFFFFFD;
                      v41 = 0;
                      a1[513] = v40;
                      if ( i[321] == v8 )
                        v41 = 4;
                      v33 = v40 & 0xFFFFFFFB | v41;
                      goto LABEL_45;
                    }
                  }
                }
              }
            }
          }
          else if ( i[321] == v8 )
          {
            IsWddmConnectedSession = UserIsWddmConnectedSession();
            a1[411] = *((_DWORD *)i + 644);
            a1[412] = *((_DWORD *)i + 645);
            v27 = i[5] & 0x20000;
            if ( IsWddmConnectedSession )
            {
              if ( v27 )
                v28 = *(__int64 *)((char *)i + 1700);
              else
                v28 = i[267];
              a1[413] = v28 + *((_DWORD *)i + 644);
              if ( (i[5] & 0x20000) != 0 )
                v29 = *(__int64 *)((char *)i + 1700);
              else
                v29 = i[267];
              v30 = HIDWORD(v29) + *((_DWORD *)i + 645);
              v31 = a1[513] & 0xFFFFFFFE;
              a1[513] = v31;
              a1[414] = v30;
              if ( *((_DWORD *)i + 644) || (v32 = 2, *((_DWORD *)i + 645)) )
                v32 = 0;
              v33 = v32 | v31 & 0xFFFFFFFD | 4;
            }
            else
            {
              if ( v27 )
                v42 = *(__int64 *)((char *)i + 1700);
              else
                v42 = i[267];
              a1[413] = v42 + *((_DWORD *)i + 644);
              if ( (i[5] & 0x20000) != 0 )
                v43 = *(__int64 *)((char *)i + 1700);
              else
                v43 = i[267];
              LODWORD(v43) = a1[4];
              a1[414] = HIDWORD(v43) + *((_DWORD *)i + 645);
              *(_QWORD *)(a1 + 479) = (unsigned int)v43;
              if ( (i[5] & 0x20000) != 0 )
                v44 = *(__int64 *)((char *)i + 1700);
              else
                v44 = i[267];
              a1[481] = v44;
              if ( (i[5] & 0x20000) != 0 )
                v45 = *(__int64 *)((char *)i + 1700);
              else
                v45 = i[267];
              a1[482] = HIDWORD(v45);
              *((_QWORD *)a1 + 244) = 0LL;
              if ( (i[5] & 0x20000) != 0 )
                v46 = *(__int64 *)((char *)i + 1700);
              else
                v46 = i[267];
              a1[490] = v46;
              if ( (i[5] & 0x20000) != 0 )
                v47 = *(__int64 *)((char *)i + 1700);
              else
                v47 = i[267];
              a1[491] = HIDWORD(v47);
              v48 = a1[513] | 1;
              a1[483] = 4;
              a1[513] = v48;
              a1[484] = 60000;
              a1[485] = 1000;
              *((_QWORD *)a1 + 243) = 1LL;
              if ( *((_DWORD *)i + 644) || (v49 = 2, *((_DWORD *)i + 645)) )
                v49 = 0;
              v33 = v49 | v48 & 0xFFFFFFFD | 4;
            }
LABEL_45:
            a1[513] = v33;
            break;
          }
        }
      }
      v14 = *(struct _ERESOURCE **)v7;
      EtwTraceGreLockReleaseSemaphore((__int64)L"DriverMgmt", *(_QWORD *)v7);
      v15 = GreGetCurrentThreadCrossSessionCheck();
      if ( v15 )
      {
        if ( (*((_BYTE *)v15 + 27))-- == 1 )
          *(_QWORD *)v15 &= ~0x80000uLL;
      }
      GreReleaseSemaphoreSharedInternal(v14);
      if ( !i && (!a1[507] || !(unsigned int)UserIsWddmConnectedSession()) )
      {
        *(_QWORD *)(a1 + 481) = 0LL;
        *(_QWORD *)(a1 + 483) = 5LL;
        a1[485] = 1;
        *((_QWORD *)a1 + 243) = 1LL;
        *(_OWORD *)(a1 + 411) = 0LL;
        *((_OWORD *)a1 + 122) = 0LL;
        a1[513] = !UserIsConsoleConnection(v18, v17) | a1[513] & 0xFFFFFFF8;
      }
      v19 = a1 + 415;
      v20 = 128LL;
      v21 = v8 - (_QWORD)(a1 + 415);
      do
      {
        if ( v20 == 96 )
          break;
        v22 = *(_WORD *)((char *)v19 + v21 + 64);
        if ( !v22 )
          break;
        *v19++ = v22;
        --v20;
      }
      while ( v20 );
      v23 = v19 - 1;
      if ( v20 )
        v23 = v19;
      *v23 = 0;
LABEL_32:
      if ( v6 >= 0 )
        return 0LL;
    }
    if ( v2 == -21 )
LABEL_74:
      a1[506] = v1;
    return (unsigned int)v6;
  }
LABEL_92:
  v6 = -1073741275;
  if ( v2 == -21 )
  {
    if ( v8 )
    {
      v1 = 1144084227;
      WdLogSingleEntry5(2LL, a1[3], (unsigned int)a1[2], (unsigned int)a1[4], *(unsigned int *)(v8 + 160), 1144084227LL);
      WdLogGlobalForLineNumber = 18938;
    }
    else
    {
      v1 = 1144084226;
      WdLogSingleEntry4(2LL, a1[3], (unsigned int)a1[2]);
      WdLogGlobalForLineNumber = 18928;
    }
    goto LABEL_74;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 18943;
  return (unsigned int)v6;
}
