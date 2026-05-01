/*
 * XREFs of ?SetImageLocation@UwpWindowWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x1801B6DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x1801B6E68 (-SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapper::SetImageLocation(__int64 a1, __int128 *a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  v4 = *(_QWORD *)(a1 - 320);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    v7 = *a2;
    UwpWindowWrapper::SetImageLocationNoLock(a1 - 608, &v7);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x39,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
                           v5);
  }
  return result;
}
