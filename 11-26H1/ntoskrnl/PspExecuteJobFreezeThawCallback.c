/*
 * XREFs of PspExecuteJobFreezeThawCallback @ 0x1404B4BC0
 * Callers:
 *     <none>
 * Callees:
 *     PspGetNextJobProcess @ 0x1409FF594 (PspGetNextJobProcess.c)
 *     PspChangeProcessExecutionState @ 0x140ADB89C (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PspExecuteJobFreezeThawCallback(__int64 a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  struct _KPROCESS *v5; // r9
  struct _KPROCESS *v6; // rax
  struct _KPROCESS *v7; // rbx
  int v8; // eax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct _KPROCESS *)((__int64 (__fastcall *)(__int64, struct _KTHREAD *, __int128 *, struct _KPROCESS *))PspGetNextJobProcess)(
                               a1,
                               CurrentThread,
                               &v10,
                               v5);
    v7 = v6;
    if ( !v6 )
      break;
    v8 = PspChangeProcessExecutionState(v6);
    if ( v8 < 0 )
      *a2 = v8;
    v5 = v7;
    a1 = v4;
  }
  return 0LL;
}
