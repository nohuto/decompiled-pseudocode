/*
 * XREFs of NVMeControllerSupportsUUIDList @ 0x14000FE50
 * Callers:
 *     BuildIdentifyCommandGeneric @ 0x140019CBC (BuildIdentifyCommandGeneric.c)
 *     QueryProtocolInfoCompletion @ 0x140020C50 (QueryProtocolInfoCompletion.c)
 *     QueryProtocolInfoLogPageData @ 0x140021888 (QueryProtocolInfoLogPageData.c)
 *     SetCommandUUIDIndex @ 0x140022B04 (SetCommandUUIDIndex.c)
 *     NVMeGetControllerUUIDListIdentify @ 0x1400261A8 (NVMeGetControllerUUIDListIdentify.c)
 * Callees:
 *     NVMeVersionCheck @ 0x1400114D0 (NVMeVersionCheck.c)
 */

char __fastcall NVMeControllerSupportsUUIDList(__int64 a1)
{
  char v1; // dl
  __int64 v2; // r9

  if ( (unsigned __int8)NVMeVersionCheck(a1, 1LL, 4LL, *(_QWORD *)(a1 + 1560))
    && v2
    && (*(_DWORD *)(v2 + 96) & 0x200) != 0 )
  {
    return v1;
  }
  else
  {
    return 0;
  }
}
