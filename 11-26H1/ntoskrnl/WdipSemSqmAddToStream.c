/*
 * XREFs of WdipSemSqmAddToStream @ 0x140827D00
 * Callers:
 *     WdipSemSqmLogTimeoutDataPoints @ 0x140827F6C (WdipSemSqmLogTimeoutDataPoints.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140AD59BC (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140AD7E84 (WdipSemWriteEvent.c)
 */

__int64 __fastcall WdipSemSqmAddToStream(_DWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v11[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 *v12; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v13[61]; // [rsp+58h] [rbp-A8h]
  int v14; // [rsp+260h] [rbp+160h] BYREF

  v14 = (int)a1;
  v9 = a2;
  v10 = 1;
  v11[0] = 48;
  v8 = 11;
  if ( !a3 || a2 - 1 > 8 )
    return 3221225485LL;
  v13[0] = 16LL;
  v13[2] = 4LL;
  v12 = WinSqmGlobalSession;
  v3 = 0;
  v13[4] = 4LL;
  v13[1] = &v14;
  v13[3] = &v8;
  v13[5] = &v9;
  for ( v13[6] = 4LL; v3 < a2; v13[v5] = 4LL )
  {
    v4 = 2LL * (3 * v3 + 4);
    v13[v4 - 1] = &v10;
    v13[v4] = 4LL;
    v5 = 6LL * (v3 + 2);
    v6 = 2LL * (3 * v3++ + 5);
    v13[v6 - 1] = a3;
    a3 += 4LL;
    v13[v6] = 4LL;
    a1 = v11;
    v13[v5 - 1] = v11;
  }
  return WdipSemWriteEvent(a1, &WDI_SEM_EVENT_SQM_ADD_TO_STREAM, 0LL, 3 * a2 + 4, &v12);
}
