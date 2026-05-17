/*
 * XREFs of RtlpHpPerHeapStackTraceInitialize @ 0x18014F590
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x180043620 (RtlpHpMetadataAlloc.c)
 */

__int64 __fastcall RtlpHpPerHeapStackTraceInitialize(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = RtlpHpEnvHandle;
  v4 = RtlpHpMetadataAlloc(0x20uLL, 0x20uLL, 0, &v6);
  result = 0LL;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_DWORD *)(v4 + 20) = 0;
    result = 1LL;
    *a3 = v4;
  }
  return result;
}
