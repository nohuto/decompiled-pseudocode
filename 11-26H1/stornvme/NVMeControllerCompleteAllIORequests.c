/*
 * XREFs of NVMeControllerCompleteAllIORequests @ 0x140016A30
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140024790 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     NVMePendingIoCheck @ 0x140011C30 (NVMePendingIoCheck.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x14001679C (NVMeCompleteSubmissionQueueRequests.c)
 *     WaitUntilAllAdminCommandsAreInSubmssionQueue @ 0x1400194B4 (WaitUntilAllAdminCommandsAreInSubmssionQueue.c)
 */

__int64 __fastcall NVMeControllerCompleteAllIORequests(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int i; // edi

  StorPortExtendedFunction(81LL, a1, 10000LL, a4);
  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 330);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 936) + 208LL * i++,
          *(unsigned __int16 *)(a1 + 328),
          0,
          1,
          0,
          a2) )
  {
    ;
  }
  if ( !(unsigned __int8)WaitUntilAllAdminCommandsAreInSubmssionQueue(a1) || *(_WORD *)(a1 + 976) )
    *(_DWORD *)(a1 + 4064) |= 0x2000u;
  if ( *(_QWORD *)(a1 + 368) )
    NVMeCompleteSubmissionQueueRequests(a1, a1 + 336, *(unsigned __int16 *)(a1 + 324), 0, 1, 0, a2);
  return NVMePendingIoCheck(a1);
}
