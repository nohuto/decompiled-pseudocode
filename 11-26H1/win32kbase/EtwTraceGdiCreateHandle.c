/*
 * XREFs of EtwTraceGdiCreateHandle @ 0x140020094
 * Callers:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14001E448 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceGdiCreateHandle(__int64 a1, int a2, int a3)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-28h]
  int ProcessSessionId; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    v11 = a3;
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    v9 = a2;
    McTemplateK0pqqq_EtwWriteTransfer(v7, (__int64)&GdiCreateHandle, v8, a1, v9, ProcessSessionId, v11);
  }
}
