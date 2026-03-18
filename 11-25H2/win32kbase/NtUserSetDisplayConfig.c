/*
 * XREFs of NtUserSetDisplayConfig @ 0x1401744E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400A038C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagDESKTOP@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400A1A44 (-UnlockWorker@-$Win32RawLockedItemBase@UtagDESKTOP@@$1-UserDereferenceObject@@YAXPEAX@Z$00$00$00.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E2330 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     LogDiagSDC @ 0x1400E2360 (LogDiagSDC.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1400EC6F8 (_QdcSdcTranslateStatusDefault.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F7E74 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EDF8 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DrvNeedDisplayStateCheck @ 0x14014FD98 (DrvNeedDisplayStateCheck.c)
 *     DrvIsDisplayStateCurrent @ 0x14015A540 (DrvIsDisplayStateCurrent.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401AC114 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(unsigned int a1, __int64 *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r13
  __int64 v8; // rbx
  signed int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *UserSessionState; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // esi
  unsigned int v19; // r12d
  __int64 v20; // rax
  struct tagTHREADINFO *v21; // rsi
  __int64 *v22; // rdx
  __int64 v23; // rcx
  bool v24; // r9
  bool v25; // r9
  int v26; // eax
  unsigned int v27; // r14d
  unsigned int v28; // esi
  __int64 v29; // rcx
  ULONG_PTR v30; // r13
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v32; // rax
  __int64 *v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 (*v38)(void); // rax
  int v39; // eax
  void (*v40)(void); // rax
  __int64 v43; // [rsp+68h] [rbp-120h]
  int v44; // [rsp+70h] [rbp-118h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v45; // [rsp+80h] [rbp-108h]
  unsigned int v46; // [rsp+8Ch] [rbp-FCh]
  _DWORD v48[4]; // [rsp+B8h] [rbp-D0h] BYREF
  void *v49; // [rsp+C8h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+D0h] [rbp-B8h] BYREF
  void (__fastcall *v51)(char *); // [rsp+E0h] [rbp-A8h]
  __int64 v52; // [rsp+F0h] [rbp-98h]
  __int64 v53; // [rsp+F8h] [rbp-90h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v54[4]; // [rsp+100h] [rbp-88h] BYREF
  struct _GUID v55; // [rsp+120h] [rbp-68h] BYREF
  __int64 v56; // [rsp+130h] [rbp-58h]
  int v57; // [rsp+138h] [rbp-50h]

  v7 = a1;
  v53 = a4;
  v52 = a5;
  v48[0] = 0x2000;
  v48[1] = -1;
  v48[2] = 0;
  v45 = 0LL;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  v46 = 0;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  v54[2] = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)MEMORY[0xFFFFF78000000320];
  v43 = v8 * KeQueryTimeIncrement();
  v9 = -1073741811;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v11, v10);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v14 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            0LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v13) = 1;
    v14 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v13);
  }
  v15 = v14;
  UserSessionState[3] = v14;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v15 )
      goto LABEL_9;
    *(_BYTE *)(v15 + 1708) = 1;
  }
  if ( v15 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v16);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v17) + 32) )
  {
    v21 = PtiCurrent();
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v21 + 58), 0x10u)
        || !UIPrivilegeIsolation::CheckAccessEx(
              (UIPrivilegeIsolation *)(*((_QWORD *)v21 + 58) + 864LL),
              (const struct tagUIPI_INFO *)v48,
              0LL,
              v25) )
      {
        v9 = -1073741790;
        v18 = -2147483647;
        goto LABEL_12;
      }
    }
    else
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v21 + 132, 0, 0) & 0x20000000) != 0 )
      {
        v23 = *(_QWORD *)(*((_QWORD *)v21 + 58) + 752LL);
        v26 = *(_DWORD *)(v23 + 24) & 0x10;
      }
      else
      {
        v26 = 0;
      }
      if ( v26
        || !UIPrivilegeIsolation::CheckAccessEx(
              (UIPrivilegeIsolation *)(*((_QWORD *)v21 + 58) + 864LL),
              (const struct tagUIPI_INFO *)v48,
              0LL,
              v24) )
      {
        v9 = -1073741790;
        v18 = -2147483647;
        v19 = a3;
        goto LABEL_71;
      }
    }
    if ( (unsigned int)v7 > 0x400 )
    {
      v18 = -2147483646;
      goto LABEL_12;
    }
    v49 = 0LL;
    v27 = 0;
    if ( (_DWORD)v7 )
    {
      if ( 216 * v7 && ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      v28 = 0;
      v29 = 0LL;
      v22 = a2;
      while ( (unsigned int)v29 < (unsigned int)v7 )
      {
        if ( *v22 < 0 )
          ++v28;
        v29 = (unsigned int)(v29 + 1);
        v22 += 27;
      }
      if ( v28 )
      {
        v30 = Win32AllocPoolWithQuotaZInitImpl(v29, 216LL * v28, 0x63447355u);
        v45 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v30;
        if ( !v30 )
          ExRaiseStatus(-1073741801);
        if ( v51 != (void (__fastcall *)(char *))-1LL )
        {
          BugCheckParameter4 = PtiCurrent();
          KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v30, (ULONG_PTR)BugCheckParameter4);
        }
        v32 = PtiCurrent();
        BugCheckParameter2[0] = *((_QWORD *)v32 + 48);
        *((_QWORD *)v32 + 48) = BugCheckParameter2;
        BugCheckParameter2[1] = v30;
        v51 = GreDeleteFastMutex;
      }
      v33 = (__int64 *)v45;
      v49 = v45;
      v23 = 0LL;
      while ( 1 )
      {
        v44 = v23;
        if ( (unsigned int)v23 >= a1 )
          break;
        if ( *a2 < 0 )
        {
          if ( v27 >= v28 )
          {
            v18 = -2147483645;
            v19 = a3;
            v20 = v43;
            goto LABEL_72;
          }
          RtlCopyVolatileMemory(v33, a2, 0xD8uLL);
          if ( *v33 >= 0 )
          {
            v9 = -1073741790;
            v18 = -2147483644;
            v19 = a3;
            v20 = v43;
            goto LABEL_72;
          }
          ++v27;
          v33 += 27;
          v49 = v33;
          LODWORD(v23) = v44;
        }
        v23 = (unsigned int)(v23 + 1);
        a2 += 27;
      }
      if ( v27 != v28 )
      {
        v18 = -2147483645;
        v19 = a3;
        v20 = v43;
        goto LABEL_72;
      }
    }
    v46 = v27;
    if ( a4 )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = a4 + 28;
      v55 = *(struct _GUID *)a4;
      v56 = *(_QWORD *)(a4 + 16);
      v57 = *(_DWORD *)(a4 + 24);
    }
    if ( *(_DWORD *)(W32GetUserGdiSessionState(v23) + 36) )
    {
      v18 = -2147483643;
      goto LABEL_11;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession(v35, v34) )
    {
      v9 = -1073741790;
      v18 = -2147483642;
      goto LABEL_12;
    }
    if ( a4 && (unsigned int)DrvNeedDisplayStateCheck(&v55) && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v55) )
    {
      v9 = -1071774921;
      v18 = -2147483641;
      v19 = a3;
      v20 = v43;
      goto LABEL_73;
    }
    LOBYTE(v54[0]) = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor(v54, (const struct _GUID *)&v55.Data4[4], 0x1Du, 0);
    v18 = 18;
    v19 = a3;
    v36 = xxxUserSetDisplayConfig(v27, v45, a3, 0, 0LL, 1, v52, 0LL, 0LL, v54[1], 0LL);
    v9 = v36;
    if ( v36 == -2147483643 )
    {
      v9 = -1073741789;
    }
    else if ( v36 != -1073741789 && (a3 & 0x10000) == 0 )
    {
      if ( v36 == -1071774970 )
        v9 = -2147023286;
      else
        v9 = QdcSdcTranslateStatusDefault(v36);
    }
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v54);
LABEL_71:
    v20 = v43;
LABEL_72:
    if ( v18 == 18 )
      goto LABEL_74;
    goto LABEL_73;
  }
  v18 = 0x80000000;
LABEL_11:
  v9 = -1073741823;
LABEL_12:
  v19 = a3;
  v20 = v43;
LABEL_73:
  LogDiagSDC(v46, (__int64)v45, v19, v9, 0, v18, v20, 0, 0LL);
LABEL_74:
  if ( v9 < 0 )
  {
    if ( a4 && (unsigned int)DrvNeedDisplayStateCheck(&v55) && !(unsigned int)DrvIsDisplayStateCurrent(0LL, &v55) )
      v9 = -1071774921;
  }
  else
  {
    v37 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v23, v22) + 48);
    v38 = *(__int64 (**)(void))(v37 + 3976);
    if ( v38 )
      v39 = v38();
    else
      v39 = -1073741637;
    if ( v39 >= 0 )
    {
      v40 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v37, v22) + 48) + 3984LL);
      if ( v40 )
        v40();
    }
  }
  if ( v45 )
    Win32RawLockedItemBase<tagDESKTOP,&void UserDereferenceObject(void *),1,1,1>::UnlockWorker(
      (ULONG_PTR)BugCheckParameter2,
      0);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, (__int64)v22);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return (unsigned int)v9;
}
