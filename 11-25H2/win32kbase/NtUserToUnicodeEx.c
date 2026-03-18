/*
 * XREFs of NtUserToUnicodeEx @ 0x140176C30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400A038C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     xxxToUnicodeEx @ 0x1400A03C0 (xxxToUnicodeEx.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E2330 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_W32THREADNONPAGED@@@Z @ 0x1401ABF70 (-_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall NtUserToUnicodeEx(
        unsigned int a1,
        unsigned int a2,
        const void *a3,
        volatile void *a4,
        int a5,
        char a6,
        __int64 a7)
{
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rsi
  __int64 v14; // rdx
  struct _W32THREADNONPAGED *CurrentThreadWin32Thread; // rbx
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  SIZE_T v20; // rsi
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 *v26; // rax
  struct tagTHREADINFO *v27; // rax
  int v29; // [rsp+40h] [rbp-1B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-1B0h] BYREF
  _QWORD *v31; // [rsp+50h] [rbp-1A8h]
  __int64 v32; // [rsp+58h] [rbp-1A0h]
  void *Src; // [rsp+70h] [rbp-188h]
  volatile void *Address; // [rsp+78h] [rbp-180h]
  __int64 v35; // [rsp+88h] [rbp-170h]
  _QWORD v36[2]; // [rsp+A0h] [rbp-158h] BYREF
  char v37[256]; // [rsp+B0h] [rbp-148h] BYREF

  Address = a4;
  v35 = a7;
  v10 = 0LL;
  v36[0] = 0LL;
  Src = 0LL;
  v29 = 0;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)&BugCheckParameter2);
  UserSessionState = W32GetUserSessionState(v12, v11);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = (struct _W32THREADNONPAGED *)PsGetCurrentThreadWin32Thread();
    KeEnterCriticalRegion();
    _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_(
      *(struct _FAST_ERESOURCE **)UserSessionState,
      CurrentThreadWin32Thread);
    v16 = *(_QWORD *)CurrentThreadWin32Thread;
    if ( v16 )
      *(_BYTE *)(v16 + 1708) = 1;
    else
      v16 = 0LL;
  }
  else
  {
    LOBYTE(v14) = 1;
    v16 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v14);
  }
  *(_QWORD *)(UserSessionState + 24) = v16;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v16 )
      goto LABEL_11;
    *(_BYTE *)(v16 + 1708) = 1;
  }
  if ( v16 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 19688, v17);
    DestroyDeferredUnlockObjectAssignmentList((_QWORD *)(UserSessionState + 19744));
    DestroyDeferredUnlockObjectAssignmentList((_QWORD *)(UserSessionState + 19728));
  }
LABEL_11:
  PsGetCurrentThreadWin32Thread();
  if ( a5 > 0 )
  {
    RtlCopyVolatileMemory(v37, a3, 0x100uLL);
    v20 = 2LL * a5;
    ProbeForWrite(Address, v20, 2u);
    if ( a5 >= 4 )
    {
      v22 = (_QWORD *)Win32AllocPoolWithQuotaZInitImpl(v21, v20, 0x62757355u);
      Src = v22;
      if ( !v22 )
        ExRaiseStatus(-1073741801);
      v29 = 1;
      if ( v32 != -1 )
      {
        BugCheckParameter4 = PtiCurrent();
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)&BugCheckParameter2, (ULONG_PTR)v22, (ULONG_PTR)BugCheckParameter4);
      }
      v24 = (__int64 *)PsGetCurrentThreadWin32Thread();
      if ( v24 )
        v25 = *v24;
      else
        v25 = 0LL;
      BugCheckParameter2 = *(_QWORD *)(v25 + 384);
      *(_QWORD *)(v25 + 384) = &BugCheckParameter2;
      v31 = v22;
      v32 = (__int64)GreDeleteFastMutex;
    }
    else
    {
      v22 = v36;
      Src = v36;
    }
    v18 = xxxToUnicodeEx(a1, a2, v37, (__int64)v22, a5, a6, v35);
    memmove((void *)Address, Src, v20);
    if ( v29 )
    {
      if ( v32 == -1 )
      {
        v27 = PtiCurrent();
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)&BugCheckParameter2, 0LL, (ULONG_PTR)v27);
      }
      v26 = (__int64 *)PsGetCurrentThreadWin32Thread();
      if ( v26 )
        v10 = *v26;
      *(_QWORD *)(v10 + 384) = BugCheckParameter2;
      if ( v31 )
        ((void (*)(void))v32)();
      v32 = -1LL;
    }
  }
  else
  {
    v18 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v19);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)&BugCheckParameter2);
  return v18;
}
