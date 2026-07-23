/*
 * XREFs of MiLogPerfMemoryEvent @ 0x1404863EC
 * Callers:
 *     MiLogSectionObjectEvent @ 0x14077DED8 (MiLogSectionObjectEvent.c)
 *     MiLogVirtualRotateEvent @ 0x140870FEC (MiLogVirtualRotateEvent.c)
 *     MiHandleInsertedDataVad @ 0x140996734 (MiHandleInsertedDataVad.c)
 *     MiLogMapFileEvent @ 0x140AD3354 (MiLogMapFileEvent.c)
 *     MiLogMemResetInfo @ 0x140B0C304 (MiLogMemResetInfo.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
