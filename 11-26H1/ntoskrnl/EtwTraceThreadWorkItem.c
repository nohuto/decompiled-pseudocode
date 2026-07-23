/*
 * XREFs of EtwTraceThreadWorkItem @ 0x1403F0CB0
 * Callers:
 *     IopProcessWorkItem @ 0x14037F300 (IopProcessWorkItem.c)
 *     ExpWorkerThread @ 0x1403EF030 (ExpWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     ExIsSafeWorkItem @ 0x1405428A0 (ExIsSafeWorkItem.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

struct _KTHREAD *(__fastcall *__fastcall EtwTraceThreadWorkItem(
        struct _KTHREAD *(__fastcall *a1)(__int64 a1),
        __int16 a2))(__int64 a1)
{
  struct _KTHREAD *(__fastcall *result)(__int64); // rax
  struct _KTHREAD *(__fastcall *v4)(__int64); // [rsp+30h] [rbp-28h] BYREF
  _QWORD v5[2]; // [rsp+38h] [rbp-20h] BYREF

  result = IopProcessWorkItem;
  v4 = a1;
  if ( a1 != IopProcessWorkItem )
  {
    result = (struct _KTHREAD *(__fastcall *)(__int64))ExIsSafeWorkItem();
    if ( !(_DWORD)result )
    {
      v5[1] = 8LL;
      v5[0] = &v4;
      return (struct _KTHREAD *(__fastcall *)(__int64))EtwTraceKernelEvent((int)v5, 1, 0x48000000u, a2, 291510530);
    }
  }
  return result;
}
