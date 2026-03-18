/*
 * XREFs of NtUserSetSysColors @ 0x1401E9AA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@X$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x14006C6D4 (--1-$Win32RawOptionalLockedItemAlways@X$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x14006D78C (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@@Z @ 0x1400E11C0 (-CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU-$Win32RawOptionalLockedItemAlways@UtagPROFIL.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400FB7B4 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0?$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@PEAKP6AXPEAX@Z@Z @ 0x140192C24 (--0-$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@PEAKP6AXPEAX@Z@Z.c)
 *     xxxSetSysColors @ 0x1401B7328 (xxxSetSysColors.c)
 *     ??1?$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@XZ @ 0x1401C4598 (--1-$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@XZ.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401C9CF0 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserSetSysColors(unsigned int a1, volatile void *a2, volatile void *a3, char a4)
{
  __int64 v6; // r15
  char *v7; // r14
  unsigned int *v8; // rsi
  _QWORD *UserSessionState; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  struct tagTHREADINFO *v14; // rbx
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // eax
  __int64 CurrentProcessWow64Process; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // ecx
  char *v30; // rax
  int v31; // ecx
  unsigned int *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-78h] BYREF
  int v37; // [rsp+58h] [rbp-70h]
  _QWORD v38[3]; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v39[4]; // [rsp+80h] [rbp-48h] BYREF

  v6 = a1;
  v7 = 0LL;
  v8 = 0LL;
  BugCheckParameter2 = 0xFFFFFFFF00002000uLL;
  v37 = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, (_DWORD)a2, (_DWORD)a3);
  v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v10;
  if ( v10 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v11, v13);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  v14 = PtiCurrent(v12, v11);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    v15 = !tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v14 + 57), 8);
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v14 + 130, 0, 0) & 0x20000000) != 0 )
      v24 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 57) + 752LL) + 32LL) & 8;
    else
      v24 = 0;
    v15 = v24 == 0;
  }
  if ( v15
    && UIPrivilegeIsolation::CheckAccessEx(
         (UIPrivilegeIsolation *)(*((_QWORD *)v14 + 57) + 864LL),
         (const struct tagUIPI_INFO *)&BugCheckParameter2,
         0LL) )
  {
    if ( (_DWORD)v6 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v16);
      ProbeForRead(a2, 4 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
      v28 = PsGetCurrentProcessWow64Process(v27, v26);
      ProbeForRead(a3, 4 * v6, v28 != 0 ? 1 : 4);
      v30 = (char *)Win32AllocPoolWithQuotaZInitImpl(v29, 4 * v6, 0x72637355u);
      v7 = v30;
      if ( !v30 )
        ExRaiseStatus(-1073741801);
      RtlCopyVolatileMemory(v30, (const void *)a2, 4 * v6);
      v32 = (unsigned int *)Win32AllocPoolWithQuotaZInitImpl(v31, 4 * v6, 0x76637355u);
      v8 = v32;
      if ( !v32 )
        ExRaiseStatus(-1073741801);
      RtlCopyVolatileMemory(v32, (const void *)a3, 4 * v6);
    }
    Win32RawLockedItemNoCleanup<unsigned long,0>::Win32RawLockedItemNoCleanup<unsigned long,0>(v39, (__int64)v7);
    Win32RawLockedItemNoCleanup<unsigned long,0>::Win32RawLockedItemNoCleanup<unsigned long,0>(v38, (__int64)v8);
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)&BugCheckParameter2);
    CreateProfileUserName(&BugCheckParameter2);
    v18 = xxxSetSysColors(v33, v6, v7, v8, a4);
    Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)&BugCheckParameter2);
    Win32RawLockedItemNoCleanup<unsigned long,0>::~Win32RawLockedItemNoCleanup<unsigned long,0>(v38, v34);
    Win32RawLockedItemNoCleanup<unsigned long,0>::~Win32RawLockedItemNoCleanup<unsigned long,0>(v39, v35);
    if ( v7 )
      GreDeleteFastMutex(v7, v19, v21, v22);
    if ( v8 )
      GreDeleteFastMutex((char *)v8, v19, v21, v22);
  }
  else
  {
    v18 = 0;
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v20, v19, v21, v22);
  return v18;
}
