/*
 * XREFs of EtwTracePriQEnqueueFailed @ 0x1405335EC
 * Callers:
 *     KeInsertPriQueue @ 0x140383270 (KeInsertPriQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTracePriQEnqueueFailed(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // eax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  _QWORD v7[2]; // [rsp+40h] [rbp-28h] BYREF

  result = HIDWORD(xmmword_140FC0C10);
  v6 = 0;
  if ( (BYTE12(xmmword_140FC0C10) & 8) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 1296);
    v4 = a2;
    v5 = v3;
    v7[1] = 12LL;
    v7[0] = &v4;
    return EtwTraceKernelEvent((int)v7, 1, 0x21000000u, 1360, 6292994);
  }
  return result;
}
