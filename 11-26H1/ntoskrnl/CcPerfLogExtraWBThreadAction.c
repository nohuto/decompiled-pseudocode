/*
 * XREFs of CcPerfLogExtraWBThreadAction @ 0x140501F40
 * Callers:
 *     CcLogExtraWBThreadAction @ 0x140501E9C (CcLogExtraWBThreadAction.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogExtraWBThreadAction(int a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]

  if ( a1 == 2 )
  {
    v7[0] = 1;
  }
  else
  {
    if ( a1 != 3 )
      return result;
    v7[0] = 2;
  }
  v10 = a5;
  v7[1] = a2;
  v8 = a3;
  v9 = a4;
  v6[0] = v7;
  v6[1] = 32LL;
  return EtwTraceKernelEvent((int)v6, 1, 0x80020000, 5646, 5249282);
}
