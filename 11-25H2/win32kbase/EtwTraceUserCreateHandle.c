/*
 * XREFs of EtwTraceUserCreateHandle @ 0x14003C7D4
 * Callers:
 *     HMCreateHandleForObject @ 0x14003B950 (HMCreateHandleForObject.c)
 *     HMAllocObjectEx @ 0x14003E880 (HMAllocObjectEx.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14003E28C (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceUserCreateHandle(int a1, char a2, char a3)
{
  __int64 CurrentProcess; // rax
  char ProcessSessionId; // al
  int v8; // ecx
  int v9; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    McTemplateK0pqqq_EtwWriteTransfer(v8, (unsigned int)&UserCreateHandle, v9, a1, a2, ProcessSessionId, a3);
  }
}
