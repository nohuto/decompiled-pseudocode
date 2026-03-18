/*
 * XREFs of ?GetPlaneResourceDesc@CDDisplaySwapChainBuffer@@UEBAJPEAUDWM_PLANE_RESOURCE_DESC@@@Z @ 0x1801B1840
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChainBuffer::GetPlaneResourceDesc(
        CDDisplaySwapChainBuffer *this,
        struct DWM_PLANE_RESOURCE_DESC *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r8
  __int64 v5; // rcx
  void (__fastcall *v6)(_QWORD *, __int128 *); // rax
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]

  v3 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 27) + 120LL))(
                   *((_QWORD *)this + 27),
                   0LL);
  v4 = v3;
  if ( !v3 )
    return 2291662854LL;
  v5 = *v3;
  v10 = 0LL;
  v11 = 0;
  v6 = *(void (__fastcall **)(_QWORD *, __int128 *))(v5 + 80);
  v8 = 0LL;
  v9 = 0LL;
  v6(v4, &v8);
  *(_QWORD *)a2 = v8;
  *((_DWORD *)a2 + 2) = v9;
  *((_DWORD *)a2 + 3) = v11;
  return 0LL;
}
