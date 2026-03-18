/*
 * XREFs of EtwTraceGdiCreateHandle @ 0x14003C908
 * Callers:
 *     HmgInsertObjectInternal @ 0x14001F910 (HmgInsertObjectInternal.c)
 *     HmgAllocFast @ 0x1401C5500 (HmgAllocFast.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14003E28C (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceGdiCreateHandle(int a1, char a2, char a3)
{
  __int64 CurrentProcess; // rax
  char ProcessSessionId; // al
  int v8; // ecx
  int v9; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    McTemplateK0pqqq_EtwWriteTransfer(v8, (unsigned int)&GdiCreateHandle, v9, a1, a2, ProcessSessionId, a3);
  }
}
