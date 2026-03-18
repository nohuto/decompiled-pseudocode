/*
 * XREFs of ReleaseCacheDC @ 0x140046EA0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 *     NtUserReleaseDC @ 0x1400474E0 (NtUserReleaseDC.c)
 *     _ReleaseDC @ 0x140047B90 (_ReleaseDC.c)
 *     UserReleaseDC @ 0x1400F4E50 (UserReleaseDC.c)
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     GreValidateVisrgn @ 0x1400473D4 (GreValidateVisrgn.c)
 *     ?TraceLoggingProcessDCsInUse@@YAXKK@Z @ 0x1400C33B0 (-TraceLoggingProcessDCsInUse@@YAXKK@Z.c)
 *     ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x1400C3430 (-TraceLoggingGlobalDCsInUse@@YAXK@Z.c)
 *     DeleteHrgnClip @ 0x140109BD0 (DeleteHrgnClip.c)
 *     IsDeleteHrgnClipSupported @ 0x14010B484 (IsDeleteHrgnClipSupported.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x14012231C (FlushWEFCOMPOSITEDDCEBounds.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1401240DC (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1401C90C0 (GreCleanDCAndSetOwnerEx.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *i; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int (*v12)(void); // rax
  void (__fastcall *v13)(__int64, _QWORD, _QWORD, _QWORD, _DWORD); // rax
  __int64 v14; // rsi
  unsigned int *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  LARGE_INTEGER PerformanceCounter; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  LONGLONG v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  HDC v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int (*v34)(void); // rax
  __int64 v35; // rbx
  void (__fastcall *v36)(__int64, _QWORD); // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  LONGLONG v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
  for ( i = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968) + 24LL); ; i = (__int64 *)*i )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 56968) + 24LL;
    if ( i == (__int64 *)v8 )
    {
      v60 = W32GetUserSessionState(v8, v10);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v60 + 56968) + 48LL));
      UserSetLastError(1425);
      return 2LL;
    }
    v7 = i[2];
    if ( v7 == a1 )
      break;
  }
  v11 = *((unsigned int *)i + 12);
  if ( (int)v11 < 0 )
  {
    if ( (unsigned int)DestroyCacheDC(i) )
    {
LABEL_34:
      v43 = W32GetUserSessionState(v11, v7);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v43 + 56968) + 48LL));
      return 1LL;
    }
    goto LABEL_37;
  }
  if ( (v11 & 0x401800) != 0x1000 )
    goto LABEL_37;
  if ( (v11 & 0x4000) != 0 )
  {
    v11 = *(_QWORD *)(i[12] + 40);
    if ( (*(_BYTE *)(v11 + 27) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 )
      FlushWEFCOMPOSITEDDCEBounds(i);
  }
  if ( (i[6] & 2) != 0 )
  {
    v12 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2616LL);
    if ( v12 )
    {
      if ( v12() >= 0 )
      {
        v13 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable()
                                                                                         + 24)
                                                                             + 2624LL);
        if ( v13 )
          v13(a1, 0LL, 0LL, 0LL, 0);
      }
    }
    if ( (unsigned int)GreCleanDCAndSetOwnerEx((HDC)i[2]) )
    {
      v14 = i[7];
      if ( v14 )
        v15 = *(unsigned int **)(v14 + 464);
      else
        v15 = (unsigned int *)i[8];
      if ( !*(_DWORD *)(W32GetUserSessionState(v11, v7) + 19656) )
      {
        if ( !*(_QWORD *)(W32GetUserSessionState(v17, v16) + 19632) )
        {
          v45 = gliQpcFreq.QuadPart * *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19640);
          *(_QWORD *)(W32GetUserSessionState(v45, v46) + 19632) = 60 * v45;
        }
        --v15[270];
        v20 = W32GetUserSessionState(v19, v18);
        --*(_DWORD *)(v20 + 19664);
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v24 = W32GetUserSessionState(v23, v22);
        HIDWORD(v26) = 0;
        v25 = *(unsigned int *)(v24 + 19652);
        LODWORD(v26) = v15[271] % (unsigned int)v25;
        if ( !(_DWORD)v26 )
        {
          v47 = *(_QWORD *)(W32GetUserSessionState(v25, 0LL) + 19608);
          v50 = W32GetUserSessionState(v49, v48);
          v25 = PerformanceCounter.QuadPart - v47;
          if ( PerformanceCounter.QuadPart - v47 >= *(_QWORD *)(v50 + 19632) )
          {
            TraceLoggingProcessDCsInUse(v15[271], v15[14]);
            *(LARGE_INTEGER *)(W32GetUserSessionState(v52, v51) + 19608) = PerformanceCounter;
          }
        }
        v27 = *(_DWORD *)(W32GetUserSessionState(v25, v26) + 19624);
        v30 = W32GetUserSessionState(v29, v28);
        if ( !(v27 % *(_DWORD *)(v30 + 19648)) )
        {
          v53 = *(_QWORD *)(W32GetUserSessionState(v30, 0LL) + 19616);
          if ( PerformanceCounter.QuadPart - v53 >= *(_QWORD *)(W32GetUserSessionState(v55, v54) + 19632) )
          {
            v57 = W32GetUserSessionState(PerformanceCounter.QuadPart - v53, v56);
            TraceLoggingGlobalDCsInUse(*(_DWORD *)(v57 + 19624));
            *(LARGE_INTEGER *)(W32GetUserSessionState(v59, v58) + 19616) = PerformanceCounter;
          }
        }
      }
      v31 = (HDC)i[2];
      i[7] = 0LL;
      i[8] = 0LL;
      *((_DWORD *)i + 12) &= ~0x1000u;
      GreValidateVisrgn(v31);
      if ( (i[6] & 0x4000) != 0 )
      {
        v33 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
        v34 = *(int (**)(void))(v33 + 2584);
        if ( v34 )
        {
          if ( v34() >= 0 )
          {
            v35 = i[2];
            v32 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
            v36 = *(void (__fastcall **)(__int64, _QWORD))(v32 + 2592);
            if ( v36 )
              v36(v35, 0LL);
          }
        }
      }
      v37 = W32GetUserSessionState(v33, v32);
      ++*(_DWORD *)(v37 + 19660);
      if ( *(int *)(W32GetUserSessionState(v39, v38) + 19660) > 32 && (unsigned int)DestroyCacheDC(i) )
        goto LABEL_34;
      goto LABEL_27;
    }
LABEL_37:
    v44 = W32GetUserSessionState(v11, v7);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v44 + 56968) + 48LL));
    return 2LL;
  }
LABEL_27:
  v40 = *((_DWORD *)i + 12);
  if ( (v40 & 0xC0) != 0 && ((v40 & 2) != 0 || v2) && (int)IsDeleteHrgnClipSupported() >= 0 )
    DeleteHrgnClip(i);
  v41 = W32GetUserSessionState(v11, v7);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v41 + 56968) + 48LL));
  return 0LL;
}
