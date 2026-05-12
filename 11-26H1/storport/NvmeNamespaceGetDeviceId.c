/*
 * XREFs of NvmeNamespaceGetDeviceId @ 0x140106390
 * Callers:
 *     NvmeNamespaceQueryIdIrp @ 0x1401A8648 (NvmeNamespaceQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidRemoveTrailingBlanks @ 0x14003C21C (RaidRemoveTrailingBlanks.c)
 *     RtlStringCchPrintfW @ 0x1400470E4 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaFixupIds @ 0x1401BE268 (RaFixupIds.c)
 */

__int64 __fastcall NvmeNamespaceGetDeviceId(__int64 a1, wchar_t **a2)
{
  wchar_t *Pool; // rbx
  __int64 v5; // rdx
  unsigned int v6; // r11d
  _OWORD v8[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+50h] [rbp-28h]

  Pool = (wchar_t *)RaidAllocatePool(256LL, 128LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL);
    v8[0] = *(_OWORD *)(v5 + 24);
    v8[1] = *(_OWORD *)(v5 + 40);
    v9 = *(_QWORD *)(v5 + 56);
    RaidRemoveTrailingBlanks((__int64)v8, 41);
    RtlStringCchPrintfW(Pool, 0x40uLL, L"NVME\\%hs&Prod_%hs", "Disk", v8);
    RaFixupIds(Pool, 0LL, 64LL);
  }
  else
  {
    v6 = -1073741801;
  }
  *a2 = Pool;
  return v6;
}
