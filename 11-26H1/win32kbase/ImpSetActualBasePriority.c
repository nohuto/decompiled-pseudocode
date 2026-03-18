/*
 * XREFs of ImpSetActualBasePriority @ 0x1400C0550
 * Callers:
 *     ImpWorkerRoutine @ 0x1400BEB90 (ImpWorkerRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ImpSetActualBasePriority(PETHREAD Thread)
{
  _QWORD SystemInformation[2]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+34h] [rbp-14h]

  v5 = 0;
  SystemInformation[0] = PsGetThreadProcessId(Thread);
  v4 = 7;
  SystemInformation[1] = PsGetThreadId(Thread);
  return ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, SystemInformation, 0x18uLL);
}
