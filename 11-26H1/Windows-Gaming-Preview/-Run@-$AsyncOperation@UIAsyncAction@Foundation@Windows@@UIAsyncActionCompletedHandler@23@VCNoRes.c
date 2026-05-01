/*
 * XREFs of ?Run@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x18002E5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AfterExecute@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x180030034 (-_AfterExecute@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::DisableCausality>::Run(
        __int64 a1)
{
  signed __int32 v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int32 v9; // [rsp+40h] [rbp+10h] BYREF
  signed __int32 v10; // [rsp+48h] [rbp+18h] BYREF

  v9 = 0;
  v10 = -2;
  _InterlockedCompareExchange(&v10, *(_DWORD *)(a1 - 144), -2);
  if ( v10 )
  {
    v2 = *(_DWORD *)(a1 - 144);
    v10 = -2;
    _InterlockedCompareExchange(&v10, v2, -2);
    if ( v10 != 3 )
      goto LABEL_6;
    _InterlockedCompareExchange((volatile signed __int32 *)&v9, *(_DWORD *)(a1 - 140), v9);
    v3 = *(_QWORD *)(a1 - 152);
    if ( v3 )
      SetRestrictedErrorInfo(v3);
    v4 = v9;
    if ( (v9 & 0x80000000) == 0 )
    {
LABEL_6:
      v4 = 2147943623LL;
      v9 = -2147023673;
    }
  }
  else
  {
    v4 = v9;
  }
  v5 = a1 - 208;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v5 + 256));
  if ( (_DWORD)result == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v5 + 264) + 8LL))(
           *(_QWORD *)(v5 + 264),
           1LL,
           v4,
           v5 + 288);
    if ( v7 >= 0 && *(_BYTE *)(v5 + 297) )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 280), 0xFFFFFFFF);
      if ( (_DWORD)result != 1 )
        return result;
      v8 = *(unsigned int *)(v5 + 284);
    }
    else
    {
      v8 = (unsigned int)v7;
    }
    return Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::DisableCausality>::_AfterExecute(
             v5,
             v8);
  }
  return result;
}
