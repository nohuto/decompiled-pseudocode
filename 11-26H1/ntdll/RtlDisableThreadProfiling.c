/*
 * XREFs of RtlDisableThreadProfiling @ 0x180138DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 */

NTSTATUS __cdecl RtlDisableThreadProfiling(PVOID PerformanceDataHandle)
{
  int v2; // ebx
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[2] = PerformanceDataHandle;
  v4[0] = 0LL;
  v4[1] = 0LL;
  v2 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadCounterProfiling, v4, 0x18u);
  if ( v2 >= 0 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, PerformanceDataHandle);
  return v2;
}
