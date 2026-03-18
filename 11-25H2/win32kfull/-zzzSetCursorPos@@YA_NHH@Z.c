/*
 * XREFs of ?zzzSetCursorPos@@YA_NHH@Z @ 0x14005F190
 * Callers:
 *     NtUserSetCursorPos @ 0x14005EFD0 (NtUserSetCursorPos.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x14005FD1C (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CheckWinstaAttributeAccess @ 0x14005FF00 (CheckWinstaAttributeAccess.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1400601D8 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z @ 0x140060AEC (-IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z.c)
 *     ?MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z @ 0x140060B5C (-MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

char __fastcall zzzSetCursorPos(unsigned int a1, unsigned int a2)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  bool v8; // bp
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __m128i v15; // xmm6
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  bool v44; // bl
  int v45; // edx
  int v46; // r8d
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rdx
  bool v50; // bl
  bool v51; // di
  __int64 UserSessionState; // rax
  int v53; // r8d
  int v54; // edx
  __int16 v55; // [rsp+30h] [rbp-28h]

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    && !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)CurrentLogicalCursorThread + 58)) )
  {
    v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v47 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5) + 69160);
    v55 = 10;
LABEL_32:
    LOBYTE(v46) = v44;
    LOBYTE(v45) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v45,
      v46,
      v47,
      2,
      20,
      v55,
      (__int64)&WPP_f93bdd16b13e3c8824b271942f24a217_Traceguids);
    return 0;
  }
  if ( *((_QWORD *)CurrentLogicalCursorThread + 62)
    && *((_QWORD *)CurrentLogicalCursorThread + 62) != *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19144) )
  {
    v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v47 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7) + 69160);
    v55 = 11;
    goto LABEL_32;
  }
  v8 = 1;
  if ( !(unsigned int)IsGpqForegroundAccessibleForPti(CurrentLogicalCursorThread, 1) )
  {
    MSGLUA_GPQFOREGROUNDPTI(CurrentLogicalCursorThread);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v8 = 0;
    }
    v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v47 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v48) + 69160);
    v55 = 12;
    goto LABEL_32;
  }
  v11 = PtiCurrent(v10, v9);
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(v11) )
  {
    SaveCursorPosition(__PAIR64__(a2, a1));
    v50 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v51 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v50 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v49);
      LOBYTE(v53) = v51;
      LOBYTE(v54) = v50;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v54,
        v53,
        *(_QWORD *)(UserSessionState + 69160),
        2,
        20,
        13,
        (__int64)&WPP_f93bdd16b13e3c8824b271942f24a217_Traceguids);
    }
  }
  else
  {
    zzzInternalSetCursorPos(a1, a2, 1LL, 0LL);
    v14 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 56968);
    v15 = *(__m128i *)(*(_QWORD *)v14 + 24LL);
    v17 = W32GetUserSessionState(v14, v16);
    v18 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
    v19 = *(unsigned __int16 *)(v17 + 19184);
    LOWORD(v18) = v18 - _mm_cvtsi128_si32(v15) - 1;
    v20 = v19 | ((unsigned __int16)v18 << 16);
    v21 = W32GetUserSessionState(v19, v18);
    v24 = 3LL * *(unsigned int *)(W32GetUserSessionState(v23, v22) + 14724);
    v25 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v15, 12));
    *(_DWORD *)(v21 + 8 * v24 + 14728) = v20;
    LOWORD(v25) = v25 - _mm_cvtsi128_si32(_mm_srli_si128(v15, 4)) - 1;
    v26 = *(unsigned __int16 *)(v17 + 19188) | ((unsigned __int16)v25 << 16);
    v27 = W32GetUserSessionState(v25, v24);
    v30 = 3LL * *(unsigned int *)(W32GetUserSessionState(v29, v28) + 14724);
    *(_DWORD *)(v27 + 8 * v30 + 14732) = v26;
    v31 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v32 = W32GetUserSessionState(0xFFFFF78000000004uLL, v30);
    v35 = 3 * (*(unsigned int *)(W32GetUserSessionState(v34, v33) + 14724) + 614LL);
    *(_DWORD *)(v32 + 8 * v35) = v31;
    v37 = W32GetUserSessionState(v35, v36);
    v40 = *(unsigned int *)(W32GetUserSessionState(v39, v38) + 14724);
    *(_QWORD *)(v37 + 24 * v40 + 14744) = 0LL;
    LODWORD(v37) = ((unsigned __int8)*(_DWORD *)(W32GetUserSessionState(v40, 3 * v40) + 14724) + 1) & 0x3F;
    *(_DWORD *)(W32GetUserSessionState(v42, v41) + 14724) = v37;
  }
  return 1;
}
