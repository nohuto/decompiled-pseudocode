/*
 * XREFs of ?OnChromeOffsetsChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x180237538
 * Callers:
 *     ?OnChromeOffsetsChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180235D80 (-OnChromeOffsetsChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnChromeOffsetsChanged(
        RTL_SRWLOCK *this)
{
  PVOID Ptr; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  const char *v5; // r9
  __int64 result; // rax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v7 = 0LL;
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)v7, this + 22);
  try
  {
    Ptr = this[5].Ptr;
    if ( Ptr )
    {
      v3 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 96LL))(Ptr);
      v4 = v3;
      if ( v3 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x172,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
          (const char *)(unsigned int)v3);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)v7);
      result = v4;
    }
    else
    {
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)v7);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x176,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
                           v5);
  }
  return result;
}
