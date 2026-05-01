/*
 * XREFs of ?put_PointerActivationPolicy@UwpWindowWrapperBase@@UEAAJW4PointerActivationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180112C10
 * Callers:
 *     <none>
 * Callees:
 *     ?PushPointerActivationPolicyToWindow@UwpWindowWrapperBase@@AEAAXXZ @ 0x180112C7C (-PushPointerActivationPolicyToWindow@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::put_PointerActivationPolicy(__int64 a1, int a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+30h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 272);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    *(_DWORD *)(a1 + 224) = a2;
    UwpWindowWrapperBase::PushPointerActivationPolicyToWindow((UwpWindowWrapperBase *)(a1 - 8));
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x48B,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v5);
  }
  return result;
}
