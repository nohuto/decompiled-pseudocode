/*
 * XREFs of xxxSetWindowLong @ 0x140180294
 * Callers:
 *     NtUserSetWindowLong @ 0x140180160 (NtUserSetWindowLong.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     safe_cast_wf_to_PDIALOG @ 0x140285C94 (safe_cast_wf_to_PDIALOG.c)
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x1402DE194 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetWindowData @ 0x1402DE828 (xxxSetWindowData.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // rdi
  __int64 v6; // r15
  char v8; // bl
  unsigned __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  const struct tagUIPI_INFO *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // edi
  __int64 v25; // rsi
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ecx
  unsigned __int64 v30; // rdx
  const signed __int16 *v31; // rcx
  unsigned int v32; // edi
  int *v33; // rsi
  __int64 UserSessionState; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // r8
  unsigned int *v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // [rsp+24h] [rbp-84h]
  unsigned int v40; // [rsp+24h] [rbp-84h]
  unsigned int *v41; // [rsp+28h] [rbp-80h]

  v5 = (int)a3;
  v6 = a2;
  v8 = 0;
  if ( !(unsigned int)FCallerOk(a1) )
    goto LABEL_59;
  if ( (int)v6 < 0 )
    goto LABEL_14;
  v9 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 248LL);
  if ( v6 + 4 <= v9 )
    goto LABEL_14;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  v11 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
  if ( v12 == v11 )
    goto LABEL_14;
  v13 = (const struct tagUIPI_INFO *)(v12 + 864);
  v14 = PsGetCurrentProcessWin32Process(v12);
  if ( v14 )
  {
    v15 = -(__int64)(*(_QWORD *)v14 != 0LL);
    v14 &= v15;
  }
  if ( !UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v14 + 864), v13, (const struct tagUIPI_INFO *)v15) )
  {
    v17 = PsGetCurrentProcessWin32Process(v16);
    if ( v17 )
      v17 &= -(__int64)(*(_QWORD *)v17 != 0LL);
    if ( *(int *)(v17 + 12) >= 0 )
    {
LABEL_59:
      UserSetLastError(5);
      return 0LL;
    }
  }
  KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 464LL));
  v8 = 1;
LABEL_14:
  v18 = (char *)a1 + 40;
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0 )
    goto LABEL_39;
  v41 = (unsigned int *)safe_cast_wf_to_PDIALOG(a1);
  if ( v41 )
  {
    if ( !(_DWORD)v6 )
    {
      v40 = *v41;
      *(_QWORD *)v41 = v5;
      v23 = v40;
      goto LABEL_28;
    }
    if ( (_DWORD)v6 == 16 )
    {
      v22 = *(_DWORD *)(*(_QWORD *)v18 + 248LL);
      if ( v22 || *(int *)(*(_QWORD *)v18 + 200LL) < 30 )
      {
        v23 = 0;
        if ( v22 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 709LL);
        if ( *(int *)(*(_QWORD *)v18 + 200LL) < 30 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 710LL);
      }
      else
      {
        v39 = v41[4];
        *((_QWORD *)v41 + 2) = v5;
        v23 = v39;
      }
      goto LABEL_28;
    }
    if ( (unsigned int)v6 <= 0x1D )
    {
      v21 = 1415;
      goto LABEL_54;
    }
    goto LABEL_39;
  }
  if ( (int)v6 < 0 )
  {
LABEL_40:
    if ( (unsigned int)(v6 + 21) <= 9 )
    {
      v29 = 547;
      if ( _bittest(&v29, v6 + 21) )
      {
        v23 = xxxSetWindowData(a1);
        goto LABEL_28;
      }
    }
LABEL_38:
    v21 = 1413;
LABEL_54:
    UserSetLastError(v21);
    if ( v8 )
      KeDetachProcess();
    return 0LL;
  }
  v25 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 19872);
  v26 = *(unsigned __int16 *)(*(_QWORD *)v18 + 42LL);
  if ( (int)v6 >= *(unsigned __int16 *)(v25 + 2LL * ((v26 & 0xFFFF2FFF) - 666) + 328)
                - *(unsigned __int16 *)(W32GetUserSessionState(v28, v27) + 71180) )
  {
LABEL_39:
    if ( (int)v6 < 0 )
      goto LABEL_40;
    goto LABEL_43;
  }
  if ( (*(_WORD *)(*(_QWORD *)v18 + 42LL) & 0x2FFF) != 0x2A7
    || (_DWORD)v6 && ((_DWORD)v6 != 8 || **(_DWORD **)(*(_QWORD *)v18 + 296LL) && *(char *)(*(_QWORD *)v18 + 19LL) >= 0) )
  {
    goto LABEL_38;
  }
LABEL_43:
  v30 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v18 + 248LL) + *(_DWORD *)(*(_QWORD *)v18 + 200LL));
  if ( (unsigned __int64)(unsigned int)v6 + 4 > v30 )
    goto LABEL_38;
  if ( a5 )
  {
    v31 = *(const signed __int16 **)(*((_QWORD *)a1 + 17) + 8LL);
    if ( _bittest16(v31 + 3, 8u) )
    {
      v32 = 0;
      v33 = gDefaultServerClasses;
      while ( 1 )
      {
        UserSessionState = W32GetUserSessionState(v31, v30);
        v31 = *(const signed __int16 **)(*((_QWORD *)a1 + 17) + 8LL);
        v30 = *(unsigned __int16 *)v31;
        if ( (_WORD)v30 == *(_WORD *)(*(_QWORD *)(UserSessionState + 19872)
                                    + 2LL * (((unsigned int)*v33 >> 3) & 0x1F)
                                    + 868) )
          break;
        ++v32;
        v33 += 12;
        if ( v32 >= 5 )
          goto LABEL_56;
      }
      if ( (int)v6 < gDefaultServerClasses[12 * v32 + 6] )
      {
        if ( (*v33 & 0xF8) == 0xB0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 788LL);
        v21 = 5;
        goto LABEL_54;
      }
    }
  }
LABEL_56:
  v35 = *((_QWORD *)a1 + 5);
  v36 = *(unsigned int *)(v35 + 248);
  if ( (int)v6 + 4LL <= v36 )
  {
    v38 = *((_QWORD *)a1 + 35);
    v23 = *(_DWORD *)((int)v6 + v38);
    *(_DWORD *)((int)v6 + v38) = a3;
  }
  else
  {
    v37 = (unsigned int *)(*(_QWORD *)(v35 + 296) + (int)v6 - (int)v36);
    v23 = *v37;
    *v37 = a3;
  }
LABEL_28:
  if ( v8 )
    KeDetachProcess();
  return v23;
}
