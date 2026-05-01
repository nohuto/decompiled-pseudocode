/*
 * XREFs of ??R_lambda_cee785af8d302cd9df31740eee0ba185_@@QEBA@XZ @ 0x1805C0164
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_cee785af8d302cd9df31740eee0ba185___ @ 0x1805BCBC8 (_anonymous_namespace_--RunSynchronousInSTA__lambda_cee785af8d302cd9df31740eee0ba185___.c)
 *     _lambda_9817d0d27ecc98a2fb26c2c5eeb40406_::operator() @ 0x1805BFFE4 (_lambda_9817d0d27ecc98a2fb26c2c5eeb40406_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028F8E4 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1802C4D80 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall _lambda_cee785af8d302cd9df31740eee0ba185_::operator()(_QWORD *a1)
{
  int v2; // eax
  _DWORD *result; // rax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CPinnedList *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = CTaskbandPin_CreateInstance(&v6);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3BB,
      (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)v2,
      v4);
  result = (_DWORD *)(*(__int64 (__fastcall **)(char *))*a1)((char *)v6 + *(int *)(*a1 + 8LL));
  if ( (_DWORD)result == -2147019873 )
  {
    result = (_DWORD *)a1[1];
    *result = -2147019873;
  }
  else if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3BF,
      (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)result,
      v4);
  }
  if ( v6 )
    return (_DWORD *)winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v6);
  return result;
}
