/*
 * XREFs of RtlDisableThreadProfiling @ 0x180139050
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlDisableThreadProfiling(__int64 a1)
{
  int v1; // ebx
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[2] = a1;
  v3[0] = 0LL;
  v3[1] = 0LL;
  v1 = NtSetInformationThread(-2LL, 32LL, v3, 24LL);
  if ( v1 >= 0 )
    RtlFreeHeap_0();
  return (unsigned int)v1;
}
