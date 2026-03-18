/*
 * XREFs of ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D27A4
 * Callers:
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402D12FC (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     ?xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D2F90 (-xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRA.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014D338 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014EE58 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ScaleDPIRect @ 0x140159C30 (ScaleDPIRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z @ 0x1402CC850 (-SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z.c)
 *     ?NormalizeArrangeRect@AdvancedWindowPos@@YA?AUtagRECT@@AEBU2@00@Z @ 0x1402D4EDC (-NormalizeArrangeRect@AdvancedWindowPos@@YA-AUtagRECT@@AEBU2@00@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

bool __fastcall xxxMigrateArrangedRect(
        struct tagRECT *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        unsigned __int16 a5,
        int a6,
        struct tagRECT *a7,
        int *a8,
        int *a9,
        _DWORD *a10)
{
  bool v11; // bl
  bool v12; // di
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  struct tagRECT v16; // xmm1
  int *v17; // rdi
  __int64 *v18; // rbx
  __int64 v19; // rdx
  int v20; // eax
  bool v21; // r12
  LONG v22; // edi
  LONG v23; // r14d
  LONG v24; // ebx
  LONG v25; // esi
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // di
  bool v30; // si
  const char *v31; // rbx
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  bool result; // al
  struct tagRECT *v36; // rdi
  struct tagRECT v37; // xmm0
  __int64 v38; // rax
  unsigned __int16 v39; // r9
  __int64 v40; // rdx
  bool v41; // r12
  LONG bottom; // edi
  LONG top; // r14d
  LONG right; // ebx
  LONG left; // esi
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  LONG v49; // edx
  LONG v50; // r8d
  LONG v51; // ecx
  int v52; // ecx
  struct tagRECT *v53; // [rsp+20h] [rbp-B1h]
  bool v54; // [rsp+70h] [rbp-61h]
  bool v55; // [rsp+70h] [rbp-61h]
  int v56; // [rsp+74h] [rbp-5Dh] BYREF
  int v57; // [rsp+78h] [rbp-59h] BYREF
  int *v58; // [rsp+80h] [rbp-51h]
  struct tagRECT *v59; // [rsp+88h] [rbp-49h]
  __int64 v60; // [rsp+90h] [rbp-41h]
  __int64 *v61; // [rsp+98h] [rbp-39h]
  struct tagRECT v62; // [rsp+A0h] [rbp-31h] BYREF
  __m128i v63; // [rsp+B0h] [rbp-21h] BYREF

  v58 = a8;
  v61 = a3;
  v60 = a2;
  v59 = a1;
  v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      4,
      64,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
  }
  v16 = *a7;
  v17 = v58;
  v18 = v61;
  v56 = *v58;
  v57 = *a9;
  v63 = 0LL;
  v62 = v16;
  if ( !CallShell::xxxMigrateWindowHandler(v59, a6, v61, a4, a5, (struct tagWND *)&v62, v60, &v63, &v56, &v57) )
  {
    v36 = v59;
    v37 = *WindowMargins::ReduceRect((WindowMargins *)&v62, v59, (const struct tagWND *)a7, (const struct tagRECT *)a5);
    v38 = *(_QWORD *)&v36[2].right;
    *a7 = v37;
    v39 = (*(_DWORD *)(v38 + 288) >> 8) & 0x1FF;
    if ( v39 )
      ScaleDPIRect(a7, (__m128i *)a7, a5, v39, *a4, *v18);
    *a7 = *AdvancedWindowPos::NormalizeArrangeRect(
             (AdvancedWindowPos *)&v62,
             a7,
             (const struct tagRECT *)a4,
             (const struct tagRECT *)(*(_QWORD *)(v60 + 40) + 44LL),
             v53);
    v41 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v41 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      bottom = a7->bottom;
      top = a7->top;
      right = a7->right;
      left = a7->left;
      v46 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v40);
      LOBYTE(v47) = v55;
      LOBYTE(v48) = v41;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v48,
        v47,
        *(_QWORD *)(v46 + 69160),
        4,
        4,
        67,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
        left,
        top,
        right,
        bottom,
        right - left,
        bottom - top);
    }
    goto LABEL_43;
  }
  *a9 = v57;
  v20 = v56;
  *v17 = v56;
  if ( v20 != 3 )
  {
    v29 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v31 = "maximized";
      if ( v56 != 1 )
        v31 = "restored";
      v32 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
      LOBYTE(v33) = v30;
      LOBYTE(v34) = v29;
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v34,
        v33,
        *(_QWORD *)(v32 + 69160),
        4,
        4,
        66,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
        (__int64)v31);
    }
    goto LABEL_29;
  }
  *a7 = (struct tagRECT)v63;
  v21 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v54 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v22 = a7->bottom;
    v23 = a7->top;
    v24 = a7->right;
    v25 = a7->left;
    v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
    LOBYTE(v27) = v54;
    LOBYTE(v28) = v21;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v28,
      v27,
      *(_QWORD *)(v26 + 69160),
      4,
      4,
      65,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v25,
      v23,
      v24,
      v22,
      v24 - v25,
      v22 - v23);
LABEL_29:
    v17 = v58;
  }
  if ( a6 != 2 )
  {
    result = SaveShellRequestedOperationData((struct tagWND *)v59, (__int128 *)&a7->left, *v17, v57);
    if ( !result )
      return result;
    *a10 |= 0x400u;
  }
LABEL_43:
  if ( v56 == 3 )
  {
    v49 = a7->left;
    v50 = a7->top;
    v51 = a7->right;
    *a10 |= 6u;
    a10[5] = v51 - v49;
    v52 = a7->bottom - v50;
    a10[3] = v49;
    a10[1] |= 1u;
    a10[6] = v52;
    a10[4] = v50;
  }
  return 1;
}
