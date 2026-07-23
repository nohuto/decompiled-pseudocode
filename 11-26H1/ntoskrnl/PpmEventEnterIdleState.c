/*
 * XREFs of PpmEventEnterIdleState @ 0x1402F9BA4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmEventEnterIdleState(int a1, __int16 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+40h] [rbp-28h] BYREF
  __int16 v7; // [rsp+44h] [rbp-24h]
  char v8; // [rsp+46h] [rbp-22h]
  char v9; // [rsp+47h] [rbp-21h]
  __int64 v10; // [rsp+48h] [rbp-20h]

  if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
  {
    v6 = a1;
    v7 = a2;
    v9 = 0;
    v8 = a3;
    v10 = a4;
    v5[0] = &v6;
    v5[1] = 16LL;
    return EtwTraceKernelEvent((int)v5, 1, 0x40008000u, 4665, 1538);
  }
  return result;
}
