/*
 * XREFs of EtwTraceUserCreateHandle @ 0x140095724
 * Callers:
 *     HMCreateHandleForObject @ 0x140095100 (HMCreateHandleForObject.c)
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14001E448 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceUserCreateHandle(__int64 a1, int a2, int a3)
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
    McTemplateK0pqqq_EtwWriteTransfer(v7, (__int64)&UserCreateHandle, v8, a1, v9, ProcessSessionId, v11);
  }
}
