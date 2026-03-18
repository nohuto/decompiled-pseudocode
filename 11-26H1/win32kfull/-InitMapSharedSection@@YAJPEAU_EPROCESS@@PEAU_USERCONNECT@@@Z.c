/*
 * XREFs of ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x14018FD54
 * Callers:
 *     NtUserProcessConnect @ 0x140190320 (NtUserProcessConnect.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall InitMapSharedSection(struct _EPROCESS *a1, struct _USERCONNECT *a2)
{
  bool v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  _QWORD *ProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rdx
  struct MOVESIZEDATA *v15; // rcx
  bool v16; // si
  bool v17; // r14
  char v18; // bl
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rsi
  char *v52; // rdi
  __int64 v53; // r14
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r12
  int v57; // ecx
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD v67[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v68; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v69; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v70; // [rsp+B8h] [rbp+58h] BYREF

  v69 = 0LL;
  v68 = 0LL;
  v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      14,
      (__int64)&WPP_9b0ffd12fc44339632c358433cbe781e_Traceguids);
  }
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process && *ProcessWin32Process && ProcessWin32Process[91] )
  {
    v65 = PsGetProcessWin32Process(a1);
    if ( v65 )
      v65 &= -(__int64)(*(_QWORD *)v65 != 0LL);
    v69 = *(_QWORD *)(v65 + 728);
    v66 = PsGetProcessWin32Process(a1);
    if ( v66 )
    {
      v64 = -*(_QWORD *)v66;
      v63 = -(__int64)(*(_QWORD *)v66 != 0LL);
      v66 &= v63;
    }
    v68 = *(_QWORD *)(v66 + 736);
  }
  else
  {
    v70 = 0x200000LL;
    v67[0] = 0LL;
    v12 = W32GetUserSessionState(v11, v10);
    result = ((__int64 (__fastcall *)(_QWORD, struct _EPROCESS *, __int64 *, _QWORD, _QWORD, _QWORD *, __int64 *, int, int, int))MmMapViewOfSection)(
               *(_QWORD *)(v12 + 19872),
               a1,
               &v69,
               0LL,
               0LL,
               v67,
               &v70,
               2,
               0x400000,
               2);
    if ( (int)result < 0 )
      return result;
    v15 = WPP_GLOBAL_Control;
    v16 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = v69;
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      LOBYTE(v20) = v17;
      LOBYTE(v21) = v16;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(v19 + 69152),
        4,
        3,
        15,
        (__int64)&WPP_9b0ffd12fc44339632c358433cbe781e_Traceguids,
        v18);
    }
    v70 = 0LL;
    v67[0] = 2101248LL;
    v22 = W32GetUserSessionState(v15, v14);
    v23 = ((__int64 (__fastcall *)(_QWORD, struct _EPROCESS *, __int64 *, _QWORD, _QWORD, _QWORD *, __int64 *, int, int, int))MmMapViewOfSection)(
            *(_QWORD *)(v22 + 19872),
            a1,
            &v68,
            0LL,
            0LL,
            v67,
            &v70,
            2,
            0x400000,
            2);
    if ( v23 < 0 )
    {
      MmUnmapViewOfSection(a1, v69);
      return (unsigned int)v23;
    }
    v62 = (_QWORD *)PsGetProcessWin32Process(a1);
    if ( v62 && *v62 )
    {
      v62[91] = v69;
      v64 = v68;
      v62[92] = v68;
    }
  }
  *((_QWORD *)a2 + 5) = v68;
  v24 = W32GetUserSessionState(v64, v63);
  v27 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 19896);
  *((_QWORD *)a2 + 1) = v68 + *(_QWORD *)(v24 + 19912) - v27;
  v29 = W32GetUserSessionState(v27, v28);
  v32 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19888);
  *((_QWORD *)a2 + 2) = v69 + *(_QWORD *)(v29 + 19920) - v32;
  v34 = W32GetUserSessionState(v32, v33);
  v35 = v34 + 19912;
  *((_DWORD *)a2 + 6) = *(_DWORD *)(v34 + 19928);
  v38 = W32GetUserSessionState(v37, v36);
  v41 = *(_QWORD *)(W32GetUserSessionState(v40, v39) + 19896);
  *((_QWORD *)a2 + 4) = v68 + *(_QWORD *)(v38 + 19936) - v41;
  *((_DWORD *)a2 + 136) = *(_DWORD *)(v35 + 536);
  v43 = W32GetUserSessionState(v41, v42);
  v46 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 19896);
  *((_QWORD *)a2 + 69) = v68 + *(_QWORD *)(v43 + 20456) - v46;
  *((_DWORD *)a2 + 140) = *(_DWORD *)(v35 + 552);
  v48 = W32GetUserSessionState(v46, v47);
  v51 = v35 - (_QWORD)a2;
  v52 = (char *)a2 + 48;
  v53 = 31LL;
  v55 = *(_QWORD *)(W32GetUserSessionState(v50, v49) + 19896);
  *((_QWORD *)a2 + 71) = v68 + *(_QWORD *)(v48 + 20472) - v55;
  v56 = 192LL - (_QWORD)a2;
  do
  {
    *(_DWORD *)v52 = *(_DWORD *)&v52[v51 - 8];
    if ( *(_QWORD *)&v52[v51] )
    {
      v58 = W32GetUserSessionState(v55, v54);
      v61 = W32GetUserSessionState(v60, v59);
      v55 = v58 + v56;
      v54 = v68 + *(_QWORD *)&v52[v58 + 19720 + v56] - *(_QWORD *)(v61 + 19896);
    }
    else
    {
      v54 = 0LL;
    }
    *((_QWORD *)v52 + 1) = v54;
    v52 += 16;
    --v53;
  }
  while ( v53 );
  v57 = *(_DWORD *)(W32GetUserSessionState(v55, v54) + 71160);
  result = 0LL;
  *((_DWORD *)a2 + 144) = v57;
  return result;
}
