/*
 * XREFs of InitLoadResources @ 0x14011FE88
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EngMulDiv @ 0x1400623C0 (EngMulDiv.c)
 *     GetCursorSizeFromDpi @ 0x140120324 (GetCursorSizeFromDpi.c)
 *     SetDpiDepSysMet @ 0x140120370 (SetDpiDepSysMet.c)
 *     ClearLogicalCursorPos @ 0x140215FA0 (ClearLogicalCursorPos.c)
 */

__int64 __fastcall InitLoadResources(__int64 a1)
{
  int v1; // esi
  void *v2; // rdx
  bool v3; // bl
  bool v4; // di
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int CursorSizeFromDpi; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // kr00_8
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // kr08_8
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  INT v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  INT v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  INT v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  INT v53; // ebx
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 result; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 UserSessionState; // rax
  int v75; // r8d
  int v76; // edx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rcx
  __m128i v80; // xmm6
  __int64 v81; // rdx
  int v82; // ebx
  __int64 v83; // rcx
  int v84; // eax
  __int64 v85; // rdx

  v1 = a1;
  v2 = WPP_GLOBAL_Control;
  v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v75) = v4;
    LOBYTE(v76) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v76,
      v75,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      22,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
  }
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, v2) + 19872);
  *(_DWORD *)(v5 + 2432) = 32;
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v6) + 19872);
  *(_DWORD *)(v7 + 2436) = 32;
  v9 = W32GetUserSessionState(v7, v8);
  CursorSizeFromDpi = GetCursorSizeFromDpi(*(unsigned __int16 *)(*(_QWORD *)(v9 + 19872) + 6998LL));
  SetDpiDepSysMet(7LL, CursorSizeFromDpi);
  v13 = W32GetUserSessionState(v12, v11);
  v14 = GetCursorSizeFromDpi(*(unsigned __int16 *)(*(_QWORD *)(v13 + 19872) + 6998LL));
  SetDpiDepSysMet(8LL, v14);
  v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19872);
  *(_DWORD *)(v17 + 2424) = 32;
  v19 = *(_QWORD *)(W32GetUserSessionState(v17, v18) + 19872);
  *(_DWORD *)(v19 + 2428) = 32;
  v22 = *(int *)(*(_QWORD *)(W32GetUserSessionState(v19, v20) + 19872) + 2424LL);
  v21 = HIDWORD(v22);
  LODWORD(v21) = v22 % 2;
  v24 = *(_QWORD *)(W32GetUserSessionState(v23, v21) + 19872);
  *(_DWORD *)(v24 + 2484) = v22 / 2;
  v27 = *(int *)(*(_QWORD *)(W32GetUserSessionState(v24, v25) + 19872) + 2428LL);
  v26 = HIDWORD(v27);
  LODWORD(v26) = v27 % 2;
  v29 = *(_QWORD *)(W32GetUserSessionState(v28, v26) + 19872);
  *(_DWORD *)(v29 + 2488) = v27 / 2;
  v31 = *(_QWORD *)(W32GetUserSessionState(v29, v30) + 19872);
  v32 = *(unsigned __int16 *)(v31 + 6998);
  v34 = W32GetUserSessionState(v31, v33);
  v35 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v34 + 19872) + 2424LL), v32, 96);
  SetDpiDepSysMet(5LL, v35);
  v38 = *(_QWORD *)(W32GetUserSessionState(v37, v36) + 19872);
  v39 = *(unsigned __int16 *)(v38 + 6998);
  v41 = W32GetUserSessionState(v38, v40);
  v42 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v41 + 19872) + 2428LL), v39, 96);
  SetDpiDepSysMet(6LL, v42);
  v45 = *(_QWORD *)(W32GetUserSessionState(v44, v43) + 19872);
  v46 = *(unsigned __int16 *)(v45 + 6998);
  v48 = W32GetUserSessionState(v45, v47);
  v49 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v48 + 19872) + 2484LL), v46, 96);
  SetDpiDepSysMet(20LL, v49);
  v52 = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 19872);
  v53 = *(unsigned __int16 *)(v52 + 6998);
  v55 = W32GetUserSessionState(v52, v54);
  v56 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v55 + 19872) + 2488LL), v53, 96);
  SetDpiDepSysMet(21LL, v56);
  v59 = *(_QWORD *)(W32GetUserSessionState(v58, v57) + 19872);
  *(_DWORD *)(v59 + 1968) = 0;
  v61 = *(_QWORD *)(W32GetUserSessionState(v59, v60) + 19872);
  *(_DWORD *)(v61 + 1916) = 1;
  v63 = *(_QWORD *)(W32GetUserSessionState(v61, v62) + 19872);
  *(_DWORD *)(v63 + 1920) = 1;
  v65 = *(_QWORD *)(W32GetUserSessionState(v63, v64) + 19872);
  *(_DWORD *)(v65 + 2076) = 2;
  v67 = *(_QWORD *)(W32GetUserSessionState(v65, v66) + 19872);
  *(_DWORD *)(v67 + 2080) = 2;
  v69 = *(_QWORD *)(W32GetUserSessionState(v67, v68) + 19872);
  *(_DWORD *)(v69 + 1924) = 3;
  result = W32GetUserSessionState(v69, v70);
  v73 = *(_QWORD *)(result + 19872);
  *(_DWORD *)(v73 + 1928) = 3;
  if ( !v1 )
  {
    if ( !*(_DWORD *)(W32GetUserSessionState(v73, v72) + 68612)
      || (result = W32GetUserSessionState(v78, v77), *(_DWORD *)(result + 68620)) )
    {
      v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v78, v77) + 56968) + 104LL) + 40LL);
      v80 = *(__m128i *)(v79 + 28);
      v81 = (unsigned int)(*(int *)(v79 + 36) >> 31);
      LODWORD(v81) = *(_DWORD *)(v79 + 36) % 2;
      v82 = *(_DWORD *)(v79 + 36) / 2;
      v83 = *(_QWORD *)(W32GetUserSessionState(v79, v81) + 19872);
      v84 = _mm_cvtsi128_si32(_mm_srli_si128(v80, 12));
      v85 = (unsigned int)(v84 >> 31);
      *(_DWORD *)(v83 + 4960) = v82;
      LODWORD(v85) = v84 % 2;
      *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v83, v85) + 19872) + 4964LL) = v84 / 2;
      return ClearLogicalCursorPos();
    }
  }
  return result;
}
