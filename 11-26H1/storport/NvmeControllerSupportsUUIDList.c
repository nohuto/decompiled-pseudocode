/*
 * XREFs of NvmeControllerSupportsUUIDList @ 0x1400C6630
 * Callers:
 *     BuildIdentifyCommandGeneric @ 0x1400C5AC0 (BuildIdentifyCommandGeneric.c)
 *     NvmeControllerIdentifyUUIDList @ 0x1400F5278 (NvmeControllerIdentifyUUIDList.c)
 *     NvmeQueryProtocolInfoCompletion @ 0x14011FFE0 (NvmeQueryProtocolInfoCompletion.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x140121494 (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeSetCommandUUIDIndex @ 0x140121F70 (NvmeSetCommandUUIDIndex.c)
 * Callees:
 *     NvmeVersionCheck @ 0x1400C6E18 (NvmeVersionCheck.c)
 */

char __fastcall NvmeControllerSupportsUUIDList(__int64 a1)
{
  char v1; // dl
  __int64 v2; // r10

  if ( *(_QWORD *)(a1 + 592) && (unsigned __int8)NvmeVersionCheck(a1, 1LL, 4LL) )
    return v1 & (*(_DWORD *)(v2 + 96) >> 9);
  else
    return 0;
}
