/*
 * XREFs of ??R_lambda_943ebf8cb42eeb58ab3899b21541936c_@@QEBA@XZ @ 0x1805BFF3C
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_943ebf8cb42eeb58ab3899b21541936c___ @ 0x1805BC944 (_anonymous_namespace_--RunSynchronousInSTA__lambda_943ebf8cb42eeb58ab3899b21541936c___.c)
 *     _lambda_57aca0c9894c035e0240ce61f225917e_::operator() @ 0x1805BFD60 (_lambda_57aca0c9894c035e0240ce61f225917e_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028F8E4 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1802C4D80 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall _lambda_943ebf8cb42eeb58ab3899b21541936c_::operator()(__int64 a1)
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
  result = (_DWORD *)(**(__int64 (__fastcall ***)(char *, _QWORD, _QWORD))a1)(
                       (char *)v6 + *(int *)(*(_QWORD *)a1 + 8LL),
                       **(unsigned int **)(a1 + 8),
                       **(unsigned int **)(a1 + 16));
  if ( (_DWORD)result == -2147019873 )
  {
    result = *(_DWORD **)(a1 + 24);
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
