/*
 * XREFs of MiLogPerfMemoryEvent @ 0x14048C8AC
 * Callers:
 *     MiLogSectionObjectEvent @ 0x14077B084 (MiLogSectionObjectEvent.c)
 *     MiLogVirtualRotateEvent @ 0x14086AC0C (MiLogVirtualRotateEvent.c)
 *     MiHandleInsertedDataVad @ 0x1409C5754 (MiHandleInsertedDataVad.c)
 *     MiLogMapFileEvent @ 0x140AD6354 (MiLogMapFileEvent.c)
 *     MiLogMemResetInfo @ 0x140B0ABB8 (MiLogMemResetInfo.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogPerfMemoryEvent(__int16 a1, unsigned int a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]

  v6 = a3;
  v7 = a4;
  v8 = 0;
  return EtwTraceKernelEvent((int)&v6, 1, a2, a1, a5 | 0x11000200u);
}
