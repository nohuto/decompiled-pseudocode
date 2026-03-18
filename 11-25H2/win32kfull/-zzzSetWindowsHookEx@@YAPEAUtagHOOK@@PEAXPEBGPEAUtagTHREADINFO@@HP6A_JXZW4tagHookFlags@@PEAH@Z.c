/*
 * XREFs of ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x14024116C
 * Callers:
 *     NtUserSetWindowsHookAW @ 0x1402A0E70 (NtUserSetWindowsHookAW.c)
 *     NtUserSetWindowsHookEx @ 0x1402A0F50 (NtUserSetWindowsHookEx.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetHmodTableIndex @ 0x1400C8B54 (GetHmodTableIndex.c)
 *     AddHmodDependency @ 0x1400C8D80 (AddHmodDependency.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C8FCC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C951C (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C9740 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x14014BF04 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6, _DWORD *a7)
{
  __int64 v7; // r12
  __int64 v10; // rdx
  bool v11; // di
  bool v12; // si
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r9
  struct tagTHREADINFO *v16; // rax
  struct tagTHREADINFO *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  bool v21; // di
  bool v22; // si
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdx
  UIPrivilegeIsolation *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  bool v32; // r14
  __int64 v33; // rdx
  bool v34; // di
  bool v35; // si
  __int64 UserSessionState; // rax
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdx
  int HmodTableIndex; // eax
  __int64 v43; // rdx
  bool v44; // di
  bool v45; // si
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  char v49; // di
  int v50; // edx
  __int64 v51; // r8
  __int64 *v52; // r12
  PRKPROCESS *v53; // rcx
  int v54; // edx
  int v55; // r13d
  __int64 v56; // rax
  __int64 v57; // rcx
  bool v58; // si
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  __int64 v63; // rdx
  char v64; // [rsp+20h] [rbp-168h]
  __int16 v65; // [rsp+30h] [rbp-158h]
  __int16 v66; // [rsp+30h] [rbp-158h]
  char v67; // [rsp+40h] [rbp-148h]
  __int64 v71; // [rsp+80h] [rbp-108h]
  _BYTE v72[48]; // [rsp+B8h] [rbp-D0h] BYREF
  _BYTE v73[48]; // [rsp+E8h] [rbp-A0h] BYREF
  _BYTE v74[48]; // [rsp+118h] [rbp-70h] BYREF

  v7 = a4;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    UserSetLastError(1426);
    v21 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v21 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v25 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v63) + 69160);
    v67 = v7;
    v66 = 10;
    goto LABEL_136;
  }
  if ( !a5 )
  {
    UserSetLastError(1427);
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v10) + 69160);
    v65 = 11;
    goto LABEL_83;
  }
  v16 = PtiCurrent(15LL, a2);
  v17 = v16;
  if ( a3 )
  {
    v19 = *((unsigned int *)&unk_140355990 + v7 + 1);
    if ( (v19 & 2) != 0 )
    {
      if ( *(_QWORD *)(a3 + 496) == *((_QWORD *)v16 + 62) )
      {
        if ( *((_QWORD *)v16 + 58) == *(_QWORD *)(a3 + 464) )
          goto LABEL_74;
        if ( a1 || (v19 & 0x20) != 0 )
        {
          if ( !(unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline(v19)
            && !UIPrivilegeIsolation::Enforced(v28) )
          {
            v29 = *(_QWORD *)(a3 + 464);
            v30 = *((_QWORD *)v17 + 58);
            if ( (*(_DWORD *)(v29 + 764) != *(_DWORD *)(v30 + 764) || *(_DWORD *)(v29 + 768) != *(_DWORD *)(v30 + 768))
              && (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 528), 0, 0) & 0x400000) == 0 )
            {
              UserSetLastError(5);
              v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                 && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
                 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
              v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                return 0LL;
              v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v31) + 69160);
              v65 = 16;
              v64 = 3;
              LOBYTE(v14) = v32;
              goto LABEL_94;
            }
          }
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 528), 0, 0) & 0xC) != 0
            && (*((_DWORD *)&unk_140355990 + v7 + 1) & 0x10) == 0 )
          {
            UserSetLastError(1458);
            v34 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
               && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
               && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
            v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v33);
              LOBYTE(v37) = v35;
              LOBYTE(v38) = v34;
              WPP_RECORDER_AND_TRACE_SF_d(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v38,
                v37,
                *(_QWORD *)(UserSessionState + 69160),
                3,
                5,
                17,
                (__int64)&WPP_ee71345fc15630358c6b50546088a96d_Traceguids,
                v7);
            }
            return 0LL;
          }
          goto LABEL_74;
        }
        UserSetLastError(5);
        v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v27) + 69160);
        v65 = 15;
      }
      else
      {
        UserSetLastError(5);
        v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v26) + 69160);
        v65 = 14;
      }
LABEL_83:
      v64 = 3;
LABEL_93:
      LOBYTE(v14) = v12;
LABEL_94:
      LOBYTE(v13) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v14,
        v15,
        v64,
        5,
        v65,
        (__int64)&WPP_ee71345fc15630358c6b50546088a96d_Traceguids);
      return 0LL;
    }
    UserSetLastError(1429);
    v21 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v21 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v25 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v20) + 69160);
    v67 = v7;
    v66 = 13;
LABEL_136:
    LOBYTE(v24) = v22;
    LOBYTE(v23) = v21;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v23,
      v24,
      v25,
      3,
      5,
      v66,
      (__int64)&WPP_ee71345fc15630358c6b50546088a96d_Traceguids,
      v67);
    return 0LL;
  }
  if ( !a1 && (*((_DWORD *)&unk_140355990 + v7 + 1) & 0x20) == 0 )
  {
    UserSetLastError(1428);
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v18) + 69160);
    v65 = 12;
    goto LABEL_83;
  }
LABEL_74:
  if ( !RtlAreAllAccessesGranted(*((_DWORD *)v17 + 234), 8u) )
  {
    UserSetLastError(5);
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v39) + 69160);
    v65 = 18;
    goto LABEL_83;
  }
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v72);
  LOBYTE(v40) = 5;
  v71 = HMAllocObject(v17, *((_QWORD *)v17 + 62), v40, 104LL);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v72);
  if ( !v71 )
  {
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v41) + 69160);
    v65 = 19;
    v64 = 2;
    goto LABEL_93;
  }
  *(_DWORD *)(v71 + 68) = -1;
  if ( a1 )
  {
    HmodTableIndex = GetHmodTableIndex(a2);
    *(_DWORD *)(v71 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126);
      v44 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v45 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v44 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v46 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v43);
        LOBYTE(v47) = v45;
        LOBYTE(v48) = v44;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v48,
          v47,
          *(_QWORD *)(v46 + 69160),
          3,
          5,
          20,
          (__int64)&WPP_ee71345fc15630358c6b50546088a96d_Traceguids);
      }
      DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v73);
      HMFreeObject(v71);
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v73);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency(HmodTableIndex);
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>((__int64)v74);
  v49 = 1;
  v50 = 1 << (v7 + 1);
  v51 = 8LL * ((int)v7 + 1);
  if ( a3 )
  {
    v52 = (__int64 *)(v51 + a3 + 960);
    *(_DWORD *)(a3 + 720) |= v50;
    if ( *(_QWORD *)(a3 + 520) )
    {
      v53 = *(PRKPROCESS **)(a3 + 464);
      if ( v53 == *((PRKPROCESS **)v17 + 58) )
      {
        v54 = 0;
      }
      else
      {
        KeAttachProcess(*v53);
        v54 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(a3 + 520) + 56LL) = *(_DWORD *)(a3 + 720);
      v55 = a4;
      if ( v54 )
        KeDetachProcess();
    }
    else
    {
      v55 = a4;
    }
    v56 = v71;
  }
  else
  {
    v52 = (__int64 *)(v51 + *((_QWORD *)v17 + 63) + 40LL);
    *(_DWORD *)(v71 + 64) |= 1u;
    *(_DWORD *)(**((_QWORD **)v17 + 63) + 16LL) |= v50;
    a3 = 0LL;
    v56 = v71;
    v55 = a4;
  }
  *(_QWORD *)(v56 + 72) = a3;
  *(_DWORD *)(v71 + 64) |= a6 & 0x42;
  *(_DWORD *)(v71 + 48) = v55;
  *(_QWORD *)(v71 + 56) = a5 - a1;
  v57 = *v52;
  *(_QWORD *)(v71 + 40) = *v52;
  if ( a7 )
    *a7 = v57 == 0;
  *v52 = v71;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v49 = 0;
  }
  v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v49 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v59 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a7);
    LOBYTE(v60) = v58;
    LOBYTE(v61) = v49;
    WPP_RECORDER_AND_TRACE_SF_qDD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v61,
      v60,
      *(_QWORD *)(v59 + 69160));
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v74);
  return v71;
}
