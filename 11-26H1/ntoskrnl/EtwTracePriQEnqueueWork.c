/*
 * XREFs of EtwTracePriQEnqueueWork @ 0x140383468
 * Callers:
 *     KeInsertPriQueue @ 0x140383270 (KeInsertPriQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTracePriQEnqueueWork(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  _QWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF

  result = HIDWORD(xmmword_140FC0C10);
  if ( (BYTE12(xmmword_140FC0C10) & 8) == 0 )
  {
    v6 = *(_DWORD *)(a1 + 1296);
    v5 = a2;
    v8[0] = &v5;
    v7 = a3;
    v8[1] = 16LL;
    return EtwTraceKernelEvent((int)v8, 1, 0x21000000u, 1359, a4 != 0 ? 6299138 : 6292994);
  }
  return result;
}
