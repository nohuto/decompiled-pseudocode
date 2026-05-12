/*
 * XREFs of NvmeNamespaceGetInstanceId @ 0x140106D58
 * Callers:
 *     NvmeNamespaceQueryIdIrp @ 0x1401A8648 (NvmeNamespaceQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RtlStringCchPrintfW @ 0x1400470E4 (RtlStringCchPrintfW.c)
 *     StorBuildNVMeSerialNumber @ 0x140047788 (StorBuildNVMeSerialNumber.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaFixupIds @ 0x1401BE268 (RaFixupIds.c)
 */

__int64 __fastcall NvmeNamespaceGetInstanceId(__int64 a1, wchar_t **a2)
{
  wchar_t *Pool; // rbx
  unsigned int v5; // r11d
  _BYTE v7[128]; // [rsp+20h] [rbp-98h] BYREF

  memset_0(v7, 0, sizeof(v7));
  Pool = (wchar_t *)RaidAllocatePool(256LL, 128LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    if ( (unsigned int)StorBuildNVMeSerialNumber(a1, 0x80u, (__int64)v7) )
      RtlStringCchPrintfW(Pool, 0x40uLL, L"%hs", v7);
    RaFixupIds(Pool, 0LL, 64LL);
  }
  else
  {
    v5 = -1073741801;
  }
  *a2 = Pool;
  return v5;
}
