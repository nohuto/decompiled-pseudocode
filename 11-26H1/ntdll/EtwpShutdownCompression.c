/*
 * XREFs of EtwpShutdownCompression @ 0x18010D84C
 * Callers:
 *     EtwpFreeLoggerContext @ 0x180067A78 (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 */

LOGICAL __fastcall EtwpShutdownCompression(__int64 a1)
{
  void *v1; // r8
  LOGICAL result; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(void **)(a1 + 416);
  if ( v1 )
    result = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( *(_QWORD *)(a1 + 424) )
  {
    RegionSize = 0LL;
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a1 + 424), &RegionSize, 0x8000u);
  }
  return result;
}
