/*
 * XREFs of EtwpTraceProcessorTrace @ 0x1404D2990
 * Callers:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1404075AC (EtwpLogContextSwapEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KPRCB *__fastcall EtwpTraceProcessorTrace(__int64 a1, _QWORD *a2, struct _KTHREAD *a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rdx
  struct _KPRCB *result; // rax
  _QWORD *v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  int CycleTime; // [rsp+30h] [rbp-38h]
  unsigned int CurrentRunTime; // [rsp+34h] [rbp-34h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int128 v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-14h]

  v14 = 0;
  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  result = KeGetCurrentPrcb();
  if ( result->IdleThread != CurrentThread && (a4 & 0x1800) != 0 )
  {
    v8[0] = a1;
    v7 = *(_QWORD **)(a1 + 1080);
    v13 = a4;
    if ( !a3 )
      a3 = CurrentThread;
    CycleTime = a3[1].CycleTime;
    CurrentRunTime = a3[1].CurrentRunTime;
    v8[1] = *a2;
    v11 = v7[1];
    return (struct _KPRCB *)guard_dispatch_icall_no_overrides(*v7, v8);
  }
  return result;
}
