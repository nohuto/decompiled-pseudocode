/*
 * XREFs of ?OnExclusiveModeStateChanged@MPCInputRouter@@UEAAJEK_K@Z @ 0x1800FFE00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCInputRouter::OnExclusiveModeStateChanged(MPCInputRouter *this, char a2, __int32 a3, __int64 a4)
{
  *((_BYTE *)this + 96) = a2 != 0;
  _InterlockedExchange((volatile __int32 *)this + 25, a3);
  _InterlockedExchange64((volatile __int64 *)this + 13, a4);
  (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(MPCInputRouter *), char *, __int64))(**((_QWORD **)this + 24)
                                                                                            + 152LL))(
    *((_QWORD *)this + 24),
    lambda_ec705bf725d52d27b1686ede0253a48a_::_lambda_invoker_cdecl_,
    (char *)this - 640,
    4LL);
  return 0LL;
}
