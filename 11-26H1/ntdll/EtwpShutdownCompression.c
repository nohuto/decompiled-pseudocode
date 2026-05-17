/*
 * XREFs of EtwpShutdownCompression @ 0x18010DCFC
 * Callers:
 *     EtwpFreeLoggerContext @ 0x180079258 (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall EtwpShutdownCompression(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 416) )
    result = RtlFreeHeap_0();
  if ( *(_QWORD *)(a1 + 424) )
  {
    v3 = 0LL;
    return ZwFreeVirtualMemory(-1LL, a1 + 424, &v3, 0x8000LL);
  }
  return result;
}
