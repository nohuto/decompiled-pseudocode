/*
 * XREFs of EtwTraceDpcEnqueueEvent @ 0x140531CDC
 * Callers:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void (__fastcall *__fastcall EtwTraceDpcEnqueueEvent(
        __int64 a1,
        void (__fastcall *a2)(__int64 a1, __int64 a2, __int64 a3),
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7))(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall *result)(__int64, __int64, __int64); // rax
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+38h] [rbp-38h]
  int v10; // [rsp+3Ch] [rbp-34h]
  int v11; // [rsp+40h] [rbp-30h]
  char v12; // [rsp+44h] [rbp-2Ch]
  __int16 v13; // [rsp+45h] [rbp-2Bh]
  char v14; // [rsp+47h] [rbp-29h]
  __int64 v15; // [rsp+48h] [rbp-28h]
  _QWORD v16[2]; // [rsp+50h] [rbp-20h] BYREF

  result = EtwpApcPoolDpc;
  v13 = 0;
  v14 = 0;
  if ( a2 != EtwpApcPoolDpc )
  {
    v11 = a5;
    v12 = a6;
    v13 = 0;
    v14 = 0;
    v15 = a7;
    v8 = a1;
    v9 = a3;
    v10 = a4;
    v16[0] = &v8;
    v16[1] = 32LL;
    return (void (__fastcall *)(__int64, __int64, __int64))EtwTraceKernelEvent((int)v16, 1, 0x20040000u, 3940, 6299138);
  }
  return result;
}
