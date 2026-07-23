/*
 * XREFs of MiCaptureStackTraceCallout @ 0x1402603D4
 * Callers:
 *     MiCaptureStackTraceEx @ 0x14050860C (MiCaptureStackTraceEx.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 */

__int64 __fastcall MiCaptureStackTraceCallout(__int64 a1)
{
  PVOID *v1; // r8
  ULONG v2; // edx
  ULONG v4; // ecx
  __int64 result; // rax
  ULONG BackTraceHash; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(PVOID **)a1;
  v2 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  BackTraceHash = 0;
  result = RtlCaptureStackBackTrace(v4, v2, v1, &BackTraceHash);
  *(_DWORD *)(a1 + 16) = (unsigned __int16)result;
  return result;
}
