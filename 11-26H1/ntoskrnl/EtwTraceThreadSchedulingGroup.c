/*
 * XREFs of EtwTraceThreadSchedulingGroup @ 0x1406C8CBC
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KiSetThreadSchedulingGroup @ 0x140203854 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceThreadSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v5[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  if ( a3 != a2 )
  {
    v5[0] = *(_DWORD *)(a1 + 1296);
    v5[1] = 0;
    v6 = a2;
    v7 = a3;
    v4[0] = v5;
    v4[1] = 24LL;
    return EtwTraceKernelEvent((int)v4, 1, 0xA0004000, 1376, 6297858);
  }
  return result;
}
