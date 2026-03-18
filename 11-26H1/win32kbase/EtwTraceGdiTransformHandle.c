/*
 * XREFs of EtwTraceGdiTransformHandle @ 0x1400581F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x14005826C (McTemplateK0ppqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceGdiTransformHandle(__int64 a1, char a2, char a3, char a4)
{
  int v7; // ebp
  __int64 CurrentProcess; // rax
  char ProcessSessionId; // al
  int v10; // edx
  int v11; // ecx
  int v12; // r8d

  v7 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess(a1);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    McTemplateK0ppqqq_EtwWriteTransfer(v11, v10, v12, v7, a2, a3, ProcessSessionId, a4);
  }
}
