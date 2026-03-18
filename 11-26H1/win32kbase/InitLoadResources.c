/*
 * XREFs of InitLoadResources @ 0x140080CE4
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     GetCursorSizeFromDpi @ 0x140080CA0 (GetCursorSizeFromDpi.c)
 *     SetDpiDepSysMet @ 0x140081180 (SetDpiDepSysMet.c)
 *     EngMulDiv @ 0x140081830 (EngMulDiv.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ClearLogicalCursorPos @ 0x1401C4B10 (ClearLogicalCursorPos.c)
 */

__int64 __fastcall InitLoadResources(int a1, __int64 a2, int a3)
{
  int v4; // edx
  bool v5; // bl
  bool v6; // di
  __int64 v7; // rcx
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rax
  unsigned int CursorSizeFromDpi; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // edx
  int v25; // r8d
  __int64 v26; // rcx
  int v27; // edx
  int v28; // r8d
  __int64 v29; // kr00_8
  int v30; // ecx
  int v31; // r8d
  __int64 v32; // rcx
  int v33; // edx
  int v34; // r8d
  __int64 v35; // kr08_8
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rcx
  int v39; // edx
  int v40; // r8d
  __int64 v41; // rcx
  INT v42; // ebx
  int v43; // edx
  int v44; // r8d
  __int64 v45; // rax
  unsigned int v46; // eax
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // rcx
  INT v51; // ebx
  int v52; // edx
  int v53; // r8d
  __int64 v54; // rax
  unsigned int v55; // eax
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  __int64 v59; // rcx
  INT v60; // ebx
  int v61; // edx
  int v62; // r8d
  __int64 v63; // rax
  unsigned int v64; // eax
  int v65; // edx
  int v66; // ecx
  int v67; // r8d
  __int64 v68; // rcx
  INT v69; // ebx
  int v70; // edx
  int v71; // r8d
  __int64 v72; // rax
  unsigned int v73; // eax
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  __int64 v77; // rcx
  int v78; // edx
  int v79; // r8d
  __int64 v80; // rcx
  int v81; // edx
  int v82; // r8d
  __int64 v83; // rcx
  int v84; // edx
  int v85; // r8d
  __int64 v86; // rcx
  int v87; // edx
  int v88; // r8d
  __int64 v89; // rcx
  int v90; // edx
  int v91; // r8d
  __int64 v92; // rcx
  int v93; // edx
  int v94; // r8d
  __int64 result; // rax
  int v96; // edx
  int v97; // r8d
  __int64 v98; // rcx
  __int64 UserSessionState; // rax
  int v100; // r8d
  int v101; // edx
  int v102; // edx
  int v103; // ecx
  int v104; // r8d
  __int64 v105; // rcx
  __m128i v106; // xmm6
  int v107; // ebx
  int v108; // r8d
  __int64 v109; // rcx
  int v110; // eax
  int v111; // r8d

  v4 = (int)WPP_GLOBAL_Control;
  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v100) = v6;
    LOBYTE(v101) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v101,
      v100,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      14,
      22,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
  }
  v7 = *(_QWORD *)(W32GetUserSessionState(a1, v4, a3) + 19904);
  *(_DWORD *)(v7 + 2432) = 32;
  v10 = *(_QWORD *)(W32GetUserSessionState(v7, v8, v9) + 19904);
  *(_DWORD *)(v10 + 2436) = 32;
  v13 = W32GetUserSessionState(v10, v11, v12);
  CursorSizeFromDpi = GetCursorSizeFromDpi(*(unsigned __int16 *)(*(_QWORD *)(v13 + 19904) + 6998LL));
  SetDpiDepSysMet(7LL, CursorSizeFromDpi);
  v18 = W32GetUserSessionState(v16, v15, v17);
  v19 = GetCursorSizeFromDpi(*(unsigned __int16 *)(*(_QWORD *)(v18 + 19904) + 6998LL));
  SetDpiDepSysMet(8LL, v19);
  v23 = *(_QWORD *)(W32GetUserSessionState(v21, v20, v22) + 19904);
  *(_DWORD *)(v23 + 2424) = 32;
  v26 = *(_QWORD *)(W32GetUserSessionState(v23, v24, v25) + 19904);
  *(_DWORD *)(v26 + 2428) = 32;
  v29 = *(int *)(*(_QWORD *)(W32GetUserSessionState(v26, v27, v28) + 19904) + 2424LL);
  v32 = *(_QWORD *)(W32GetUserSessionState(v30, v29 % 2, v31) + 19904);
  *(_DWORD *)(v32 + 2484) = v29 / 2;
  v35 = *(int *)(*(_QWORD *)(W32GetUserSessionState(v32, v33, v34) + 19904) + 2428LL);
  v38 = *(_QWORD *)(W32GetUserSessionState(v36, v35 % 2, v37) + 19904);
  *(_DWORD *)(v38 + 2488) = v35 / 2;
  v41 = *(_QWORD *)(W32GetUserSessionState(v38, v39, v40) + 19904);
  v42 = *(unsigned __int16 *)(v41 + 6998);
  v45 = W32GetUserSessionState(v41, v43, v44);
  v46 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v45 + 19904) + 2424LL), v42, 96);
  SetDpiDepSysMet(5LL, v46);
  v50 = *(_QWORD *)(W32GetUserSessionState(v48, v47, v49) + 19904);
  v51 = *(unsigned __int16 *)(v50 + 6998);
  v54 = W32GetUserSessionState(v50, v52, v53);
  v55 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v54 + 19904) + 2428LL), v51, 96);
  SetDpiDepSysMet(6LL, v55);
  v59 = *(_QWORD *)(W32GetUserSessionState(v57, v56, v58) + 19904);
  v60 = *(unsigned __int16 *)(v59 + 6998);
  v63 = W32GetUserSessionState(v59, v61, v62);
  v64 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v63 + 19904) + 2484LL), v60, 96);
  SetDpiDepSysMet(20LL, v64);
  v68 = *(_QWORD *)(W32GetUserSessionState(v66, v65, v67) + 19904);
  v69 = *(unsigned __int16 *)(v68 + 6998);
  v72 = W32GetUserSessionState(v68, v70, v71);
  v73 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v72 + 19904) + 2488LL), v69, 96);
  SetDpiDepSysMet(21LL, v73);
  v77 = *(_QWORD *)(W32GetUserSessionState(v75, v74, v76) + 19904);
  *(_DWORD *)(v77 + 1968) = 0;
  v80 = *(_QWORD *)(W32GetUserSessionState(v77, v78, v79) + 19904);
  *(_DWORD *)(v80 + 1916) = 1;
  v83 = *(_QWORD *)(W32GetUserSessionState(v80, v81, v82) + 19904);
  *(_DWORD *)(v83 + 1920) = 1;
  v86 = *(_QWORD *)(W32GetUserSessionState(v83, v84, v85) + 19904);
  *(_DWORD *)(v86 + 2076) = 2;
  v89 = *(_QWORD *)(W32GetUserSessionState(v86, v87, v88) + 19904);
  *(_DWORD *)(v89 + 2080) = 2;
  v92 = *(_QWORD *)(W32GetUserSessionState(v89, v90, v91) + 19904);
  *(_DWORD *)(v92 + 1924) = 3;
  result = W32GetUserSessionState(v92, v93, v94);
  v98 = *(_QWORD *)(result + 19904);
  *(_DWORD *)(v98 + 1928) = 3;
  if ( !a1 )
  {
    if ( !*(_DWORD *)(W32GetUserSessionState(v98, v96, v97) + 68604)
      || (result = W32GetUserSessionState(v103, v102, v104), *(_DWORD *)(result + 68612)) )
    {
      v105 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v103, v102, v104) + 56968) + 96LL) + 40LL);
      v106 = *(__m128i *)(v105 + 28);
      v107 = *(_DWORD *)(v105 + 36) / 2;
      v109 = *(_QWORD *)(W32GetUserSessionState(v105, *(_DWORD *)(v105 + 36) % 2, v108) + 19904);
      v110 = _mm_cvtsi128_si32(_mm_srli_si128(v106, 12));
      *(_DWORD *)(v109 + 4960) = v107;
      *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v109, v110 % 2, v111) + 19904) + 4964LL) = v110 / 2;
      return ClearLogicalCursorPos();
    }
  }
  return result;
}
