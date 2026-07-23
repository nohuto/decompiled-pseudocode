/*
 * XREFs of EtwTraceWorkloadClassUpdate @ 0x14052F640
 * Callers:
 *     KiUpdateThreadHgsFeedback @ 0x140228590 (KiUpdateThreadHgsFeedback.c)
 *     KeEtwRundown @ 0x1405E7258 (KeEtwRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceWorkloadClassUpdate(__int64 a1, char a2, __int16 a3)
{
  int v4; // [rsp+30h] [rbp-28h] BYREF
  __int16 v5; // [rsp+34h] [rbp-24h]
  char v6; // [rsp+36h] [rbp-22h]
  char v7; // [rsp+37h] [rbp-21h]
  _QWORD v8[2]; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(_DWORD *)(a1 + 1296);
  v6 = a2;
  v5 = a3;
  v8[0] = &v4;
  v7 = 0;
  v8[1] = 8LL;
  return EtwTraceKernelEvent((int)v8, 1, 0xA0000100, 3961, 514);
}
