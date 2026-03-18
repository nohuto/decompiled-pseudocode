/*
 * XREFs of NtUserSetDisplayConfig @ 0x1401E82B0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x14006D78C (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400D0658 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400FB7B4 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1400FC0B4 (_QdcSdcTranslateStatusDefault.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UDISPLAYCONFIG_PATH_INFO_INTERNAL@@$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400FF4F0 (-UnlockWorker@-$Win32RawLockedItemBase@UDISPLAYCONFIG_PATH_INFO_INTERNAL@@$1-Win32FreePool@@YAXP.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14013DAF4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14014B830 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     LogDiagSDC @ 0x14014FCB0 (LogDiagSDC.c)
 *     DrvNeedDisplayStateCheck @ 0x140186E8C (DrvNeedDisplayStateCheck.c)
 *     DrvIsDisplayStateCurrent @ 0x1401986B0 (DrvIsDisplayStateCurrent.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401C9CF0 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(unsigned int a1, __int64 *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r14
  int v10; // esi
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  struct tagTHREADINFO *v22; // rbx
  __int64 *v23; // rdx
  __int64 *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  unsigned int v28; // r15d
  __int64 v29; // rax
  unsigned int v30; // r14d
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v32; // ebx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v38; // rax
  __int64 *v39; // r15
  unsigned int v40; // r12d
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // eax
  __int64 (*v47)(void); // rax
  int v48; // eax
  void (*v49)(void); // rax
  __int64 v51; // [rsp+60h] [rbp-D8h]
  unsigned int v52; // [rsp+78h] [rbp-C0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v53; // [rsp+88h] [rbp-B0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v54; // [rsp+90h] [rbp-A8h]
  unsigned int v55; // [rsp+98h] [rbp-A0h]
  int v56; // [rsp+ACh] [rbp-8Ch]
  struct _GUID v57; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-78h]
  int v59; // [rsp+C8h] [rbp-70h]
  __int64 v60; // [rsp+D0h] [rbp-68h]
  __int64 v61; // [rsp+D8h] [rbp-60h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+E0h] [rbp-58h] BYREF
  void (__fastcall *v63)(char *, __int64, __int64, __int64); // [rsp+F0h] [rbp-48h]
  __int64 *Src; // [rsp+148h] [rbp+10h]

  Src = a2;
  v5 = a4;
  v53 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)0xFFFFFFFF00002000LL;
  LODWORD(v54) = 0;
  v7 = 0LL;
  v61 = 0LL;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  v52 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  v9 = v8 * KeQueryTimeIncrement();
  v51 = v9;
  v10 = -1073741811;
  v56 = -1073741811;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v12, v11, v13);
  v15 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v15;
  if ( v15 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v16, v18);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(v17) + 32) )
  {
    v10 = -1073741823;
    v21 = 0x80000000;
LABEL_61:
    v29 = v51;
    v28 = a3;
    goto LABEL_62;
  }
  v22 = PtiCurrent(v20, v19);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v22 + 57), 16)
      || !UIPrivilegeIsolation::CheckAccessEx(
            (UIPrivilegeIsolation *)(*((_QWORD *)v22 + 57) + 864LL),
            (const struct tagUIPI_INFO *)&v53,
            0LL) )
    {
      v21 = -2147483647;
      goto LABEL_60;
    }
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v22 + 130, 0, 0) & 0x20000000) != 0 )
    {
      v24 = *(__int64 **)(*((_QWORD *)v22 + 57) + 752LL);
      v27 = v24[4] & 0x10;
    }
    else
    {
      v27 = 0;
    }
    if ( v27
      || !UIPrivilegeIsolation::CheckAccessEx(
            (UIPrivilegeIsolation *)(*((_QWORD *)v22 + 57) + 864LL),
            (const struct tagUIPI_INFO *)&v53,
            0LL) )
    {
      v10 = -1073741790;
      v21 = -2147483647;
      v28 = a3;
      v29 = v9;
      goto LABEL_57;
    }
  }
  if ( a1 > 0x400 )
  {
    v21 = -2147483646;
    goto LABEL_61;
  }
  v60 = 0LL;
  v30 = 0;
  v55 = 0;
  if ( a1 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v24, v23);
    ProbeForRead(a2, 216LL * a1, CurrentProcessWow64Process != 0 ? 1 : 4);
    v32 = 0;
    v33 = 0;
    v23 = a2;
    v25 = 216LL;
    while ( 1 )
    {
      v34 = a1;
      if ( v33 >= a1 )
        break;
      if ( *v23 < 0 )
        ++v32;
      ++v33;
      v23 += 27;
    }
    if ( v32 )
    {
      v7 = Win32AllocPoolWithQuotaZInitImpl(v33, 216LL * v32, 0x63447355u);
      v61 = v7;
      if ( !v7 )
        ExRaiseStatus(-1073741801);
      if ( v63 != (void (__fastcall *)(char *, __int64, __int64, __int64))-1LL )
      {
        BugCheckParameter4 = PtiCurrent(v36, v35);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v7, (ULONG_PTR)BugCheckParameter4);
      }
      v38 = PtiCurrent(v36, v35);
      BugCheckParameter2[0] = *((_QWORD *)v38 + 47);
      *((_QWORD *)v38 + 47) = BugCheckParameter2;
      BugCheckParameter2[1] = v7;
      v63 = GreDeleteFastMutex;
      v34 = a1;
      v25 = 216LL;
    }
    v24 = Src;
    v39 = (__int64 *)v7;
    v60 = v7;
    v40 = 0;
    while ( v40 < v34 )
    {
      if ( *v24 < 0 )
      {
        if ( v30 >= v32 )
          goto LABEL_31;
        RtlCopyVolatileMemory(v39, v24, 0xD8uLL);
        if ( *v39 >= 0 )
        {
          v10 = -1073741790;
          v21 = -2147483644;
          v5 = a4;
          v28 = a3;
          v29 = v51;
          goto LABEL_57;
        }
        v55 = ++v30;
        v25 = 216LL;
        v39 += 27;
        v60 = (__int64)v39;
        v24 = Src;
      }
      ++v40;
      v24 += 27;
      Src = v24;
      v34 = a1;
    }
    if ( v30 != v32 )
    {
LABEL_31:
      v21 = -2147483645;
      v5 = a4;
      v28 = a3;
      v29 = v51;
      goto LABEL_57;
    }
    v5 = a4;
  }
  v52 = v30;
  if ( v5 )
  {
    v41 = PsGetCurrentProcessWow64Process(v24, v23);
    ProbeForRead((volatile void *)v5, 0x1CuLL, v41 != 0 ? 1 : 4);
    v57 = *(struct _GUID *)v5;
    v58 = *(_QWORD *)(v5 + 16);
    v59 = *(_DWORD *)(v5 + 24);
  }
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v24) + 36) )
  {
    v10 = -1073741823;
    v21 = -2147483643;
    goto LABEL_61;
  }
  if ( !(unsigned int)UserIsWddmConnectedSession(v43, v42, v44, v45) )
  {
    v21 = -2147483642;
LABEL_60:
    v10 = -1073741790;
    goto LABEL_61;
  }
  if ( v5 && (unsigned int)DrvNeedDisplayStateCheck(&v57) && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v57) )
  {
    v10 = -1071774921;
    v21 = -2147483641;
    goto LABEL_61;
  }
  LOBYTE(v53) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v53, (const struct _GUID *)&v57.Data4[4], 0x1Du, 0);
  v21 = 18;
  v28 = a3;
  v46 = xxxUserSetDisplayConfig(v30, v7, a3, 0, 0LL, 1, a5, 0LL, 0LL, v54, 0LL);
  v10 = v46;
  if ( v46 == -2147483643 )
  {
    v10 = -1073741789;
  }
  else if ( v46 != -1073741789 && (a3 & 0x10000) == 0 )
  {
    if ( v46 == -1071774970 )
      v10 = -2147023286;
    else
      v10 = QdcSdcTranslateStatusDefault(v46);
  }
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v53);
  v29 = v51;
LABEL_57:
  if ( v21 != 18 )
LABEL_62:
    LogDiagSDC(v52, v7, v28, (unsigned int)v10, 0, v21, v29, 0, 0LL);
  if ( v10 < 0 )
  {
    if ( v5 && (unsigned int)DrvNeedDisplayStateCheck(&v57) && !(unsigned int)DrvIsDisplayStateCurrent(0LL, &v57) )
      v10 = -1071774921;
  }
  else
  {
    v24 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v24) + 48);
    v47 = (__int64 (*)(void))v24[441];
    if ( v47 )
      v48 = v47();
    else
      v48 = -1073741637;
    if ( v48 >= 0 )
    {
      v24 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v24) + 48);
      v49 = (void (*)(void))v24[442];
      if ( v49 )
        v49();
    }
  }
  if ( v7 )
    Win32RawLockedItemBase<DISPLAYCONFIG_PATH_INFO_INTERNAL,&void Win32FreePool(void *),1,1,1>::UnlockWorker(
      (ULONG_PTR)BugCheckParameter2,
      0LL);
  UserSessionSwitchLeaveCritWithNonPaged((__int64)v24, (__int64)v23, v25, v26);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return (unsigned int)v10;
}
