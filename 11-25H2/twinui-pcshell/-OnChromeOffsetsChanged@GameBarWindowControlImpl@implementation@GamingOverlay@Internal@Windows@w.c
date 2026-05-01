/*
 * XREFs of ?OnChromeOffsetsChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x180246580
 * Callers:
 *     ?OnChromeOffsetsChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180244DE0 (-OnChromeOffsetsChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnChromeOffsetsChanged(
        RTL_SRWLOCK *this)
{
  PVOID Ptr; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  RTL_SRWLOCK *v6; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0LL;
  wil::AcquireSRWLockExclusive(&v6, this + 22);
  Ptr = this[5].Ptr;
  if ( Ptr )
  {
    v3 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 96LL))(Ptr);
    v4 = v3;
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x172,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v3);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
    return v4;
  }
  else
  {
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
    return 0LL;
  }
}
