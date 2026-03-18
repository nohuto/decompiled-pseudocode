/*
 * XREFs of xxxUserProcessCallout @ 0x14016B6A0
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserJobCallout @ 0x14012222C (UserJobCallout.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 *     ApiSetEditionShowSystemCursor @ 0x140196AC0 (ApiSetEditionShowSystemCursor.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B5D5C (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAU_PS_PKG_CLAIM@@@Z @ 0x1401B5FE4 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401B62C0 (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 *     CloseWin32InputRelatedObHandles @ 0x14021C31C (CloseWin32InputRelatedObHandles.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserProcessCallout(struct _W32PROCESS *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edi
  char v8; // si
  __int64 v9; // rdx
  PACCESS_TOKEN v10; // r12
  bool v11; // r14
  int v12; // ebx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r14d
  bool v19; // r15
  int v20; // ebx
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  _QWORD *v24; // r15
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rdx
  int inited; // r15d
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 ProcessJob; // rax
  __int64 v32; // r14
  struct _ERESOURCE *JobLock; // rax
  __int64 v34; // rdx
  struct _ERESOURCE *v35; // rax
  _QWORD *v36; // r15
  char v37; // si
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  int (*v47)(void); // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  void (__fastcall *v50)(struct _W32PROCESS *); // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r15
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 i; // r14
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  _DWORD *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rcx
  _DWORD *v69; // r14
  __int64 v70; // rax
  __int64 v71; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v72[3]; // [rsp+58h] [rbp-28h] BYREF
  int v73; // [rsp+70h] [rbp-10h]
  int v74; // [rsp+74h] [rbp-Ch]
  __int64 v75; // [rsp+78h] [rbp-8h]
  unsigned int v76; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v77; // [rsp+C8h] [rbp+48h] BYREF

  v6 = 0;
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() && !g_UseOldJobLogic )
  {
    if ( a2 )
      return (unsigned int)xxxUserProcessInitCallout(a1, (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2);
    else
      UserProcessDestroyCallout(a1);
    return v6;
  }
  if ( a2 )
  {
    v8 = 1;
    if ( *((_BYTE *)a1 + 1176) == 1 )
      return 1073741851LL;
    v10 = PsReferencePrimaryToken(*(PEPROCESS *)(a2 + 16));
    if ( !v10 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v8 = 0;
      }
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = *((_DWORD *)a1 + 14);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
        LOBYTE(v14) = v11;
        LOBYTE(v15) = v8;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 69144),
          3,
          8,
          35,
          (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids,
          v12);
      }
      return 3221225596LL;
    }
    v77 = 0;
    v76 = 0;
    v71 = 0LL;
    v18 = UserProcessImmersiveType(
            (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2,
            v10,
            (enum _PROCESS_IMMERSIVE_TYPE *)&v77,
            &v76,
            (struct _PS_PKG_CLAIM *)&v71);
    if ( v18 < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v17 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v17 & 0x80u) == 0LL)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v8 = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = *((_DWORD *)a1 + 14);
        v21 = W32GetUserSessionState(v17, WPP_GLOBAL_Control);
        LOBYTE(v22) = v19;
        LOBYTE(v23) = v8;
        WPP_RECORDER_AND_TRACE_SF_dD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(v21 + 69144),
          3,
          8,
          36,
          (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids,
          v18,
          v20);
      }
      PsDereferencePrimaryToken(v10);
      return (unsigned int)v18;
    }
    v24 = (_QWORD *)W32GetUserSessionState(v17, v16);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v25 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              v24,
              1LL,
              0LL,
              _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v25 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v24, 0LL);
    v26 = v25;
    v24[3] = v25;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v26 )
      {
LABEL_34:
        if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v26) )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(v24 + 2461), v27);
          DestroyDeferredUnlockObjectAssignmentList(v24 + 2468);
          DestroyDeferredUnlockObjectAssignmentList(v24 + 2466);
        }
      }
    }
    else if ( v26 )
    {
      *(_BYTE *)(v26 + 1708) = 1;
      goto LABEL_34;
    }
    inited = xxxInitProcessInfo(a1, v10, v77, v76, (__int64)&v71);
    PsDereferencePrimaryToken(v10);
    if ( inited >= 0 )
    {
      UserSessionSwitchLeaveCritWithNonPaged(0LL, v29);
      ProcessJob = PsGetProcessJob(*(_QWORD *)a1);
      v32 = ProcessJob;
      if ( ProcessJob && (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
      {
        v72[0] = 0LL;
        v72[1] = 0LL;
        v74 = 0;
        JobLock = (struct _ERESOURCE *)PsGetJobLock(v32);
        ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
        v75 = *(_QWORD *)a1;
        v72[2] = v32;
        v73 = 1;
        inited = UserJobCallout((__int64)v72, v34);
        v35 = (struct _ERESOURCE *)PsGetJobLock(v32);
        ExReleaseResourceAndLeaveCriticalRegion(v35);
      }
    }
    else
    {
      DestroyProcessInfo(a1);
      UserSessionSwitchLeaveCritWithNonPaged(0LL, v30);
    }
    return (unsigned int)inited;
  }
  v36 = (_QWORD *)W32GetUserSessionState(v5, v4);
  v37 = 1;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v38 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            v36,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v38 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v36, 0LL);
  v39 = v38;
  v36[3] = v38;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v39 )
    {
LABEL_50:
      if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v39) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v36 + 2461), v41);
        DestroyDeferredUnlockObjectAssignmentList(v36 + 2468);
        DestroyDeferredUnlockObjectAssignmentList(v36 + 2466);
      }
    }
  }
  else if ( v39 )
  {
    *(_BYTE *)(v39 + 1708) = 1;
    goto LABEL_50;
  }
  if ( !*(_QWORD *)(W32GetUserGdiSessionState(v40) + 40)
    || (v42 = *(_QWORD *)(W32GetUserGdiSessionState(v42) + 40), *(_QWORD *)a1 != v42) )
  {
    v37 = 0;
  }
  v44 = *(_QWORD *)(W32GetUserGdiSessionState(v42) + 40);
  if ( *(_QWORD *)a1 == v44 )
    W32GetUserSessionState(v44, v43);
  if ( *(_QWORD *)a1 )
  {
    if ( PsGetProcessJob(*(_QWORD *)a1) )
    {
      v47 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v46, v45) + 48) + 616LL);
      if ( v47 )
      {
        if ( v47() >= 0 )
        {
          v50 = *(void (__fastcall **)(struct _W32PROCESS *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v49, v48) + 48)
                                                            + 624LL);
          if ( v50 )
            v50(a1);
        }
      }
    }
  }
  if ( (unsigned int)DestroyProcessInfo(a1) )
  {
    v53 = W32GetUserSessionState(v52, v51);
    v54 = *(_QWORD *)(v53 + 19888);
    for ( i = v54 + 32LL * *(unsigned int *)(W32GetUserSessionState(v56, v55) + 19816);
          i > *(_QWORD *)(v53 + 19888) && !*(_BYTE *)(i + 24);
          i -= 32LL )
    {
      v60 = W32GetUserSessionState(v58, v57);
      --*(_DWORD *)(v60 + 19816);
    }
    v61 = W32GetUserSessionState(v58, v57);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v61 + 56968) + 48LL));
    v64 = *(_QWORD *)(W32GetUserSessionState(v63, v62) + 56968);
    v65 = *(_DWORD **)(v64 + 24);
    v67 = *(_QWORD *)(W32GetUserSessionState(v64, v66) + 56968) + 24LL;
    if ( v65 != (_DWORD *)v67 )
    {
      do
      {
        v69 = *(_DWORD **)v65;
        if ( (v65[12] & 0x400000) != 0 )
          DestroyCacheDC(v65);
        v65 = v69;
        v68 = *(_QWORD *)(W32GetUserSessionState(v68, v67) + 56968) + 24LL;
      }
      while ( v69 != (_DWORD *)v68 );
    }
    v70 = W32GetUserSessionState(v68, v67);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v70 + 56968) + 48LL));
    ApiSetEditionShowSystemCursor();
    if ( v37 )
      CloseWin32InputRelatedObHandles();
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v51);
  return 0LL;
}
