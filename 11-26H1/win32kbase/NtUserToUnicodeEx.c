/*
 * XREFs of NtUserToUnicodeEx @ 0x140193C60
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400D0658 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     xxxToUnicodeEx @ 0x1400E74C0 (xxxToUnicodeEx.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400FA870 (-UnlockWorker@-$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1-Win32FreePool@@YAXP.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400FB7B4 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall NtUserToUnicodeEx(
        unsigned int a1,
        unsigned int a2,
        volatile void *a3,
        volatile void *a4,
        int a5,
        int a6,
        __int64 a7)
{
  int v10; // r14d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  SIZE_T v24; // r15
  int v25; // ecx
  __int64 *p_Src; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v30; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+78h] [rbp-180h] BYREF
  void (__fastcall *v34)(char *, __int64, __int64, __int64); // [rsp+88h] [rbp-170h]
  __int64 v35; // [rsp+90h] [rbp-168h]
  __int64 v36; // [rsp+98h] [rbp-160h]
  __int64 Src; // [rsp+A0h] [rbp-158h] BYREF
  char v38[256]; // [rsp+B0h] [rbp-148h] BYREF

  v36 = a7;
  memset(v38, 0, sizeof(v38));
  Src = 0LL;
  v10 = 0;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v12, v11, v13);
  v15 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v15;
  if ( v15 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v16, v18);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  PtiCurrent(v17, v16);
  if ( a5 > 0 )
  {
    v35 = 1LL;
    ProbeForRead(a3, 1uLL, 1u);
    RtlCopyVolatileMemory(v38, (const void *)a3, 0x100uLL);
    v24 = 2LL * a5;
    ProbeForWrite(a4, v24, 2u);
    if ( a5 >= 4 )
    {
      p_Src = (__int64 *)Win32AllocPoolWithQuotaZInitImpl(v25, v24, 0x62757355u);
      if ( !p_Src )
        ExRaiseStatus(-1073741801);
      v10 = 1;
      if ( v34 != (void (__fastcall *)(char *, __int64, __int64, __int64))-1LL )
      {
        BugCheckParameter4 = PtiCurrent(v28, v27);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)p_Src, (ULONG_PTR)BugCheckParameter4);
      }
      v30 = PtiCurrent(v28, v27);
      BugCheckParameter2[0] = *((_QWORD *)v30 + 47);
      *((_QWORD *)v30 + 47) = BugCheckParameter2;
      BugCheckParameter2[1] = (ULONG_PTR)p_Src;
      v34 = GreDeleteFastMutex;
    }
    else
    {
      p_Src = &Src;
    }
    v19 = xxxToUnicodeEx(a1, a2, v38, (__int64)p_Src, a5, 0, a6, v36);
    memmove((void *)a4, p_Src, v24);
    if ( v10 )
      Win32RawLockedItemBase<DISPLAYCONFIG_DEVICE_INFO_HEADER,&void Win32FreePool(void *),1,1,1>::UnlockWorker(
        (ULONG_PTR)BugCheckParameter2,
        0LL);
  }
  else
  {
    v19 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v21, v20, v22, v23);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return v19;
}
