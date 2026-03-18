/*
 * XREFs of EtwTraceUserDestroyHandle @ 0x14003C844
 * Callers:
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401614EC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMRemoveHandleForObject @ 0x140161860 (HMRemoveHandleForObject.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14003E28C (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceUserDestroyHandle(int a1, char a2, char a3)
{
  __int64 CurrentProcess; // rax
  char ProcessSessionId; // al
  int v8; // ecx
  int v9; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    McTemplateK0pqqq_EtwWriteTransfer(v8, (unsigned int)&UserDestroyHandle, v9, a1, a2, ProcessSessionId, a3);
  }
}
