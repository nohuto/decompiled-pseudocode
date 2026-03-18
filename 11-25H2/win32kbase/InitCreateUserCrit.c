/*
 * XREFs of InitCreateUserCrit @ 0x1402EB1A4
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?InitDomainLocks@@YAJXZ @ 0x14013E668 (-InitDomainLocks@@YAJXZ.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x14014CBD0 (-CleanupDomainLocks@@YAXXZ.c)
 *     ?Initialize@EnterLeaveCritMitRitHandOffHazard@@SAJXZ @ 0x1401673A4 (-Initialize@EnterLeaveCritMitRitHandOffHazard@@SAJXZ.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1401AC1CC (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z @ 0x1401B30DC (-CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z.c)
 *     ?INIT_CRIT_RESOURCE@@YAPEAU_FAST_ERESOURCE@@XZ @ 0x1401B5A80 (-INIT_CRIT_RESOURCE@@YAPEAU_FAST_ERESOURCE@@XZ.c)
 */

__int64 __fastcall InitCreateUserCrit(__int64 a1, __int64 a2)
{
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  struct _FAST_ERESOURCE *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _FAST_ERESOURCE *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _FAST_ERESOURCE *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 Pool2; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  char v38; // di
  _UNKNOWN **v39; // rdx
  bool v40; // si
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  char v47; // di
  bool v48; // si
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  char v55; // di
  bool v56; // si
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  void *v63; // rcx
  char v64; // di
  bool v65; // si
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  struct _FAST_ERESOURCE **v90; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  char v95; // bl
  bool v96; // di
  __int64 v97; // rax
  int v98; // r8d
  int v99; // edx

  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      14,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
  }
  v7 = INIT_CRIT_RESOURCE();
  *(_QWORD *)W32GetUserSessionState(v9, v8) = v7;
  if ( !*(_QWORD *)W32GetUserSessionState(v11, v10) )
    goto LABEL_46;
  v14 = INIT_CRIT_RESOURCE();
  *(_QWORD *)(W32GetUserSessionState(v16, v15) + 8) = v14;
  if ( !*(_QWORD *)(W32GetUserSessionState(v18, v17) + 8) )
    goto LABEL_46;
  v19 = INIT_CRIT_RESOURCE();
  *(_QWORD *)(W32GetUserSessionState(v21, v20) + 16) = v19;
  if ( !*(_QWORD *)(W32GetUserSessionState(v23, v22) + 16) )
    goto LABEL_46;
  Pool2 = ExAllocatePool2(64LL, 104LL, 1919251285LL);
  *(_QWORD *)(W32GetUserSessionState(v26, v25) + 18792) = Pool2;
  if ( !*(_QWORD *)(W32GetUserSessionState(v28, v27) + 18792) )
    goto LABEL_46;
  v29 = W32GetUserSessionState(v13, v12);
  if ( ExInitializeResourceLite(*(PERESOURCE *)(v29 + 18792)) < 0 )
    goto LABEL_48;
  v32 = ExAllocatePool2(64LL, 56LL, 1716220757LL);
  *(_QWORD *)(W32GetUserSessionState(v34, v33) + 19808) = v32;
  if ( !*(_QWORD *)(W32GetUserSessionState(v36, v35) + 19808) )
  {
LABEL_46:
    if ( !*(_QWORD *)(W32GetUserSessionState(v13, v12) + 18792) )
    {
LABEL_49:
      if ( *(_QWORD *)(W32GetUserSessionState(v77, v76) + 16) )
      {
        v84 = W32GetUserSessionState(v83, v82);
        CLEANUP_CRIT_RESOURCE((struct _FAST_ERESOURCE **)(v84 + 16));
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v83, v82) + 8) )
      {
        v87 = W32GetUserSessionState(v86, v85);
        CLEANUP_CRIT_RESOURCE((struct _FAST_ERESOURCE **)(v87 + 8));
      }
      if ( *(_QWORD *)W32GetUserSessionState(v86, v85) )
      {
        v90 = (struct _FAST_ERESOURCE **)W32GetUserSessionState(v89, v88);
        CLEANUP_CRIT_RESOURCE(v90);
      }
      UserSetLastError(8);
      return 0LL;
    }
    v78 = W32GetUserSessionState(v77, v76);
    ExDeleteResourceLite(*(PERESOURCE *)(v78 + 18792));
LABEL_48:
    v79 = W32GetUserSessionState(v31, v30);
    ExFreePoolWithTag(*(PVOID *)(v79 + 18792), 0);
    *(_QWORD *)(W32GetUserSessionState(v81, v80) + 18792) = 0LL;
    goto LABEL_49;
  }
  v37 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19808);
  *(_DWORD *)v37 = 1;
  *(_QWORD *)(v37 + 8) = 0LL;
  *(_DWORD *)(v37 + 16) = 0;
  KeInitializeEvent((PRKEVENT)(v37 + 24), SynchronizationEvent, 0);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v38 = 0;
  }
  v39 = &WPP_RECORDER_INITIALIZED;
  v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v41 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED) + 19808);
    v44 = W32GetUserSessionState(v43, v42);
    LOBYTE(v45) = v40;
    LOBYTE(v46) = v38;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v46,
      v45,
      *(_QWORD *)(v44 + 69144),
      4,
      14,
      15,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids,
      v41);
    v39 = &WPP_RECORDER_INITIALIZED;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v47 = 0;
  }
  v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v49 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED) + 16);
    v52 = W32GetUserSessionState(v51, v50);
    LOBYTE(v53) = v48;
    LOBYTE(v54) = v47;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v54,
      v53,
      *(_QWORD *)(v52 + 69144),
      4,
      14,
      16,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids,
      v49);
    v39 = &WPP_RECORDER_INITIALIZED;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v55 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v55 = 0;
  }
  v56 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v55 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v57 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED) + 8);
    v60 = W32GetUserSessionState(v59, v58);
    LOBYTE(v61) = v56;
    LOBYTE(v62) = v55;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v62,
      v61,
      *(_QWORD *)(v60 + 69144),
      4,
      14,
      17,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids,
      v57);
    v39 = &WPP_RECORDER_INITIALIZED;
  }
  v63 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v64 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v64 = 0;
  }
  v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v64 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v66 = *(_QWORD *)W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    v69 = W32GetUserSessionState(v68, v67);
    LOBYTE(v70) = v65;
    LOBYTE(v71) = v64;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v71,
      v70,
      *(_QWORD *)(v69 + 69144),
      4,
      14,
      18,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids,
      v66);
  }
  if ( (int)InitDomainLocks((__int64)v63, (__int64)v39) < 0 )
  {
LABEL_45:
    CleanupDomainLocks(v73, v72);
    goto LABEL_46;
  }
  if ( (int)EnterLeaveCritMitRitHandOffHazard::Initialize() < 0 )
  {
    EnterLeaveCritMitRitHandOffHazard::UnInitialize();
    goto LABEL_45;
  }
  *(_QWORD *)(W32GetUserSessionState(v75, v74) + 66064) = 0LL;
  *(_QWORD *)(W32GetUserSessionState(v93, v92) + 69104) = 0LL;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v95 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v95 = 0;
  }
  v96 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v95 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v97 = W32GetUserSessionState(WPP_GLOBAL_Control, v94);
    LOBYTE(v98) = v96;
    LOBYTE(v99) = v95;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v99,
      v98,
      *(_QWORD *)(v97 + 69144),
      4,
      14,
      19,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
  }
  return 1LL;
}
