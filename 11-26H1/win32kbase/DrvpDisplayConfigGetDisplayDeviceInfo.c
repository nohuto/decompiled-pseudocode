/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x140027938
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028120 (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepReleaseLockValidate@$0BD@@@YAXXZ @ 0x1400283C0 (--$GrepReleaseLockValidate@$0BD@@@YAXXZ.c)
 *     UserIsConsoleConnection @ 0x140028F70 (UserIsConsoleConnection.c)
 *     DCompositionIsShellProcess @ 0x140028F9C (DCompositionIsShellProcess.c)
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1400293F0 (UserRemoteConnectedSessionUsingWddm.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(int *a1)
{
  int v1; // esi
  int v2; // r15d
  __int64 DxgkWin32kInterface; // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // r14d
  __int64 v8; // r13
  __int64 v9; // rbp
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // r12
  __int64 v22; // rcx
  int v23; // r8d
  __int64 *i; // rbx
  struct _ERESOURCE *v25; // r12
  _WORD *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rbp
  __int16 v29; // ax
  _WORD *v30; // rax
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  int v39; // eax
  int IsWddmConnectedSession; // eax
  int v41; // ecx
  unsigned int v42; // eax
  int v43; // eax

  v1 = 0;
  v2 = *a1;
  if ( (unsigned int)a1[1] < 0x808 )
  {
    v7 = -1073741789;
    if ( v2 == -21 )
    {
      v1 = 1144084225;
      WdLogSingleEntry3(2LL, (unsigned int)a1[1]);
      WdLogGlobalForLineNumber = 18689;
      goto LABEL_68;
    }
    return v7;
  }
  a1[513] = 0;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(DxgkWin32kInterface + 256))(
         *((_QWORD *)a1 + 1),
         (unsigned int)a1[4],
         0LL,
         a1);
  v7 = v5;
  if ( v5 < 0 && v2 == -21 )
  {
    WdLogSingleEntry4(2LL, a1[3], (unsigned int)a1[2], (unsigned int)a1[4], v5);
    v1 = a1[506];
    WdLogGlobalForLineNumber = 18713;
    goto LABEL_68;
  }
  if ( a1[4] == -1 )
    goto LABEL_29;
  v8 = *(_QWORD *)(W32GetSessionState(v6) + 88);
  v9 = *(_QWORD *)(v8 + 1184);
  if ( !v9 )
    goto LABEL_64;
  v10 = a1[2];
  while ( _bittest((const signed __int32 *)(v9 + 160), 0x17u) )
  {
    if ( v10 == *(_DWORD *)(v9 + 240) )
    {
      v11 = *(_DWORD *)(v9 + 244);
      goto LABEL_9;
    }
LABEL_37:
    v9 = *(_QWORD *)(v9 + 128);
    if ( !v9 )
      goto LABEL_11;
  }
  if ( v10 != *(_DWORD *)(v9 + 288) )
    goto LABEL_37;
  v11 = *(_DWORD *)(v9 + 292);
LABEL_9:
  if ( a1[3] != v11 || *(_DWORD *)(v9 + 248) != a1[4] )
    goto LABEL_37;
LABEL_11:
  if ( v9 && (*(_QWORD *)(v9 + 144) || *(_QWORD *)(v9 + 296)) )
  {
    if ( !_bittest((const signed __int32 *)(v9 + 160), 0x17u) && !*(_DWORD *)(v9 + 288) && !*(_DWORD *)(v9 + 292) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 18786;
    }
    if ( (*(_DWORD *)(v9 + 164) & 1) != 0 )
    {
      v7 = -1073741130;
      if ( v2 == -21 )
      {
        v1 = 1144084228;
        WdLogSingleEntry5(
          2LL,
          a1[3],
          (unsigned int)a1[2],
          (unsigned int)a1[4],
          *(unsigned int *)(v9 + 160),
          1144084228LL);
        WdLogGlobalForLineNumber = 18803;
      }
      else
      {
        WdLogSingleEntry1(4LL, -1073741130LL);
        WdLogGlobalForLineNumber = 18808;
      }
      goto LABEL_72;
    }
    GreAcquireSemaphore<19,>(v8);
    v16 = *(_QWORD *)(W32GetUserSessionState(v13, v12, v14, v15) + 70544);
    v21 = (PsGetCurrentProcess() == v16 || (unsigned __int8)DCompositionIsShellProcess() || v2 == -30)
       && (!*(_WORD *)(W32GetUserSessionState(v18, v17, v19, v20) + 68744)
        || (unsigned int)UserRemoteConnectedSessionUsingWddm());
    v22 = *(_QWORD *)(W32GetSessionState(v18) + 88);
    for ( i = *(__int64 **)(v22 + 3952); i; i = (__int64 *)*i )
    {
      LODWORD(v22) = *((_DWORD *)i + 10);
      if ( (v22 & 0x401) == 1 )
      {
        if ( v21 )
        {
          if ( (v22 & 0x20000) == 0 )
          {
            v32 = i[321];
            if ( v32 )
            {
              if ( v32 != -4 && (*(_DWORD *)(v32 + 160) & 0x800000) != 0 )
              {
                LODWORD(v22) = *((_DWORD *)i + 644);
                if ( a1[411] == (_DWORD)v22 )
                {
                  v33 = *((_DWORD *)i + 645);
                  if ( a1[412] == v33 )
                  {
                    v34 = i[267];
                    LODWORD(v22) = v34 + v22;
                    if ( *(_QWORD *)(a1 + 413) == __PAIR64__(v33 + HIDWORD(v34), v22) )
                    {
                      v35 = a1[513] & 0xFFFFFFFE;
                      a1[513] = v35;
                      if ( *((_DWORD *)i + 644) || (v36 = 2, *((_DWORD *)i + 645)) )
                        v36 = 0;
                      v23 = 4;
                      v37 = v36 | v35 & 0xFFFFFFFD;
                      v38 = 0;
                      a1[513] = v37;
                      if ( i[321] == v9 )
                        v38 = 4;
                      LODWORD(v22) = v37 & 0xFFFFFFFB;
                      v39 = v22 | v38;
                      goto LABEL_61;
                    }
                  }
                }
              }
            }
          }
        }
        else if ( i[321] == v9 )
        {
          IsWddmConnectedSession = UserIsWddmConnectedSession();
          a1[411] = *((_DWORD *)i + 644);
          v23 = -436;
          a1[412] = *((_DWORD *)i + 645);
          v41 = i[5] & 0x20000;
          if ( IsWddmConnectedSession )
          {
            a1[413] = *((_DWORD *)i + 644)
                    + *(__int64 *)((char *)i + (-(__int64)(v41 != 0) & 0xFFFFFFFFFFFFFE4CuLL) + 2136);
            a1[414] = *((_DWORD *)i + 645)
                    + HIDWORD(*(unsigned __int64 *)((char *)i
                                                  + (-(__int64)((i[5] & 0x20000) != 0) & 0xFFFFFFFFFFFFFE4CuLL)
                                                  + 2136));
            v42 = a1[513] & 0xFFFFFFFE;
            a1[513] = v42;
            if ( *((_DWORD *)i + 644) || (LODWORD(v22) = 2, *((_DWORD *)i + 645)) )
              LODWORD(v22) = 0;
            v39 = v22 | v42 & 0xFFFFFFFD | 4;
          }
          else
          {
            a1[413] = *((_DWORD *)i + 644)
                    + *(__int64 *)((char *)i + (-(__int64)(v41 != 0) & 0xFFFFFFFFFFFFFE4CuLL) + 2136);
            a1[414] = *((_DWORD *)i + 645)
                    + HIDWORD(*(unsigned __int64 *)((char *)i
                                                  + (-(__int64)((i[5] & 0x20000) != 0) & 0xFFFFFFFFFFFFFE4CuLL)
                                                  + 2136));
            a1[479] = a1[4];
            a1[480] = 0;
            *(_QWORD *)(a1 + 481) = *(__int64 *)((char *)i
                                               + (-(__int64)((i[5] & 0x20000) != 0) & 0xFFFFFFFFFFFFFE4CuLL)
                                               + 2136);
            *((_QWORD *)a1 + 244) = 0LL;
            a1[490] = *(__int64 *)((char *)i + (-(__int64)((i[5] & 0x20000) != 0) & 0xFFFFFFFFFFFFFE4CuLL) + 2136);
            v23 = 4;
            a1[491] = HIDWORD(*(unsigned __int64 *)((char *)i
                                                  + (-(__int64)((i[5] & 0x20000) != 0) & 0xFFFFFFFFFFFFFE4CuLL)
                                                  + 2136));
            v43 = a1[513] | 1;
            a1[483] = 4;
            a1[513] = v43;
            a1[484] = 60000;
            a1[485] = 1000;
            *((_QWORD *)a1 + 243) = 1LL;
            if ( *((_DWORD *)i + 644) || (LODWORD(v22) = 2, *((_DWORD *)i + 645)) )
              LODWORD(v22) = 0;
            v39 = v22 | v43 & 0xFFFFFFFD | 4;
          }
LABEL_61:
          a1[513] = v39;
          break;
        }
      }
    }
    v25 = *(struct _ERESOURCE **)v8;
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v22, (unsigned int)&LockRelease, v23, *(_QWORD *)v8, (__int64)L"DriverMgmt");
    GrepReleaseLockValidate<19>();
    GreReleaseSemaphoreSharedInternal(v25);
    if ( !i && (!a1[507] || !(unsigned int)UserIsWddmConnectedSession()) )
    {
      *(_QWORD *)(a1 + 481) = 0LL;
      *(_QWORD *)(a1 + 483) = 5LL;
      a1[485] = 1;
      *((_QWORD *)a1 + 243) = 1LL;
      *(_OWORD *)(a1 + 411) = 0LL;
      *((_OWORD *)a1 + 122) = 0LL;
      a1[513] = ((unsigned int)UserIsConsoleConnection() == 0) | a1[513] & 0xFFFFFFF8;
    }
    v26 = a1 + 415;
    v27 = 128LL;
    v28 = v9 - (_QWORD)(a1 + 415);
    do
    {
      if ( v27 == 96 )
        break;
      v29 = *(_WORD *)((char *)v26 + v28 + 64);
      if ( !v29 )
        break;
      *v26++ = v29;
      --v27;
    }
    while ( v27 );
    v30 = v26 - 1;
    if ( v27 )
      v30 = v26;
    *v30 = 0;
LABEL_29:
    if ( (v7 & 0x80000000) == 0 )
      return 0LL;
LABEL_72:
    if ( v2 == -21 )
      goto LABEL_68;
    return v7;
  }
LABEL_64:
  v7 = -1073741275;
  if ( v2 != -21 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 18777;
    return v7;
  }
  if ( v9 )
  {
    v1 = 1144084227;
    WdLogSingleEntry5(2LL, a1[3], (unsigned int)a1[2], (unsigned int)a1[4], *(unsigned int *)(v9 + 160), 1144084227LL);
    WdLogGlobalForLineNumber = 18772;
  }
  else
  {
    v1 = 1144084226;
    WdLogSingleEntry4(2LL, a1[3], (unsigned int)a1[2], (unsigned int)a1[4], 1144084226LL);
    WdLogGlobalForLineNumber = 18762;
  }
LABEL_68:
  a1[506] = v1;
  return v7;
}
