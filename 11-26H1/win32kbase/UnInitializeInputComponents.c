/*
 * XREFs of UnInitializeInputComponents @ 0x1401B3AFC
 * Callers:
 *     InputUnInitialize @ 0x140117884 (InputUnInitialize.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CCursorClip@@AEAA@XZ @ 0x14008FA0C (--1CCursorClip@@AEAA@XZ.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x14018860C (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1401B3DC4 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     ??1CEResourceLock@@QEAA@XZ @ 0x1401BB8FC (--1CEResourceLock@@QEAA@XZ.c)
 *     ??1CInputConfig@@AEAA@XZ @ 0x140211E78 (--1CInputConfig@@AEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void UnInitializeInputComponents()
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  __int64 v3; // rdx
  char *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 UserSessionState; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rcx
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // r9
  char *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // edx
  void (__fastcall ***v34)(_QWORD, __int64); // rcx
  int v35; // r8d
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // edx
  void (__fastcall ***v40)(_QWORD, __int64); // rcx
  int v41; // r8d
  __int64 v42; // rax
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  char *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // r8
  __int64 v56; // r9
  char *v57; // rcx
  int v58; // edx
  int v59; // ecx
  __int64 v60; // rdi
  int v61; // r8d
  char *v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  char *v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // edx
  void *v71; // rcx
  int v72; // r8d
  int v73; // edx
  int v74; // ecx
  __int64 v75; // rdi
  int v76; // r8d
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  char **v80; // rbx
  char *v81; // rcx
  __int64 v82; // rax

  InputExtensibilityCallout::UnInitialize();
  v4 = *(char **)(W32GetUserSessionState(v1, v0, v2) + 3056);
  if ( v4 )
    GreDeleteFastMutex(v4, v3, v5, v6);
  *(_QWORD *)(W32GetUserSessionState((_DWORD)v4, v3, v5) + 3056) = 0LL;
  UserSessionState = W32GetUserSessionState(v8, v7, v9);
  v14 = *(char **)(UserSessionState + 3048);
  if ( v14 )
    GreDeleteFastMutex(v14, v10, v12, v13);
  *(_QWORD *)(UserSessionState + 3048) = 0LL;
  CTouchProcessor::UnInitialize((int)v14, v10, v12);
  if ( *(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 36272) )
  {
    v21 = W32GetUserSessionState(v19, v18, v20);
    v26 = *(char **)(v21 + 36272);
    if ( v26 )
    {
      CCursorClip::~CCursorClip(*(CCursorClip **)(v21 + 36272), v22, v24, v25);
      GreDeleteFastMutex(v26, v27, v28, v29);
    }
    *(_QWORD *)(W32GetUserSessionState(v23, v22, v24) + 36272) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v19, v18, v20) + 18800) )
  {
    v34 = *(void (__fastcall ****)(_QWORD, __int64))(W32GetUserSessionState(v31, v30, v32) + 18800);
    if ( v34 )
      (**v34)(v34, 1LL);
    *(_QWORD *)(W32GetUserSessionState((_DWORD)v34, v33, v35) + 18800) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v31, v30, v32) + 3104) )
  {
    v40 = *(void (__fastcall ****)(_QWORD, __int64))(W32GetUserSessionState(v37, v36, v38) + 3104);
    if ( v40 )
      (**v40)(v40, 1LL);
    *(_QWORD *)(W32GetUserSessionState((_DWORD)v40, v39, v41) + 3104) = 0LL;
  }
  v42 = W32GetUserSessionState(v37, v36, v38);
  v46 = *(char **)(v42 + 18680);
  if ( v46 )
  {
    CInputConfig::~CInputConfig(*(CInputConfig **)(v42 + 18680));
    GreDeleteFastMutex(v46, v47, v48, v49);
  }
  *(_QWORD *)(W32GetUserSessionState(v44, v43, v45) + 18680) = 0LL;
  v54 = W32GetUserSessionState(v51, v50, v52);
  v57 = *(char **)(v54 + 19632);
  if ( v57 )
  {
    GreDeleteFastMutex(v57, v53, v55, v56);
    *(_QWORD *)(v54 + 19632) = 0LL;
  }
  v60 = W32GetUserSessionState((_DWORD)v57, v53, v55);
  v62 = *(char **)(v60 + 16720);
  if ( v62 )
  {
    CEResourceLock::~CEResourceLock((CEResourceLock *)(v62 + 8));
    GreDeleteFastMutex(v62, v63, v64, v65);
    *(_QWORD *)(v60 + 16720) = 0LL;
  }
  v67 = *(char **)(W32GetUserSessionState(v59, v58, v61) + 18992);
  if ( v67 )
    GreDeleteFastMutex(v67, v66, v68, v69);
  *(_QWORD *)(W32GetUserSessionState((_DWORD)v67, v66, v68) + 18992) = 0LL;
  v71 = *(void **)(W32GetUserInputMgrSessionState() + 24);
  if ( v71 )
    ExFreePoolWithTag(v71, 0);
  v75 = W32GetUserSessionState((_DWORD)v71, v70, v72);
  if ( *(_QWORD *)(v75 + 19520) )
  {
    if ( isChildPartition(v74, v73, v76) )
    {
      v80 = *(char ***)(v75 + 19520);
      while ( 1 )
      {
        v81 = *v80;
        if ( *v80 == (char *)v80 )
          break;
        if ( *((char ***)v81 + 1) != v80 || (v82 = *(_QWORD *)v81, *(char **)(*(_QWORD *)v81 + 8LL) != v81) )
          __fastfail(3u);
        *v80 = (char *)v82;
        *(_QWORD *)(v82 + 8) = v80;
        GreDeleteFastMutex(v81, v77, v78, v79);
      }
    }
    GreDeleteFastMutex(*(char **)(v75 + 19520), v77, v78, v79);
    *(_QWORD *)(v75 + 19520) = 0LL;
  }
}
