/*
 * XREFs of ?GetDisplayRect@@YA?AVRect@Foundation@Windows@@PEAUIImmersiveMonitor@@@Z @ 0x1802B96CC
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18069558C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float *__fastcall GetDisplayRect(float *a1, __int64 *a2)
{
  __int64 v2; // rax
  int v4; // eax
  float *result; // rax
  int v6; // r9d
  int v7; // ecx
  int v8; // edx
  int v9[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *a2;
  *(_OWORD *)v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, int *))(v2 + 72))(a2, v9);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4D,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
      (const char *)(unsigned int)v4,
      v9[0]);
  result = a1;
  v6 = v9[1];
  v7 = v9[2] - v9[0];
  v8 = v9[3] - v9[1];
  *a1 = (float)v9[0];
  a1[1] = (float)v6;
  a1[2] = (float)v7;
  a1[3] = (float)v8;
  return result;
}
