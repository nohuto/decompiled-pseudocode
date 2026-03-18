/*
 * XREFs of ReleaseCacheDC @ 0x14003BF80
 * Callers:
 *     UserReleaseDC @ 0x14003AEA0 (UserReleaseDC.c)
 *     _ReleaseDC @ 0x14003BBD0 (_ReleaseDC.c)
 *     NtUserReleaseDC @ 0x14003BF40 (NtUserReleaseDC.c)
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GreValidateVisrgn @ 0x1400149E8 (GreValidateVisrgn.c)
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B1F0 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x14003AEDC (IsGreSelectRedirectionBitmapSupported.c)
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B5D4 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B6A8 (--$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ?TraceLoggingProcessDCsInUse@@YAXKK@Z @ 0x140102B20 (-TraceLoggingProcessDCsInUse@@YAXKK@Z.c)
 *     ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x140102BA8 (-TraceLoggingGlobalDCsInUse@@YAXK@Z.c)
 *     DeleteHrgnClip @ 0x1401492A0 (DeleteHrgnClip.c)
 *     IsDeleteHrgnClipSupported @ 0x140149B7C (IsDeleteHrgnClipSupported.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x14015C7BC (FlushWEFCOMPOSITEDDCEBounds.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x14015E2B0 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, int a2)
{
  struct _ERESOURCE **v4; // rbx
  __int64 v5; // rdx
  int v6; // r8d
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *i; // rdi
  __int64 v20; // rcx
  int (*v21)(void); // rax
  __int64 v22; // rcx
  void (__fastcall *v23)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD); // rax
  struct HOBJ__ *v24; // rbx
  unsigned int v25; // esi
  BOOL v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbp
  unsigned int *v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  LONGLONG v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 UserSessionState; // rax
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  LONGLONG v53; // rcx
  __int64 v54; // rdx
  unsigned int v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rbx
  void (__fastcall *v69)(__int64, _QWORD); // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // eax
  __int64 SessionState; // rax
  __int64 v77; // rdx
  int v78; // r8d
  __int64 v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rax
  __int64 v104; // rdx
  int v105; // r8d
  DC *v106[14]; // [rsp+40h] [rbp-88h] BYREF

  v4 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  GreAcquireSemaphoreShared<1,>(v4, v5, v6);
  GreAcquireSemaphore<2,>(v4, v7, v8);
  GreAcquireSemaphore<3,>(v4, v9, v10);
  v17 = *(_QWORD *)(W32GetUserSessionState(v12, v11, v13, v14) + 56968);
  for ( i = *(__int64 **)(v17 + 24); ; i = (__int64 *)*i )
  {
    v16 = *(_QWORD *)(W32GetUserSessionState(v16, v15, v17, v18) + 56968) + 24LL;
    if ( i == (__int64 *)v16 )
      break;
    v15 = i[2];
    if ( v15 == a1 )
    {
      v20 = *((unsigned int *)i + 12);
      if ( (int)v20 < 0 )
      {
        if ( (unsigned int)DestroyCacheDC(i) )
        {
          v25 = 1;
          goto LABEL_32;
        }
      }
      else if ( (v20 & 0x401800) == 0x1000 )
      {
        if ( (v20 & 0x4000) != 0 )
        {
          v20 = *(_QWORD *)(i[12] + 40);
          if ( (*(_BYTE *)(v20 + 27) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 )
            FlushWEFCOMPOSITEDDCEBounds(i);
        }
        if ( (i[6] & 2) == 0 )
        {
LABEL_30:
          v75 = *((_DWORD *)i + 12);
          if ( (v75 & 0xC0) != 0 && ((v75 & 2) != 0 || a2) && (int)IsDeleteHrgnClipSupported() >= 0 )
            DeleteHrgnClip(i);
          v25 = 0;
          goto LABEL_32;
        }
        v21 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20) + 24) + 2640LL);
        if ( v21 )
        {
          if ( v21() >= 0 )
          {
            v23 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22) + 24)
                                                                                         + 2648LL);
            if ( v23 )
              v23(a1, 0LL, 0LL, 0LL, 0, 0);
          }
        }
        v24 = (struct HOBJ__ *)i[2];
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v106, (HDC)v24);
        v25 = 1;
        v26 = v106[0]
           && (unsigned int)XDCOBJ::bCleanDC(v106, 0)
           && (unsigned int)GrepSetDCOwnerEx(v106[2], v24, 0x80000012, 0, 0);
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v106);
        if ( v26 )
        {
          v30 = i[7];
          if ( v30 )
            v31 = *(unsigned int **)(v30 + 456);
          else
            v31 = (unsigned int *)i[8];
          if ( !*(_DWORD *)(W32GetUserSessionState(v20, v27, v28, v29) + 19688) )
          {
            if ( !*(_QWORD *)(W32GetUserSessionState(v33, v32, v34, v35) + 19664) )
            {
              v40 = gliQpcFreq.QuadPart * *(_QWORD *)(W32GetUserSessionState(v37, v36, v38, v39) + 19672);
              *(_QWORD *)(W32GetUserSessionState(v40, v41, v42, v43) + 19664) = 60 * v40;
            }
            --v31[270];
            UserSessionState = W32GetUserSessionState(v37, v36, v38, v39);
            --*(_DWORD *)(UserSessionState + 19696);
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v50 = W32GetUserSessionState(v47, v46, v48, v49);
            HIDWORD(v54) = 0;
            v53 = *(unsigned int *)(v50 + 19684);
            LODWORD(v54) = v31[271] % (unsigned int)v53;
            if ( !(_DWORD)v54 )
            {
              v80 = *(_QWORD *)(W32GetUserSessionState(v53, 0LL, v51, v52) + 19640);
              v85 = W32GetUserSessionState(v82, v81, v83, v84);
              v53 = PerformanceCounter.QuadPart - v80;
              if ( PerformanceCounter.QuadPart - v80 >= *(_QWORD *)(v85 + 19664) )
              {
                TraceLoggingProcessDCsInUse(v31[271], v31[14]);
                *(LARGE_INTEGER *)(W32GetUserSessionState(v87, v86, v88, v89) + 19640) = PerformanceCounter;
              }
            }
            v55 = *(_DWORD *)(W32GetUserSessionState(v53, v54, v51, v52) + 19656);
            v60 = W32GetUserSessionState(v57, v56, v58, v59);
            if ( !(v55 % *(_DWORD *)(v60 + 19680)) )
            {
              v90 = *(_QWORD *)(W32GetUserSessionState(v60, 0LL, v61, v62) + 19648);
              if ( PerformanceCounter.QuadPart - v90 >= *(_QWORD *)(W32GetUserSessionState(v92, v91, v93, v94) + 19664) )
              {
                v98 = W32GetUserSessionState(PerformanceCounter.QuadPart - v90, v95, v96, v97);
                TraceLoggingGlobalDCsInUse(*(_DWORD *)(v98 + 19656));
                *(LARGE_INTEGER *)(W32GetUserSessionState(v100, v99, v101, v102) + 19648) = PerformanceCounter;
              }
            }
          }
          v63 = i[2];
          *((_DWORD *)i + 12) &= ~0x1000u;
          i[7] = 0LL;
          i[8] = 0LL;
          GreValidateVisrgn(v63, 0);
          if ( (i[6] & 0x4000) != 0 && (int)IsGreSelectRedirectionBitmapSupported(v65) >= 0 )
          {
            v68 = i[2];
            v64 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v65) + 24);
            v69 = *(void (__fastcall **)(__int64, _QWORD))(v64 + 2616);
            if ( v69 )
              v69(v68, 0LL);
          }
          v70 = W32GetUserSessionState(v65, v64, v66, v67);
          ++*(_DWORD *)(v70 + 19692);
          if ( *(int *)(W32GetUserSessionState(v72, v71, v73, v74) + 19692) <= 32 || !(unsigned int)DestroyCacheDC(i) )
            goto LABEL_30;
LABEL_32:
          SessionState = W32GetSessionState(v20);
          GrepUnlockVisRgn(*(struct _ERESOURCE ***)(SessionState + 88), v77, v78);
          return v25;
        }
      }
      v25 = 2;
      goto LABEL_32;
    }
  }
  v103 = W32GetSessionState(v16);
  GrepUnlockVisRgn(*(struct _ERESOURCE ***)(v103 + 88), v104, v105);
  UserSetLastError(1425LL);
  return 2LL;
}
