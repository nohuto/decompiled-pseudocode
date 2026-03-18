/*
 * XREFs of xxxUserProcessCallout @ 0x1401D8EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400F8224 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     UserJobCallout @ 0x14015E1E8 (UserJobCallout.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ApiSetEditionShowSystemCursor @ 0x1401C1638 (ApiSetEditionShowSystemCursor.c)
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401D82B8 (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAU_PS_PKG_CLAIM@@@Z @ 0x1401D8598 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401D885C (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 *     CloseWin32InputRelatedObHandles @ 0x14021FF40 (CloseWin32InputRelatedObHandles.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserProcessCallout(struct _W32PROCESS *this, PEPROCESS *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  unsigned int v7; // edi
  char v8; // r14
  int v10; // edx
  int v11; // r8d
  PACCESS_TOKEN v12; // r15
  bool v13; // r15
  int v14; // ebx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int inited; // r12d
  char v22; // r13
  int v23; // ebx
  __int64 v24; // rax
  _QWORD *UserSessionState; // rbx
  __int64 v26; // rax
  int v27; // edx
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 ProcessJob; // rax
  __int64 v38; // rbx
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v40; // rax
  _QWORD *v41; // rbx
  char v42; // r14
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // edx
  int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // r8d
  __int64 v51; // rcx
  int (*v52)(void); // rax
  __int64 v53; // rcx
  void (__fastcall *v54)(struct _W32PROCESS *); // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r15
  __int64 v60; // rbx
  int v61; // edx
  int v62; // ecx
  int v63; // r8d
  int v64; // edx
  __int64 v65; // rcx
  unsigned __int64 i; // rsi
  int v67; // r8d
  __int64 v68; // rax
  __int64 SessionState; // rax
  __int64 v70; // rdx
  int v71; // r8d
  int v72; // edx
  int v73; // ecx
  int v74; // r8d
  __int64 v75; // rcx
  _DWORD *v76; // rbx
  int v77; // edx
  int v78; // r8d
  __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // r8d
  _DWORD *v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rdx
  int v85; // r8d
  __int64 v86; // rcx
  __int64 v87; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v88[3]; // [rsp+58h] [rbp-28h] BYREF
  int v89; // [rsp+70h] [rbp-10h]
  int v90; // [rsp+74h] [rbp-Ch]
  __int64 v91; // [rsp+78h] [rbp-8h]
  PVOID v92; // [rsp+D0h] [rbp+50h] BYREF
  int v93; // [rsp+D8h] [rbp+58h] BYREF

  v7 = 0;
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a2 )
      return (unsigned int)xxxUserProcessInitCallout(this, a2);
    else
      UserProcessDestroyCallout(this, v4, v6);
    return v7;
  }
  else if ( a2 )
  {
    v8 = 1;
    if ( *((_BYTE *)this + 1200) == 1 )
    {
      return 1073741851LL;
    }
    else
    {
      v12 = PsReferencePrimaryToken(a2[2]);
      if ( v12 )
      {
        v93 = 0;
        LODWORD(v92) = 0;
        v87 = 0LL;
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2,
                   v12,
                   (enum _PROCESS_IMMERSIVE_TYPE *)&v93,
                   &v92,
                   (struct _PS_PKG_CLAIM *)&v87);
        if ( inited >= 0 )
        {
          UserSessionState = (_QWORD *)W32GetUserSessionState(v19, v18, v20);
          v26 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                  UserSessionState,
                  1LL,
                  0,
                  (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
          UserSessionState[3] = v26;
          if ( v26 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v26) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v27, v28);
            DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
            DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
          }
          inited = xxxInitProcessInfo(this, v12, v93, (int)v92, &v87);
          PsDereferencePrimaryToken(v12);
          if ( inited >= 0 )
          {
            UserSessionSwitchLeaveCritWithNonPaged(v30, v29, v31, v32);
            ProcessJob = PsGetProcessJob(*(_QWORD *)this);
            v38 = ProcessJob;
            if ( ProcessJob && (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
            {
              v88[0] = 0LL;
              v88[1] = 0LL;
              v90 = 0;
              JobLock = (struct _ERESOURCE *)PsGetJobLock(v38);
              ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
              v91 = *(_QWORD *)this;
              v88[2] = v38;
              v89 = 1;
              inited = UserJobCallout((__int64)v88);
              v40 = (struct _ERESOURCE *)PsGetJobLock(v38);
              ExReleaseResourceAndLeaveCriticalRegion(v40);
            }
          }
          else
          {
            DestroyProcessInfo(this, v29, v31);
            UserSessionSwitchLeaveCritWithNonPaged(v34, v33, v35, v36);
          }
        }
        else
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (v19 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v19 & 0x80u) == 0)
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v8 = 0;
          }
          v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v23 = *((_DWORD *)this + 14);
            v24 = W32GetUserSessionState(v19, (_DWORD)WPP_GLOBAL_Control, v20);
            WPP_RECORDER_AND_TRACE_SF_dD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v8,
              v22,
              *(_QWORD *)(v24 + 69136),
              3u,
              8u,
              0x24u,
              (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids,
              inited,
              v23);
          }
          PsDereferencePrimaryToken(v12);
        }
        return (unsigned int)inited;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v8 = 0;
        }
        v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = *((_DWORD *)this + 14);
          v15 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
          LOBYTE(v16) = v13;
          LOBYTE(v17) = v8;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v17,
            v16,
            *(_QWORD *)(v15 + 69136),
            3,
            8,
            35,
            (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids,
            v14);
        }
        return 3221225596LL;
      }
    }
  }
  else
  {
    v41 = (_QWORD *)W32GetUserSessionState(v5, v4, v6);
    v42 = 1;
    v43 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v41,
            1LL,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v41[3] = v43;
    if ( v43 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v43) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v41 + 2465), v45, v46);
      DestroyDeferredUnlockObjectAssignmentList(v41 + 2472);
      DestroyDeferredUnlockObjectAssignmentList(v41 + 2470);
    }
    if ( !*(_QWORD *)(W32GetUserGdiSessionState(v44) + 40)
      || (v47 = *(_QWORD *)(W32GetUserGdiSessionState(v47) + 40), *(_QWORD *)this != v47) )
    {
      v42 = 0;
    }
    v49 = *(_QWORD *)(W32GetUserGdiSessionState(v47) + 40);
    if ( *(_QWORD *)this == v49 )
      W32GetUserSessionState(v49, v48, v50);
    if ( *(_QWORD *)this )
    {
      if ( PsGetProcessJob(*(_QWORD *)this) )
      {
        v52 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v51) + 48) + 608LL);
        if ( v52 )
        {
          if ( v52() >= 0 )
          {
            v54 = *(void (__fastcall **)(struct _W32PROCESS *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v53) + 48)
                                                              + 616LL);
            if ( v54 )
              v54(this);
          }
        }
      }
    }
    if ( (unsigned int)DestroyProcessInfo(this, v48, v50) )
    {
      v59 = W32GetUserSessionState(v56, v55, v57);
      v60 = *(_QWORD *)(v59 + 19920);
      for ( i = v60 + 32LL * *(unsigned int *)(W32GetUserSessionState(v62, v61, v63) + 19848);
            i > *(_QWORD *)(v59 + 19920) && !*(_BYTE *)(i + 24);
            i -= 32LL )
      {
        v68 = W32GetUserSessionState(v65, v64, v67);
        --*(_DWORD *)(v68 + 19848);
      }
      SessionState = W32GetSessionState(v65);
      GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v70, v71);
      v75 = *(_QWORD *)(W32GetUserSessionState(v73, v72, v74) + 56968);
      v76 = *(_DWORD **)(v75 + 24);
      v79 = *(_QWORD *)(W32GetUserSessionState(v75, v77, v78) + 56968) + 24LL;
      if ( v76 != (_DWORD *)v79 )
      {
        do
        {
          v82 = *(_DWORD **)v76;
          if ( (v76[12] & 0x400000) != 0 )
            DestroyCacheDC(v76);
          v76 = v82;
          v80 = *(_QWORD *)(W32GetUserSessionState(v80, v79, v81) + 56968) + 24LL;
        }
        while ( v82 != (_DWORD *)v80 );
      }
      v83 = W32GetSessionState(v80);
      GrepUnlockVisRgn(*(struct _ERESOURCE ***)(v83 + 88), v84, v85);
      ApiSetEditionShowSystemCursor(v86);
      if ( v42 )
        CloseWin32InputRelatedObHandles();
    }
    UserSessionSwitchLeaveCritWithNonPaged(v56, v55, v57, v58);
    return 0LL;
  }
}
