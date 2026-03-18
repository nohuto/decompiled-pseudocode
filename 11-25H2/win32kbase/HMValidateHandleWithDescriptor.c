/*
 * XREFs of HMValidateHandleWithDescriptor @ 0x1400A1BA0
 * Callers:
 *     ValidateHmenu @ 0x1400A1B40 (ValidateHmenu.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1401048D0 (NtMITSynthesizeKeyboardInput.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x14011E6FC (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1401BD4C0 (NtUserGetExtendedPointerDeviceProperty.c)
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ValidateHandleSecure @ 0x1400A1F30 (ValidateHandleSecure.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1400A21E4 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMSDCheck @ 0x1400E3ED0 (HMSDCheck.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 *     ?IsHandleILCheckDisabled@tagTHREADINFO@@QEBA_NXZ @ 0x1401AC164 (-IsHandleILCheckDisabled@tagTHREADINFO@@QEBA_NXZ.c)
 */

__int64 __fastcall HMValidateHandleWithDescriptor(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  int v3; // r12d
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // si
  char v20; // al
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // r14d
  __int64 v30; // rbx
  __int64 v31; // rdx
  tagTHREADINFO *v32; // rax
  int v33; // eax
  int v35; // ecx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v37; // rdx
  __int16 v38; // ax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+60h] [rbp+8h]
  __int64 v43; // [rsp+78h] [rbp+20h]

  v3 = a2;
  v4 = 0LL;
  W32GetCurrentThreadNonPaged();
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(v9 + 8) )
    goto LABEL_23;
  UserSessionState = W32GetUserSessionState(v9, v8);
  v13 = *(_QWORD *)(UserSessionState + 19888)
      + *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19896) * (unsigned int)(unsigned __int16)a1;
  v16 = W32GetUserSessionState(v15, v14);
  v17 = *(_QWORD *)(v16 + 19832);
  v43 = v17;
  v18 = 5LL * (unsigned int)((v13 - *(_QWORD *)(v16 + 19888)) >> 5);
  v19 = WORD1(a1) & 0x7FFF;
  v41 = v18;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v13 + 26) && v19 != 0x7FFF )
  {
    if ( v19 || !PsGetCurrentProcessWow64Process() )
      goto LABEL_23;
    v18 = v41;
    v17 = v43;
  }
  v20 = *(_BYTE *)(v13 + 25);
  if ( (v20 & 1) == 0 && *(_BYTE *)(v13 + 24) == (_BYTE)v3 )
  {
    v4 = *(_QWORD *)(v17 + 8 * v18);
    if ( (v20 & 4) != 0 )
    {
      LOBYTE(v18) = v3;
      v4 &= -(__int64)((unsigned int)HMSDCheck(a1, v18, a3) != 0);
    }
  }
  if ( (*(_BYTE *)(v13 + 25) & 4) != 0 )
    goto LABEL_19;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
    v23 = *CurrentThreadNonPaged;
  else
    v23 = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v23 + 528), 0, 0) & 0x20000000) != 0 )
  {
    v33 = ValidateHandleSecure(a1, 3LL);
  }
  else
  {
    v25 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 19872);
    if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(v25 + 8) )
      goto LABEL_17;
    v26 = W32GetUserSessionState(v25, v24);
    v29 = *(_DWORD *)(W32GetUserSessionState(v28, v27) + 19896) * (unsigned __int16)a1;
    v30 = v29 + *(_QWORD *)(v26 + 19888);
    W32GetUserSessionState(v29, v31);
    if ( v19 != *(_WORD *)(v30 + 26) && v19 != 0x7FFF && (v19 || !PsGetCurrentProcessWow64Process()) )
      goto LABEL_17;
    if ( !*(_BYTE *)(v30 + 24) )
      goto LABEL_17;
    v32 = PtiCurrent();
    if ( tagTHREADINFO::IsHandleILCheckDisabled(v32) )
      goto LABEL_18;
    v33 = IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v30);
  }
  if ( !v33 )
LABEL_17:
    v4 = 0LL;
LABEL_18:
  if ( *(char *)(v13 + 25) < 0 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v25);
    v37 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *CurrentProcessWin32Process )
      {
        v38 = *((_WORD *)&unk_14024703C + 12 * *(unsigned __int8 *)(v13 + 24));
        if ( (v38 & 2) != 0 )
        {
          v39 = *(_QWORD **)(v43 + 8 * v41 + 8);
LABEL_50:
          if ( v39 && v39 != v37 )
            goto LABEL_23;
          goto LABEL_19;
        }
        if ( (v38 & 1) != 0 )
        {
          v40 = *(_QWORD *)(v43 + 8 * v41 + 8);
          if ( v40 )
          {
            v39 = *(_QWORD **)(v40 + 464);
            goto LABEL_50;
          }
        }
      }
    }
  }
LABEL_19:
  if ( v4 )
    return v4;
LABEL_23:
  switch ( v3 )
  {
    case 1:
      v35 = 1400;
      break;
    case 2:
      v35 = 1401;
      break;
    case 3:
      v35 = 1402;
      break;
    case 4:
      v35 = 1405;
      break;
    case 5:
      v35 = 1404;
      break;
    case 8:
      v35 = 1403;
      break;
    default:
      v35 = 6;
      break;
  }
  UserSetLastError(v35);
  return 0LL;
}
