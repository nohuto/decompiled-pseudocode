/*
 * XREFs of SepGetStackTraceHash @ 0x140260450
 * Callers:
 *     SepLogLpacAccessFailure @ 0x1404EFB5C (SepLogLpacAccessFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x140728420 (ZwQueryVirtualMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

ULONG __fastcall SepGetStackTraceHash(ULONG *a1)
{
  unsigned int v2; // esi
  ULONG result; // eax
  unsigned __int16 v4; // bx
  int v5; // ecx
  ULONG v6; // ecx
  ULONG BackTraceHash; // [rsp+30h] [rbp-79h] BYREF
  __int128 MemoryInformation; // [rsp+38h] [rbp-71h] BYREF
  __int64 v9; // [rsp+48h] [rbp-61h]
  PVOID BackTrace[16]; // [rsp+50h] [rbp-59h] BYREF

  BackTraceHash = 0;
  memset_0(BackTrace, 0, sizeof(BackTrace));
  v9 = 0LL;
  MemoryInformation = 0LL;
  v2 = 16;
  RtlCaptureStackBackTrace(2u, 0x10u, BackTrace, &BackTraceHash);
  result = RtlWalkFrameChain(BackTrace, 0x10u, 1u);
  if ( result > 0x10 || (v2 = result) != 0 )
  {
    v4 = 0;
    do
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BackTrace[v4],
             MemoryImageInformation,
             &MemoryInformation,
             0x18uLL,
             0LL) < 0
        || (unsigned __int64)BackTrace[v4] < (unsigned __int64)MemoryInformation )
      {
        v5 = (int)BackTrace[v4];
      }
      else
      {
        v5 = LODWORD(BackTrace[v4]) - MemoryInformation;
      }
      v6 = BackTraceHash + v5;
      result = ++v4;
      BackTraceHash = v6;
    }
    while ( v4 < v2 );
  }
  else
  {
    v6 = BackTraceHash;
  }
  *a1 = v6;
  return result;
}
