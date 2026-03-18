/*
 * XREFs of ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x1400193F0
 * Callers:
 *     NtGdiGetTextFaceW @ 0x140179A20 (NtGdiGetTextFaceW.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x140017DB0 (IsThreadCrossSessionAttached.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x140017E24 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1400193DC (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z @ 0x14001A6D0 (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x14001AAE0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     GrepReleasePublicPFTSemaphoreEx @ 0x140160FD0 (GrepReleasePublicPFTSemaphoreEx.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1402154A8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall GrepGetTextFaceW(struct UDCOBJ *a1, int a2, unsigned __int16 *a3, int a4)
{
  __int64 v4; // rax
  struct LFONT *v6; // r14
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *HDEV; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // rbx
  bool v17; // zf
  struct _KTHREAD *CurrentThread; // r14
  __int64 v19; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v21; // rbx
  __int64 v22; // r8
  char v23; // cl
  struct PFE *v24; // r9
  _DWORD *v25; // rax
  int v26; // ecx
  __int64 v27; // rcx
  const wchar_t *v28; // rdi
  void *v29; // r15
  int v30; // edx
  __int64 v31; // rsi
  struct _KTHREAD *v32; // rdi
  __int64 v33; // rbx
  __int64 *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  _QWORD *v37; // rcx
  __int64 v39; // rsi
  const wchar_t *v40; // rbx
  int v41; // r15d
  const wchar_t *v42; // r12
  __int64 v43; // rax
  int v44; // edi
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // edi
  int v49; // edi
  __int64 v50; // rcx
  int v51; // edx
  unsigned __int64 i; // rcx
  int v53; // eax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  const wchar_t *v56; // rbx
  int v57; // r15d
  const wchar_t *v58; // r12
  __int64 v59; // rax
  unsigned int v60; // [rsp+30h] [rbp-89h] BYREF
  int v61; // [rsp+34h] [rbp-85h]
  _DWORD *v62; // [rsp+38h] [rbp-81h] BYREF
  struct LFONT *v63; // [rsp+40h] [rbp-79h]
  unsigned int v64; // [rsp+48h] [rbp-71h] BYREF
  _QWORD *v65; // [rsp+50h] [rbp-69h] BYREF
  HSEMAPHORE v66; // [rsp+58h] [rbp-61h] BYREF
  void *v67; // [rsp+60h] [rbp-59h]
  struct _POINTL v68; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v69[96]; // [rsp+70h] [rbp-49h] BYREF

  v4 = *(_QWORD *)a1;
  v6 = 0LL;
  v67 = a3;
  v61 = a2;
  v8 = 0;
  v65 = *(_QWORD **)(v4 + 48);
  if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v65) )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v65);
  LOBYTE(v9) = 10;
  HDEV = v65;
  v13 = HmgShareLock(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL), v9, v10, v11);
  v14 = v13 + 24;
  v15 = -v13;
  v16 = (_DWORD *)(v14 & -(__int64)(v15 != 0));
  v62 = v16;
  if ( v16 )
  {
    v17 = (*(_BYTE *)((v14 & -(__int64)(v15 != 0)) + 4) & 1) == 0;
    v6 = (struct LFONT *)(v16 - 6);
    v63 = (struct LFONT *)(v16 - 6);
    if ( !v17 )
    {
      v44 = *v16;
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)(v16 - 6));
      v6 = 0LL;
      v63 = 0LL;
      if ( HDEV || (HDEV = (_QWORD *)UserGetHDEV()) != 0LL )
      {
        v48 = v44 - 4;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            if ( v49 != 1 )
            {
LABEL_61:
              v16 = (_DWORD *)(((unsigned __int64)v6 + 24) & -(__int64)(v6 != 0LL));
              v62 = v16;
              goto LABEL_5;
            }
            v50 = HDEV[181];
          }
          else
          {
            v50 = HDEV[180];
          }
        }
        else
        {
          v50 = HDEV[179];
        }
        if ( v50 )
        {
          LOBYTE(v45) = 10;
          v6 = (struct LFONT *)HmgShareLock(v50, v45, v46, v47);
          v63 = v6;
        }
        goto LABEL_61;
      }
    }
  }
  else
  {
    v63 = 0LL;
  }
LABEL_5:
  if ( v16 && UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
  {
    v66 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState() + 96) + 20344LL);
    GreAcquireSemaphoreInternal(v66);
    CurrentThread = KeGetCurrentThread();
    v19 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v19 = *ThreadWin32Thread;
    }
    v21 = (__int64 *)((v19 + 8) & -(__int64)(v19 != 0));
    if ( v21 )
    {
      v22 = *v21;
      if ( (*v21 & 0xFFFFFFFFFFFE0000uLL) != 0 && (*v21 & 0x20000) == 0 )
      {
        v51 = 37;
        for ( i = 0LL; i < 0x40; ++i )
        {
          v53 = i;
          if ( !_bittest64(&v22, i) )
            v53 = v51;
          v51 = v53;
        }
        if ( v53 > 17 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v53, v22);
      }
      v23 = *(_BYTE *)(((v19 + 8) & -(__int64)(v19 != 0)) + 0x19);
      *(_BYTE *)(((v19 + 8) & -(__int64)(v19 != 0)) + 0x19) = v23 + 1;
      if ( !v23 )
        *v21 |= 0x20000uLL;
    }
    v64 = 0;
    v60 = 0;
    v68 = 0LL;
    memset_0(v69, 0, sizeof(v69));
    v6 = v63;
    BuildMapperParameters((struct MAPPER::PARAMETERS *)v69, a1, (*((_DWORD *)v63 + 7) & 2) != 0, 0);
    v24 = LFONTCOREOBJ::ppfeMapFont((LFONTCOREOBJ *)&v62, (struct MAPPER::PARAMETERS *)v69, &v64, &v68, &v60);
    if ( !v24 )
    {
      SEMOBJ<17>::vUnlock(&v66);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v6);
      return 0LL;
    }
    v25 = v62;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL) = v60 >> 8;
    v26 = 0;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x10u;
    if ( (v60 & 2) == 0 || (v28 = (const wchar_t *)(v25 + 70), !*((_WORD *)v25 + 140)) )
    {
      v27 = *((_QWORD *)v24 + 4);
      v28 = (const wchar_t *)(v27 + *(int *)(v27 + 8));
      v26 = (*(_DWORD *)(v27 + 48) >> 27) & 1;
    }
    v29 = v67;
    if ( v67 )
    {
      v30 = v61;
      if ( v61 >= 1 )
      {
        v31 = -1LL;
        if ( a4 && v26 )
        {
          v40 = v28;
          v41 = 0;
          if ( *v28 )
          {
            v42 = (const wchar_t *)(v25 + 70);
            do
            {
              if ( !_wcsicmp(v42, v40) )
                break;
              v43 = -1LL;
              do
                ++v43;
              while ( v40[v43] );
              v41 += v43 + 1;
              v40 = &v28[v41];
            }
            while ( *v40 );
            v30 = v61;
          }
          v29 = v67;
          if ( *v40 )
            v28 = v40;
        }
        do
          ++v31;
        while ( v28[v31] );
        v8 = v31 + 1;
        if ( v30 < v8 )
          v8 = v30;
        memmove(v29, v28, 2LL * v8);
        *((_WORD *)v29 + v8 - 1) = 0;
      }
    }
    else
    {
      v39 = -1LL;
      if ( a4 && v26 )
      {
        v56 = v28;
        v57 = 0;
        if ( *v28 )
        {
          v58 = (const wchar_t *)(v25 + 70);
          do
          {
            if ( !_wcsicmp(v58, v56) )
              break;
            v59 = -1LL;
            do
              ++v59;
            while ( v56[v59] );
            v57 += v59 + 1;
            v56 = &v28[v57];
          }
          while ( *v56 );
        }
        if ( *v56 )
          v28 = v56;
      }
      do
        ++v39;
      while ( v28[v39] );
      v8 = v39 + 1;
    }
    if ( v66 == (HSEMAPHORE)-2LL )
    {
      GrepReleasePublicPFTSemaphoreEx();
    }
    else if ( v66 )
    {
      EtwTraceGreLockReleaseSemaphore(L"PublicPFT", v66);
      v32 = KeGetCurrentThread();
      v33 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v34 = (__int64 *)PsGetThreadWin32Thread(v32);
        if ( v34 )
          v33 = *v34;
      }
      v35 = v33 + 8;
      v36 = -v33;
      v37 = (_QWORD *)(v35 & -(__int64)(v36 != 0));
      if ( v37 )
      {
        v17 = (*(_BYTE *)((v35 & -(__int64)(v36 != 0)) + 0x19))-- == 1;
        if ( v17 )
          *v37 &= ~0x20000uLL;
        if ( !*v37 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v66);
      v6 = v63;
    }
  }
  if ( v6 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v6);
  return (unsigned int)v8;
}
