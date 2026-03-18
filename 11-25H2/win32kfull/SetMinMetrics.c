/*
 * XREFs of SetMinMetrics @ 0x140148B08
 * Callers:
 *     UserOnGreTextReady @ 0x140146468 (UserOnGreTextReady.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x140148114 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxInitWindowStation @ 0x1401484D8 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x140148CD8 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SetMinMetrics(struct _UNICODE_STRING *a1, __int128 *a2)
{
  __int128 *v2; // rdi
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 result; // rax
  __int128 v26; // [rsp+38h] [rbp-30h] BYREF
  int v27; // [rsp+48h] [rbp-20h]

  v27 = 0;
  v2 = a2;
  v26 = 0LL;
  if ( !a2 )
  {
    DWORD1(v26) = GetTWIPSMetricById(a1, 0x92u, -2310);
    DWORD2(v26) = GetTWIPSMetricById(a1, 0x93u, 0);
    HIDWORD(v26) = GetTWIPSMetricById(a1, 0x94u, 0);
    FastGetProfileIntFromID(a1, 23LL, 150LL);
    v2 = &v26;
    v27 = 0;
  }
  v4 = *((_DWORD *)v2 + 1);
  v5 = *((_DWORD *)v2 + 2);
  if ( v4 <= 0 )
    v4 = 0;
  *((_DWORD *)v2 + 1) = v4;
  if ( v5 <= 0 )
    v5 = 0;
  *((_DWORD *)v2 + 2) = v5;
  v6 = *((_DWORD *)v2 + 3);
  if ( v6 <= 0 )
    v6 = 0;
  *((_DWORD *)v2 + 4) &= 0xFu;
  *((_DWORD *)v2 + 3) = v6;
  v7 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  *(_DWORD *)(v7 + 2124) = v4 + 6;
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v8) + 19872);
  v10 = *(_DWORD *)(v9 + 2336) + 6;
  v12 = *(_QWORD *)(W32GetUserSessionState(v9, v11) + 19872);
  *(_DWORD *)(v12 + 2128) = v10;
  v14 = *(_QWORD *)(W32GetUserSessionState(v12, v13) + 19872);
  v15 = *((_DWORD *)v2 + 2) + *(_DWORD *)(v14 + 2124);
  v17 = *(_QWORD *)(W32GetUserSessionState(v14, v16) + 19872);
  *(_DWORD *)(v17 + 2084) = v15;
  v19 = *(_QWORD *)(W32GetUserSessionState(v17, v18) + 19872);
  v20 = *((_DWORD *)v2 + 3) + *(_DWORD *)(v19 + 2128);
  v22 = *(_QWORD *)(W32GetUserSessionState(v19, v21) + 19872);
  *(_DWORD *)(v22 + 2088) = v20;
  v23 = *((_DWORD *)v2 + 4);
  result = W32GetUserSessionState(v22, v24);
  *(_DWORD *)(*(_QWORD *)(result + 19872) + 2120LL) = v23;
  return result;
}
