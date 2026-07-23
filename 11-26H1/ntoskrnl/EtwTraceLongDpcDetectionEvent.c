/*
 * XREFs of EtwTraceLongDpcDetectionEvent @ 0x140445D90
 * Callers:
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceLongDpcDetectionEvent(int a1, char a2)
{
  int v3; // [rsp+30h] [rbp-28h] BYREF
  char v4; // [rsp+34h] [rbp-24h]
  __int16 v5; // [rsp+35h] [rbp-23h]
  char v6; // [rsp+37h] [rbp-21h]
  _QWORD v7[2]; // [rsp+38h] [rbp-20h] BYREF

  v5 = 0;
  v6 = 0;
  v3 = a1;
  v4 = a2;
  v7[0] = &v3;
  v7[1] = 8LL;
  return EtwTraceKernelEvent((int)v7, 1, 0x20040000u, 3958, 5245442);
}
