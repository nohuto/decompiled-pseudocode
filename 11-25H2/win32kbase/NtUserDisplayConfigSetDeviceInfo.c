/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x14016F3A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400A038C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400A1A98 (-UnlockWorker@-$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1-Win32FreePool@@YAXP.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1400CD658 (_DeviceInfoTranslateStatusDefault.c)
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x1400CEB20 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E2330 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F7E74 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EDF8 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401AC114 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1401B9900 (-GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401CD2F0 (DrvDisplayConfigSetDeviceInfo.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(unsigned int *Src)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r12
  _DWORD *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *UserSessionState; // r14
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int *v12; // rdx
  unsigned int v13; // ebx
  struct tagTHREADINFO *v14; // rbx
  bool v15; // r9
  bool v16; // r9
  int v17; // eax
  unsigned __int64 v18; // rbx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int IsWddmConnectedSession; // eax
  int SetterTypeSize; // eax
  __int64 v25; // rcx
  unsigned int v26; // eax
  _DWORD v28[4]; // [rsp+50h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-58h] BYREF
  void (__fastcall *v30)(char *); // [rsp+70h] [rbp-48h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v31[4]; // [rsp+80h] [rbp-38h] BYREF

  LOBYTE(v31[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v31, 0LL, 0x1Eu, 0);
  v2 = v31[1];
  v3 = 0LL;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  v28[0] = 0x2000;
  v28[1] = -1;
  v28[2] = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v5, v4);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v7) = 1;
    v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v7);
  }
  v9 = v8;
  UserSessionState[3] = v8;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v9 )
      goto LABEL_9;
    *(_BYTE *)(v9 + 1708) = 1;
  }
  if ( v9 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v10);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(v11) + 32) )
  {
LABEL_10:
    v13 = -1073741823;
    goto LABEL_48;
  }
  v14 = PtiCurrent();
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v14 + 58), 0x10u)
      || !UIPrivilegeIsolation::CheckAccessEx(
            (UIPrivilegeIsolation *)(*((_QWORD *)v14 + 58) + 864LL),
            (const struct tagUIPI_INFO *)v28,
            0LL,
            v16) )
    {
      goto LABEL_47;
    }
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v14 + 132, 0, 0) & 0x20000000) != 0 )
      v17 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 58) + 752LL) + 24LL) & 0x10;
    else
      v17 = 0;
    if ( v17
      || !UIPrivilegeIsolation::CheckAccessEx(
            (UIPrivilegeIsolation *)(*((_QWORD *)v14 + 58) + 864LL),
            (const struct tagUIPI_INFO *)v28,
            0LL,
            v15) )
    {
      v3 = 0LL;
      goto LABEL_47;
    }
  }
  v12 = Src + 1;
  if ( (unsigned __int64)(Src + 1) >= MmUserProbeAddress )
    v12 = (unsigned int *)MmUserProbeAddress;
  v18 = *v12;
  if ( (unsigned int)v18 < 0x14 )
  {
    v13 = -1073741789;
    v3 = 0LL;
    goto LABEL_48;
  }
  v3 = (_DWORD *)Win32AllocPoolWithQuotaZInitImpl(MmUserProbeAddress, v18, 0x63447355u);
  if ( !v3 )
    ExRaiseStatus(-1073741801);
  if ( v30 != (void (__fastcall *)(char *))-1LL )
  {
    BugCheckParameter4 = PtiCurrent();
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v3, (ULONG_PTR)BugCheckParameter4);
  }
  v20 = PtiCurrent();
  BugCheckParameter2[0] = *((_QWORD *)v20 + 48);
  *((_QWORD *)v20 + 48) = BugCheckParameter2;
  BugCheckParameter2[1] = (ULONG_PTR)v3;
  v30 = GreDeleteFastMutex;
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlCopyVolatileMemory(v3, Src, v18);
  v3[1] = v18;
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v21) + 36) )
    goto LABEL_10;
  if ( *v3 != -19 )
  {
    IsWddmConnectedSession = UserIsWddmConnectedSession(v22, (__int64)v12);
    goto LABEL_34;
  }
  if ( !gbOSTestSigningEnabled )
  {
    if ( !(unsigned __int8)RtlIsMultiSessionSku() )
      goto LABEL_47;
    IsWddmConnectedSession = IsCurrentProcessDwm();
LABEL_34:
    if ( IsWddmConnectedSession )
      goto LABEL_35;
LABEL_47:
    v13 = -1073741790;
    goto LABEL_48;
  }
LABEL_35:
  SetterTypeSize = DispConfigTypes::GetSetterTypeSize((unsigned int)*v3);
  if ( SetterTypeSize && v3[1] == SetterTypeSize )
  {
    if ( (unsigned int)PreAllocateForPrimaryMonitorChange(v25, (__int64)v12) )
    {
      v26 = DrvDisplayConfigSetDeviceInfo(v3, v2);
      v13 = v26;
      if ( v26 == -2147483643 )
      {
        v13 = -1073741789;
      }
      else if ( v26 != -1073741789 )
      {
        v13 = DeviceInfoTranslateStatusDefault(*v3, v26);
      }
    }
    else
    {
      v13 = -1073741801;
    }
  }
  else
  {
    v13 = -1073741811;
  }
LABEL_48:
  if ( v3 )
    Win32RawLockedItemBase<DISPLAYCONFIG_DEVICE_INFO_HEADER,&void Win32FreePool(void *),1,1,1>::UnlockWorker(
      (ULONG_PTR)BugCheckParameter2,
      0);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, (__int64)v12);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v31);
  return v13;
}
