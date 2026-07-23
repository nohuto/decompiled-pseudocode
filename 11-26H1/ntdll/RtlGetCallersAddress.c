/*
 * XREFs of RtlGetCallersAddress @ 0x180110F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18005BB90 (RtlCaptureStackBackTrace.c)
 */

void __cdecl RtlGetCallersAddress(PVOID *CallersAddress, PVOID *CallersCaller)
{
  USHORT v4; // ax
  void *v5; // r8
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  v4 = RtlCaptureStackBackTrace(2u, 2u, (PVOID *)&v6, 0LL);
  v5 = 0LL;
  if ( v4 )
  {
    *CallersAddress = (PVOID)v6;
    if ( v4 >= 2u )
      v5 = (void *)*((_QWORD *)&v6 + 1);
  }
  else
  {
    *CallersAddress = 0LL;
  }
  *CallersCaller = v5;
}
