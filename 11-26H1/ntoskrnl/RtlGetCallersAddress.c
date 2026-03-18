/*
 * XREFs of RtlGetCallersAddress @ 0x140261030
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140261920 (RtlCaptureStackBackTrace.c)
 */

USHORT __fastcall RtlGetCallersAddress(_QWORD *a1, _QWORD *a2)
{
  USHORT result; // ax
  __int64 v5; // r8
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  result = RtlCaptureStackBackTrace(2u, 2u, (PVOID *)&v6, 0LL);
  v5 = 0LL;
  if ( result )
  {
    *a1 = v6;
    if ( result >= 2u )
      v5 = *((_QWORD *)&v6 + 1);
  }
  else
  {
    *a1 = 0LL;
  }
  *a2 = v5;
  return result;
}
