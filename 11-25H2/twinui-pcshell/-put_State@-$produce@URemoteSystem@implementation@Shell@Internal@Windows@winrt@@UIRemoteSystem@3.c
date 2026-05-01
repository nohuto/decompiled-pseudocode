/*
 * XREFs of ?put_State@?$produce@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystem@3456@@impl@winrt@@UEAAHH@Z @ 0x180640740
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystem,winrt::Windows::Internal::Shell::IRemoteSystem>::put_State(
        __int64 a1,
        int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 + 16;
  if ( !a1 )
    v4 = 32LL;
  wil::AcquireSRWLockExclusive(&v7, (RTL_SRWLOCK *)v4);
  v5 = a1 + 24;
  if ( !a1 )
    v5 = 40LL;
  *(_DWORD *)v5 = a2;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
  return 0LL;
}
