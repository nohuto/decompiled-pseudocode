/*
 * XREFs of ?Close@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00UDisableCausality@67@@WRL@Microsoft@@UEAAJXZ @ 0x18001C590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::DisableCausality>::Close(
        volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  unsigned int v2; // ebx
  __int64 v3; // rdx
  signed __int32 v4; // ecx
  unsigned __int32 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 14);
  v2 = 0;
  v6 = -2;
  _InterlockedCompareExchange((volatile signed __int32 *)&v6, v1, -2);
  v3 = v6;
  if ( v6 - 1 <= 3 && (_DWORD)v3 == _InterlockedCompareExchange(a1 + 14, 4, v6) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 144LL))(
      a1,
      v3,
      4294967294LL,
      4LL);
  }
  else
  {
    v4 = *((_DWORD *)a1 + 14);
    v6 = -2;
    _InterlockedCompareExchange((volatile signed __int32 *)&v6, v4, -2);
    if ( v6 != 4 )
    {
      v2 = -2147483635;
      RoOriginateError(2147483661LL, 0LL);
    }
  }
  return v2;
}
