/*
 * XREFs of RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x140008850
 * Callers:
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1400075C0 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1400626F8 (RaidAdapterHwFirmwareDownloadIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareGetInfoFromMiniport(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // edx
  __int64 v7; // rcx
  char v8; // al

  v6 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, a3, a4);
  if ( v6 >= 0 )
  {
    v7 = *(unsigned int *)(a3 + 44);
    if ( *(_DWORD *)(v7 + a3) == 2 && *(_DWORD *)(v7 + a3 + 4) == 24 )
    {
      v8 = *(_BYTE *)(a1 + 110);
      *(_DWORD *)(a1 + 5428) = 2;
      *(_BYTE *)(a1 + 110) = v8 ^ (v8 ^ (2 * *(_BYTE *)(v7 + a3 + 12))) & 2;
    }
    else
    {
      *(_DWORD *)(a1 + 5428) = 1;
    }
  }
  return (unsigned int)v6;
}
