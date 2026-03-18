/*
 * XREFs of SetThreadBasePriority @ 0x140189260
 * Callers:
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x140181FFC (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     NtUserRegisterManipulationThread @ 0x1401E8180 (NtUserRegisterManipulationThread.c)
 *     SetThreadPriority @ 0x14021C2D0 (SetThreadPriority.c)
 *     IVWorkerThread @ 0x14021F9FC (IVWorkerThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall SetThreadBasePriority(PETHREAD Thread, int a2)
{
  _QWORD SystemInformation[2]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]

  v7 = 0;
  SystemInformation[0] = PsGetThreadProcessId(Thread);
  SystemInformation[1] = PsGetThreadId(Thread);
  v6 = a2;
  return ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, SystemInformation, 0x18uLL) >= 0;
}
