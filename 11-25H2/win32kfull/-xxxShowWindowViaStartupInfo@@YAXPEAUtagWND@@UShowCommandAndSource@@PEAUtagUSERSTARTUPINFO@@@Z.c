/*
 * XREFs of ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x140229FA4
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1401A48DC (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

unsigned int *__fastcall xxxShowWindowViaStartupInfo(unsigned int *a1, __int64 a2, _DWORD *a3)
{
  char v6; // si
  bool v7; // bp
  bool v8; // r14
  char v9; // bl
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // bp
  bool v14; // r14
  int v15; // ebx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // r9
  const char *v20; // rax
  bool v21; // bl
  bool v22; // bp
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // edx
  int v27; // ecx
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v28; // r8
  bool v29; // zf
  int v30; // eax
  __int64 v31; // rdx
  unsigned int *result; // rax
  bool v33; // bl
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v37; // [rsp+50h] [rbp-58h] BYREF
  BOOL v38; // [rsp+58h] [rbp-50h]
  int v39; // [rsp+5Ch] [rbp-4Ch]
  int v40; // [rsp+60h] [rbp-48h]
  int v41; // [rsp+64h] [rbp-44h]
  int v42; // [rsp+68h] [rbp-40h]
  int v43; // [rsp+6Ch] [rbp-3Ch]
  int v44; // [rsp+70h] [rbp-38h]

  v6 = 1;
  v7 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = *(_BYTE *)(a2 + 4);
    UserSessionState = W32GetUserSessionState(a1, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v11) = v8;
    LOBYTE(v12) = v7;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      12,
      17,
      (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
      (char)a1,
      v9);
  }
  v13 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = a3[5];
    v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v17) = v14;
    LOBYTE(v18) = v13;
    v19 = *(_QWORD *)(v16 + 69160);
    v20 = "still contains";
    if ( (v15 & 7) == 0 )
      v20 = "does not have";
    WPP_RECORDER_AND_TRACE_SF_qs(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v18,
      v17,
      v19,
      4,
      12,
      18,
      (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
      (char)a1,
      (__int64)v20);
  }
  a3[5] &= 0xFFFFFFF8;
  v21 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v24) = v22;
    LOBYTE(v25) = v21;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v25,
      v24,
      *(_QWORD *)(v23 + 69160),
      4,
      12,
      19,
      (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
      (char)a1);
  }
  v26 = a3[1];
  v27 = a3[3];
  v28 = (const struct AdvancedWindowPos::WINDOWPOSANDSTATE *)(unsigned int)a3[2];
  a3[5] &= ~0x20000u;
  v37 = 0LL;
  v29 = *(_BYTE *)(a2 + 4) == 3;
  v40 = v26;
  v41 = (int)v28;
  v38 = v29;
  v30 = 148;
  if ( !v29 )
    v30 = 144;
  v44 = 0;
  v39 = v30;
  v42 = v26 + v27;
  v43 = (_DWORD)v28 + a3[4];
  AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)a1, (struct tagWND *)&v37, v28);
  result = (unsigned int *)a1[95];
  if ( ((unsigned __int8)result & 2) == 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v6 = 0;
    }
    result = &WPP_RECORDER_INITIALIZED;
    v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v31);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v6;
      result = (unsigned int *)WPP_RECORDER_AND_TRACE_SF_q(
                                 *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                                 v36,
                                 v35,
                                 *(_QWORD *)(v34 + 69160),
                                 4,
                                 12,
                                 20,
                                 (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
                                 (char)a1);
    }
    a3[5] |= 0x20000u;
  }
  return result;
}
