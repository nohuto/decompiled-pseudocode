/*
 * XREFs of ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A5494
 * Callers:
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800A619C (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180040630 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004C0C4 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004CA68 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180094A48 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099E1C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ??$?8V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x1800A542C (--$-8V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH_ea_1800A542C.c)
 *     ??1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A5468 (--1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800A5A10 (-StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClock::GetCommitHandle(CAnimationClock *this, unsigned int a2, void **a3)
{
  _QWORD *v6; // rdi
  void **v7; // rcx
  int SynchronizationObject; // eax
  __int64 v9; // rdx
  unsigned int LastError; // eax
  unsigned int v11; // ebx
  HANDLE CurrentProcess; // rbx
  void *v13; // rdi
  HANDLE v14; // rax
  const char *v15; // r9
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+40h] [rbp-198h] BYREF
  struct _GUID v18; // [rsp+50h] [rbp-188h] BYREF
  volatile signed __int32 *v19[42]; // [rsp+60h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  *a3 = 0LL;
  v17 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v19,
    (__int64)"GetCommitHandle");
  v19[0] = (volatile signed __int32 *)&AnimationClockLoggingTelemetry::GetCommitHandle::`vftable';
  v18 = *(struct _GUID *)((char *)this + 120);
  AnimationClockLoggingTelemetry::GetCommitHandle::StartActivity(
    (AnimationClockLoggingTelemetry::GetCommitHandle *)v19,
    &v18);
  if ( (unsigned int)(*((_DWORD *)this + 20) - 1) > 1 )
    goto LABEL_13;
  v6 = (_QWORD *)((char *)this + 112);
  if ( !wil::operator==<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(v6)
    || (wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          v7,
          0LL),
        SynchronizationObject = NtDCompositionCreateSynchronizationObject(v6),
        SynchronizationObject >= 0) )
  {
    if ( !a2 || a2 == GetCurrentProcessId() )
    {
      CurrentProcess = GetCurrentProcess();
      v13 = (void *)*v6;
      v14 = GetCurrentProcess();
      if ( !DuplicateHandle(v14, v13, CurrentProcess, a3, 0, 0, 2u) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x27B,
                      (int)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
                      v15);
        goto LABEL_10;
      }
    }
    else
    {
      SynchronizationObject = NtDCompositionDuplicateHandleToProcess(*v6, a2, a3);
      if ( SynchronizationObject < 0 )
      {
        v9 = 631LL;
        goto LABEL_9;
      }
    }
LABEL_13:
    wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v19, 0);
    v11 = 0;
    goto LABEL_14;
  }
  v9 = 623LL;
LABEL_9:
  LastError = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)v9,
                (__int64)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
                (const char *)(unsigned int)SynchronizationObject);
LABEL_10:
  v11 = LastError;
LABEL_14:
  AnimationClockLoggingTelemetry::GetCommitHandle::~GetCommitHandle(v19);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v11;
}
