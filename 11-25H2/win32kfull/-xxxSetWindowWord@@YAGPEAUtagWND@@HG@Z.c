/*
 * XREFs of ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1402DE2B8
 * Callers:
 *     NtUserSetWindowWord @ 0x140203A60 (NtUserSetWindowWord.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x1402DE194 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetWindowWord(PETHREAD **a1, int a2, unsigned __int16 a3)
{
  int v3; // edi
  unsigned __int64 v4; // r15
  char v6; // bl
  PETHREAD *v7; // r8
  __int64 v8; // rdx
  int v9; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r8
  PETHREAD v12; // rcx
  const struct tagUIPI_INFO *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  PETHREAD v21; // rcx
  const struct tagUIPI_INFO *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rsi
  int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  PETHREAD *v32; // rdx
  bool v33; // sf
  int v34; // ecx
  _DWORD *v35; // rdx
  unsigned __int16 v36; // di
  unsigned __int64 v37; // rdx
  const signed __int16 *v38; // rcx
  unsigned int v39; // edi
  int *v40; // rsi
  __int64 UserSessionState; // rax
  PETHREAD *v42; // rcx
  unsigned __int64 v43; // r8
  int v44; // r15d
  PETHREAD v45; // rax
  PETHREAD *v46; // rcx
  unsigned __int16 v47; // [rsp+20h] [rbp-48h]
  __int64 v48; // [rsp+28h] [rbp-40h]

  v3 = a3;
  v4 = a2;
  v6 = 0;
  if ( !(unsigned int)FCallerOk(a1) )
    goto LABEL_72;
  v7 = a1[5];
  v8 = v4;
  if ( (*((_BYTE *)v7 + 18) & 1) != 0 )
  {
    if ( v4 >= 8 && (v4 & 0x80000000) != 0LL || v4 > 0x16 && (int)v4 < 30 )
    {
      v9 = 1413;
LABEL_73:
      UserSetLastError(v9);
      return 0LL;
    }
    if ( (*((_WORD *)v7 + 21) & 0x2FFF) == 0x2A4 )
    {
      if ( v4 + 2 <= *((unsigned int *)v7 + 62) )
        goto LABEL_54;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4 + 2);
      v11 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      v12 = a1[2][58];
      if ( v12 == (PETHREAD)v11 )
        goto LABEL_54;
      v13 = (PETHREAD)((char *)v12 + 864);
      v14 = PsGetCurrentProcessWin32Process(v12);
      if ( v14 )
      {
        v15 = -(__int64)(*(_QWORD *)v14 != 0LL);
        v14 &= v15;
      }
      if ( UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v14 + 864), v13, (const struct tagUIPI_INFO *)v15) )
        goto LABEL_19;
      v17 = PsGetCurrentProcessWin32Process(v16);
      if ( v17 )
        v17 &= -(__int64)(*(_QWORD *)v17 != 0LL);
      if ( *(int *)(v17 + 12) < 0 )
      {
LABEL_19:
        KeAttachProcess(*(PRKPROCESS *)a1[2][58]);
        v6 = 1;
LABEL_54:
        v33 = (v4 & 0x80000000) != 0LL;
LABEL_55:
        if ( !v33 )
        {
          v37 = (unsigned int)(*((_DWORD *)a1[5] + 62) + *((_DWORD *)a1[5] + 50));
          if ( (unsigned __int64)(unsigned int)v4 + 2 <= v37 )
          {
            v38 = (const signed __int16 *)a1[17][1];
            if ( _bittest16(v38 + 3, 8u) )
            {
              v39 = 0;
              v40 = gDefaultServerClasses;
              while ( 1 )
              {
                UserSessionState = W32GetUserSessionState(v38, v37);
                v38 = (const signed __int16 *)a1[17][1];
                v37 = *(unsigned __int16 *)v38;
                if ( (_WORD)v37 == *(_WORD *)(*(_QWORD *)(UserSessionState + 19872)
                                            + 2LL * (((unsigned int)*v40 >> 3) & 0x1F)
                                            + 868) )
                  break;
                ++v39;
                v40 += 12;
                if ( v39 >= 5 )
                  goto LABEL_66;
              }
              if ( (int)v4 < gDefaultServerClasses[12 * v39 + 6] )
              {
                if ( (*v40 & 0xF8) == 0xB0 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 406);
                v34 = 5;
                goto LABEL_43;
              }
            }
LABEL_66:
            v42 = a1[5];
            v43 = *((unsigned int *)v42 + 62);
            if ( v4 + 2 <= v43 )
            {
              v46 = a1[35];
              v36 = *(_WORD *)((char *)v46 + v4);
              *(_WORD *)((char *)v46 + v4) = a3;
            }
            else
            {
              v44 = v4 - v43;
              v45 = v42[37];
              v36 = *(_WORD *)((char *)v45 + v44);
              *(_WORD *)((char *)v45 + v44) = a3;
            }
            goto LABEL_69;
          }
        }
LABEL_42:
        v34 = 1413;
LABEL_43:
        UserSetLastError(v34);
        if ( v6 )
          KeDetachProcess();
        return 0LL;
      }
LABEL_72:
      v9 = 5;
      goto LABEL_73;
    }
  }
  if ( (_DWORD)v4 == -21 )
  {
    result = *((unsigned __int16 *)v7 + 108);
    v7[27] = (PETHREAD)(v3 | ((unsigned __int16)HIWORD(*((_DWORD *)v7 + 54)) << 16));
    return result;
  }
  if ( (_DWORD)v4 == -16 )
  {
    result = *((unsigned __int16 *)v7 + 14);
    *((_DWORD *)v7 + 7) = v3 | *((_DWORD *)v7 + 7) & 0xFFFF0000;
    return result;
  }
  if ( (v4 & 0x80000000) == 0LL && v4 + 2 > *((unsigned int *)v7 + 62) )
  {
    v19 = PsGetCurrentProcessWin32Process(v4 + 2);
    v20 = v19;
    if ( v19 )
    {
      v8 = -(__int64)(*(_QWORD *)v19 != 0LL);
      v20 = v8 & v19;
    }
    v21 = a1[2][58];
    if ( v21 != (PETHREAD)v20 )
    {
      v22 = (PETHREAD)((char *)v21 + 864);
      v23 = PsGetCurrentProcessWin32Process(v21);
      if ( v23 )
      {
        v24 = -(__int64)(*(_QWORD *)v23 != 0LL);
        v23 &= v24;
      }
      if ( !UIPrivilegeIsolation::CheckAccess(
              (UIPrivilegeIsolation *)(v23 + 864),
              v22,
              (const struct tagUIPI_INFO *)v24) )
      {
        v26 = PsGetCurrentProcessWin32Process(v25);
        if ( v26 )
          v26 &= -(__int64)(*(_QWORD *)v26 != 0LL);
        if ( *(int *)(v26 + 12) >= 0 )
          goto LABEL_72;
      }
      KeAttachProcess(*(PRKPROCESS *)a1[2][58]);
      v6 = 1;
    }
  }
  v27 = *((unsigned __int16 *)a1[5] + 21);
  if ( (v27 & 0xFFFF2FFF) == 0 )
    goto LABEL_54;
  if ( (v4 & 0x80000000) != 0LL )
    goto LABEL_42;
  v28 = *(_QWORD *)(W32GetUserSessionState(v27, v8) + 19872);
  v29 = *((unsigned __int16 *)a1[5] + 21);
  if ( (int)v4 >= *(unsigned __int16 *)(v28 + 2LL * ((v29 & 0xFFFF2FFF) - 666) + 328)
                - *(unsigned __int16 *)(W32GetUserSessionState(v31, v30) + 71180) )
    goto LABEL_54;
  v32 = a1[5];
  if ( (*((_WORD *)v32 + 21) & 0x2FFF) != 0x2A1 )
  {
    if ( (*((_WORD *)v32 + 21) & 0x2FFF) != 0x2A7 )
      goto LABEL_42;
    v33 = (v4 & 0x80000000) != 0LL;
    if ( (_DWORD)v4 )
      goto LABEL_42;
    goto LABEL_55;
  }
  if ( (_DWORD)v4 )
    goto LABEL_42;
  v48 = *(_QWORD *)v32[37];
  if ( v48 && v48 != -1 )
  {
    v35 = (_DWORD *)(v48 + 8);
    if ( v48 + 8 >= MmUserProbeAddress )
      v35 = (_DWORD *)MmUserProbeAddress;
    v47 = *v35;
    *(_DWORD *)(v48 + 8) = a3;
    v36 = v47;
LABEL_69:
    if ( v6 )
      KeDetachProcess();
    return v36;
  }
  if ( v6 )
    KeDetachProcess();
  return 0LL;
}
