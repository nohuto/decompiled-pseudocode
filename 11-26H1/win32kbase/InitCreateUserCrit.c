/*
 * XREFs of InitCreateUserCrit @ 0x1402F1D28
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     CreateKernelSemaphore @ 0x14005D890 (CreateKernelSemaphore.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?InitDomainLocks@@YAJXZ @ 0x140172DB8 (-InitDomainLocks@@YAJXZ.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x14018AA70 (-CleanupDomainLocks@@YAXXZ.c)
 *     ?INIT_CRIT_RESOURCE@@YAPEAU_FAST_ERESOURCE@@XZ @ 0x140194F4C (-INIT_CRIT_RESOURCE@@YAPEAU_FAST_ERESOURCE@@XZ.c)
 *     ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z @ 0x1401960FC (-CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1401C4F24 (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 */

__int64 __fastcall InitCreateUserCrit(__int64 a1, int a2, int a3)
{
  char v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  struct _FAST_ERESOURCE *v8; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  struct _FAST_ERESOURCE *v18; // rbx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  struct _FAST_ERESOURCE *v25; // rbx
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  __int64 Pool2; // rbx
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  __int64 v39; // rax
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  __int64 v43; // rbx
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // rcx
  int v51; // r8d
  char v52; // di
  _UNKNOWN **v53; // rdx
  bool v54; // si
  __int64 v55; // rbx
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  char v62; // di
  bool v63; // si
  __int64 v64; // rbx
  int v65; // edx
  int v66; // ecx
  int v67; // r8d
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  char v71; // di
  bool v72; // si
  __int64 v73; // rbx
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  __int64 v77; // rax
  int v78; // r8d
  int v79; // edx
  int v80; // ecx
  char v81; // di
  bool v82; // si
  __int64 v83; // rbx
  int v84; // edx
  int v85; // ecx
  int v86; // r8d
  __int64 v87; // rax
  int v88; // r8d
  int v89; // edx
  int v90; // edx
  int v91; // ecx
  int v92; // r8d
  int v93; // edx
  int v94; // ecx
  int v95; // r8d
  __int64 v96; // rbx
  struct _KSEMAPHORE *KernelSemaphore; // rax
  int v98; // edx
  int v99; // ecx
  int v100; // r8d
  __int64 v101; // rax
  __int64 v102; // rax
  int v103; // edx
  int v104; // ecx
  int v105; // r8d
  int v106; // edx
  int v107; // ecx
  int v108; // r8d
  __int64 v109; // rax
  int v110; // edx
  int v111; // ecx
  int v112; // r8d
  __int64 v113; // rax
  int v114; // edx
  int v115; // ecx
  int v116; // r8d
  struct _FAST_ERESOURCE **v117; // rax
  int v119; // edx
  int v120; // ecx
  int v121; // r8d
  int v122; // edx
  int v123; // r8d
  char v124; // bl
  bool v125; // di
  __int64 v126; // rax
  int v127; // r8d
  int v128; // edx

  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v3 = 0;
  }
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      14,
      14,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
  }
  v8 = INIT_CRIT_RESOURCE();
  *(_QWORD *)W32GetUserSessionState(v10, v9, v11) = v8;
  if ( !*(_QWORD *)W32GetUserSessionState(v13, v12, v14) )
    goto LABEL_47;
  v18 = INIT_CRIT_RESOURCE();
  *(_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 8) = v18;
  if ( !*(_QWORD *)(W32GetUserSessionState(v23, v22, v24) + 8) )
    goto LABEL_47;
  v25 = INIT_CRIT_RESOURCE();
  *(_QWORD *)(W32GetUserSessionState(v27, v26, v28) + 16) = v25;
  if ( !*(_QWORD *)(W32GetUserSessionState(v30, v29, v31) + 16) )
    goto LABEL_47;
  Pool2 = ExAllocatePool2(64LL, 104LL, 1919251285LL);
  *(_QWORD *)(W32GetUserSessionState(v34, v33, v35) + 18840) = Pool2;
  if ( !*(_QWORD *)(W32GetUserSessionState(v37, v36, v38) + 18840) )
    goto LABEL_47;
  v39 = W32GetUserSessionState(v16, v15, v17);
  if ( ExInitializeResourceLite(*(PERESOURCE *)(v39 + 18840)) < 0 )
    goto LABEL_49;
  v43 = ExAllocatePool2(64LL, 56LL, 1716220757LL);
  *(_QWORD *)(W32GetUserSessionState(v45, v44, v46) + 19840) = v43;
  if ( !*(_QWORD *)(W32GetUserSessionState(v48, v47, v49) + 19840) )
  {
LABEL_47:
    if ( !*(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 18840) )
    {
LABEL_50:
      if ( *(_QWORD *)(W32GetUserSessionState(v99, v98, v100) + 16) )
      {
        v109 = W32GetUserSessionState(v107, v106, v108);
        CLEANUP_CRIT_RESOURCE((struct _FAST_ERESOURCE **)(v109 + 16));
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v107, v106, v108) + 8) )
      {
        v113 = W32GetUserSessionState(v111, v110, v112);
        CLEANUP_CRIT_RESOURCE((struct _FAST_ERESOURCE **)(v113 + 8));
      }
      if ( *(_QWORD *)W32GetUserSessionState(v111, v110, v112) )
      {
        v117 = (struct _FAST_ERESOURCE **)W32GetUserSessionState(v115, v114, v116);
        CLEANUP_CRIT_RESOURCE(v117);
      }
      UserSetLastError(8);
      return 0LL;
    }
    v101 = W32GetUserSessionState(v99, v98, v100);
    ExDeleteResourceLite(*(PERESOURCE *)(v101 + 18840));
