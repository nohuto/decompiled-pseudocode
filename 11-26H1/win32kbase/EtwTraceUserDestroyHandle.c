/*
 * XREFs of EtwTraceUserDestroyHandle @ 0x140118DB8
 * Callers:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D0E14 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1401BCC80 (HMRemoveHandleForObject.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14001E448 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceUserDestroyHandle(__int64 a1, int a2, int a3)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-28h]
  int ProcessSessionId; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess(a1);
    v11 = a3;
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    v9 = a2;
    McTemplateK0pqqq_EtwWriteTransfer(v7, (__int64)&UserDestroyHandle, v8, a1, v9, ProcessSessionId, v11);
  }
}
