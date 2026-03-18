/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900
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
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400FA870 (-UnlockWorker@-$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1-Win32FreePool@@YAXP.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400FB7B4 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1400FBEB8 (_DeviceInfoTranslateStatusDefault.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14011DB50 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14013DAF4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14014B830 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401C9CF0 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1401E0030 (-GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401F6B40 (DrvDisplayConfigSetDeviceInfo.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(char *Src)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r12
  _DWORD *v3; // rsi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  struct tagTHREADINFO *v17; // rbx
  bool v18; // zf
  unsigned int ULongFromUser; // eax
  SIZE_T v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  int v24; // eax
  struct tagTHREADINFO *v25; // rax
  __int64 v26; // rdx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v28; // rcx
  int IsWddmConnectedSession; // eax
  int SetterTypeSize; // eax
  unsigned int v31; // eax
  _DWORD v33[4]; // [rsp+48h] [rbp-60h] BYREF
  _DWORD *v34; // [rsp+58h] [rbp-50h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-48h] BYREF
  void (__fastcall *v36)(char *, __int64, __int64, __int64); // [rsp+70h] [rbp-38h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v37[3]; // [rsp+78h] [rbp-30h] BYREF

  LOBYTE(v37[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v37, 0LL, 0x1Eu, 0);
  v2 = v37[1];
  v3 = 0LL;
  v34 = 0LL;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  v33[0] = 0x2000;
  v33[1] = -1;
  v33[2] = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v5, v4, v6);
  v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v8;
  if ( v8 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v9, v11);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(v10) + 32) )
    goto LABEL_4;
  v17 = PtiCurrent(v13, v12);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    v18 = !tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v17 + 57), 16);
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v17 + 130, 0, 0) & 0x20000000) != 0 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)v17 + 57) + 752LL);
      v24 = *(_DWORD *)(v13 + 32) & 0x10;
    }
    else
    {
      v24 = 0;
    }
    v18 = v24 == 0;
  }
  if ( !v18
    || !UIPrivilegeIsolation::CheckAccessEx(
          (UIPrivilegeIsolation *)(*((_QWORD *)v17 + 57) + 864LL),
          (const struct tagUIPI_INFO *)v33,
          0LL) )
  {
    goto LABEL_35;
  }
  ULongFromUser = RtlReadULongFromUser(Src + 4, v12);
  v20 = ULongFromUser;
  if ( ULongFromUser < 0x14 )
  {
    v16 = -1073741789;
    goto LABEL_36;
  }
  v3 = (_DWORD *)Win32AllocPoolWithQuotaZInitImpl(v13, ULongFromUser, 0x63447355u);
  v34 = v3;
  if ( !v3 )
    ExRaiseStatus(-1073741801);
  if ( v36 != (void (__fastcall *)(char *, __int64, __int64, __int64))-1LL )
  {
    BugCheckParameter4 = PtiCurrent(v22, v21);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v3, (ULONG_PTR)BugCheckParameter4);
  }
  v25 = PtiCurrent(v22, v21);
  BugCheckParameter2[0] = *((_QWORD *)v25 + 47);
  *((_QWORD *)v25 + 47) = BugCheckParameter2;
  BugCheckParameter2[1] = (ULONG_PTR)v3;
  v36 = GreDeleteFastMutex;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(BugCheckParameter2, v26);
  ProbeForRead(Src, v20, CurrentProcessWow64Process != 0 ? 1 : 4);
  RtlCopyVolatileMemory(v3, Src, v20);
  v3[1] = v20;
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v28) + 36) )
  {
LABEL_4:
    v16 = -1073741823;
    goto LABEL_36;
  }
  if ( *v3 != -19 )
  {
    IsWddmConnectedSession = UserIsWddmConnectedSession(v13, v12, v14, v15);
    goto LABEL_23;
  }
  if ( !gbOSTestSigningEnabled )
  {
    if ( !(unsigned __int8)RtlIsMultiSessionSku() )
      goto LABEL_35;
    IsWddmConnectedSession = IsCurrentProcessDwm(v13);
LABEL_23:
    if ( IsWddmConnectedSession )
      goto LABEL_24;
LABEL_35:
    v16 = -1073741790;
    goto LABEL_36;
  }
LABEL_24:
  SetterTypeSize = DispConfigTypes::GetSetterTypeSize(*v3);
  if ( SetterTypeSize && v3[1] == SetterTypeSize )
  {
    if ( (unsigned int)PreAllocateForPrimaryMonitorChange(v13, v12, v14) )
    {
      v31 = DrvDisplayConfigSetDeviceInfo(v3, v2);
      v16 = v31;
      if ( v31 == -2147483643 )
      {
        v16 = -1073741789;
      }
      else if ( v31 != -1073741789 )
      {
        v16 = DeviceInfoTranslateStatusDefault(*v3, v31);
      }
    }
    else
    {
      v16 = -1073741801;
    }
  }
  else
  {
    v16 = -1073741811;
  }
LABEL_36:
  if ( v3 )
    Win32RawLockedItemBase<DISPLAYCONFIG_DEVICE_INFO_HEADER,&void Win32FreePool(void *),1,1,1>::UnlockWorker(
      (ULONG_PTR)BugCheckParameter2,
      0LL);
  UserSessionSwitchLeaveCritWithNonPaged(v13, v12, v14, v15);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v37);
  return v16;
}