LABEL_49:
    v102 = W32GetUserSessionState(v41, v40, v42);
    ExFreePoolWithTag(*(PVOID *)(v102 + 18840), 0);
    *(_QWORD *)(W32GetUserSessionState(v104, v103, v105) + 18840) = 0LL;
    goto LABEL_50;
  }
  v50 = *(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 19840);
  *(_DWORD *)v50 = 1;
  *(_QWORD *)(v50 + 8) = 0LL;
  *(_DWORD *)(v50 + 16) = 0;
  KeInitializeEvent((PRKEVENT)(v50 + 24), SynchronizationEvent, 0);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v52 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v52 = 0;
  }
  v53 = &WPP_RECORDER_INITIALIZED;
  v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v55 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, v51)
                    + 19840);
    v59 = W32GetUserSessionState(v57, v56, v58);
    LOBYTE(v60) = v54;
    LOBYTE(v61) = v52;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v61,
      v60,
      *(_QWORD *)(v59 + 69136),
      4,
      14,
      15,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids,
      v55);
    v53 = &WPP_RECORDER_INITIALIZED;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v62 = 0;
  }
  v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v64 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, v51)
                    + 16);
    v68 = W32GetUserSessionState(v66, v65, v67);
    LOBYTE(v69) = v63;
    LOBYTE(v70) = v62;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v70,
      v69,
      *(_QWORD *)(v68 + 69136),
      4,
      14,
      16,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids,
      v64);
    v53 = &WPP_RECORDER_INITIALIZED;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v71 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v71 = 0;
  }
  v72 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v71 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v73 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, v51)
                    + 8);
    v77 = W32GetUserSessionState(v75, v74, v76);
    LOBYTE(v78) = v72;
    LOBYTE(v79) = v71;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v79,
      v78,
      *(_QWORD *)(v77 + 69136),
      4,
      14,
      17,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids,
      v73);
    v53 = &WPP_RECORDER_INITIALIZED;
  }
  v80 = (int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v81 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v81 = 0;
  }
  v82 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v81 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v83 = *(_QWORD *)W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, v51);
    v87 = W32GetUserSessionState(v85, v84, v86);
    LOBYTE(v88) = v82;
    LOBYTE(v89) = v81;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v89,
      v88,
      *(_QWORD *)(v87 + 69136),
      4,
      14,
      18,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids,
      v83);
  }
  if ( (int)InitDomainLocks(v80, (int)v53, v51) < 0 )
  {
LABEL_46:
    CleanupDomainLocks(v91, v90, v92);
    goto LABEL_47;
  }
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    v96 = W32GetUserSessionState(v94, v93, v95);
    KernelSemaphore = CreateKernelSemaphore(0, 0x7FFFFFFF);
    *(_QWORD *)(v96 + 18856) = KernelSemaphore;
    if ( !KernelSemaphore )
    {
      EnterLeaveCritMitRitHandOffHazard::UnInitialize();
      goto LABEL_46;
    }
  }
  *(_QWORD *)(W32GetUserSessionState(v94, v93, v95) + 66056) = 0LL;
  *(_QWORD *)(W32GetUserSessionState(v120, v119, v121) + 69096) = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v124 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v124 = 0;
  }
  v125 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v124 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v126 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v122, v123);
    LOBYTE(v127) = v125;
    LOBYTE(v128) = v124;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v128,
      v127,
      *(_QWORD *)(v126 + 69136),
      4,
      14,
      19,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
  }
  return 1LL;
}
