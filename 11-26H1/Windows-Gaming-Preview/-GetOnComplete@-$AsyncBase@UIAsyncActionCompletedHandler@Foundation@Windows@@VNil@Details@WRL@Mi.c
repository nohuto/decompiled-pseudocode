/*
 * XREFs of ?GetOnComplete@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00UDisableCausality@67@@WRL@Microsoft@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z @ 0x18001E1B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::DisableCausality>::GetOnComplete(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  int v6; // ett
  __int64 v7; // rcx
  __int64 v8; // rcx
  signed __int32 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a2 = 0LL;
  v9 = -2;
  _InterlockedCompareExchange(&v9, *(_DWORD *)(a1 + 56), -2);
  if ( v9 == 4 )
  {
    v4 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
    return v4;
  }
  else
  {
    result = *(unsigned int *)(a1 + 32);
    while ( (_DWORD)result )
    {
      v6 = result;
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), result + 1, result);
      if ( v6 == (_DWORD)result )
      {
        v7 = *(_QWORD *)(a1 + 24);
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        *a2 = *(_QWORD *)(a1 + 24);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) == 1 )
        {
          v8 = *(_QWORD *)(a1 + 24);
          if ( v8 )
          {
            *(_QWORD *)(a1 + 24) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          }
        }
        return v4;
      }
    }
  }
  return result;
}
