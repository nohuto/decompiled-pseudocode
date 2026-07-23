/*
 * XREFs of EtwTracePriQDequeueWork @ 0x1403F0A98
 * Callers:
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 */

__int64 __fastcall EtwTracePriQDequeueWork(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]
  int v5; // [rsp+3Ch] [rbp-1Ch]
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF

  result = HIDWORD(xmmword_140FC0C10);
  v5 = 0;
  if ( (BYTE12(xmmword_140FC0C10) & 8) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 1296);
    v3 = a2;
    v6[0] = &v3;
    v6[1] = 12LL;
    return EtwTraceKernelEvent((int)v6, 1, 0x21000000u, 1361, 23076354);
  }
  return result;
}
