/*
 * XREFs of ?ResolveGpuTimestamp@CComputeScribbleStopwatch@@AEAAJXZ @ 0x1801C9DC0
 * Callers:
 *     ?ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ @ 0x1801C9C9C (-ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleStopwatch::ResolveGpuTimestamp(CComputeScribbleStopwatch *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 result; // rax
  _QWORD *v7; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = 0LL;
  v2 = *((_QWORD *)this + 5);
  v8[0] = 0LL;
  v8[1] = 8LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD **))(*(_QWORD *)v2 + 64LL))(v2, 0LL, v8, &v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  else
  {
    *((_QWORD *)this + 7) = *v7;
    v5 = *((_QWORD *)this + 5);
    v9 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v5 + 72LL))(v5, 0LL, &v9);
    result = 0LL;
    *((_BYTE *)this + 64) = 1;
  }
  return result;
}
