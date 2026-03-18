/*
 * XREFs of ?_GetStackTraceSum@@YAKXZ @ 0x1401B99F8
 * Callers:
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1401B9B48 (-_ShouldCaptureWerReport@@YAHK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 _GetStackTraceSum(void)
{
  unsigned int v0; // ebx
  unsigned int v1; // ebp
  ULONG v2; // eax
  unsigned __int16 v3; // di
  __int128 MemoryInformation; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+40h] [rbp-B8h]
  PVOID Callers[16]; // [rsp+50h] [rbp-A8h] BYREF

  v0 = 0;
  memset(Callers, 0, sizeof(Callers));
  v6 = 0LL;
  MemoryInformation = 0LL;
  v1 = 16;
  v2 = RtlWalkFrameChain(Callers, 0x10u, 1u);
  if ( v2 > 0x10 || (v1 = v2) != 0 )
  {
    v3 = 0;
    do
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             Callers[v3],
             MemoryWorkingSetExList|MemorySectionName,
             &MemoryInformation,
             0x18uLL,
             0LL) < 0
        || (unsigned __int64)Callers[v3] < (unsigned __int64)MemoryInformation )
      {
        v0 += LODWORD(Callers[v3]);
      }
      else
      {
        v0 += LODWORD(Callers[v3]) - MemoryInformation;
      }
      ++v3;
    }
    while ( v3 < v1 );
  }
  return v0;
}
