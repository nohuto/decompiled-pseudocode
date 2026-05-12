/*
 * XREFs of SetPrpFromBuffer @ 0x1400C6E88
 * Callers:
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 *     NvmeControllerSyncHostTime @ 0x1400D0D28 (NvmeControllerSyncHostTime.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D6F6C (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeNamespaceDsmWriteZeroes @ 0x140103E38 (NvmeNamespaceDsmWriteZeroes.c)
 *     ScsiToNVMeCommand @ 0x140116B04 (ScsiToNVMeCommand.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019FB54 (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401BCE2C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetPrpFromBuffer(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, __int64 a6)
{
  unsigned int v6; // eax
  unsigned int v7; // r9d
  __int64 v9; // rax

  if ( (a3 & 0xFFF) != 0 )
    return 0LL;
  v6 = 0;
  if ( !a4 )
    return 0LL;
  *(_QWORD *)(a2 + 24) = a3;
  v7 = (unsigned int)(a4 + 4095) >> 12;
  if ( v7 == 1 )
  {
    *(_QWORD *)(a2 + 32) = 0LL;
    return 1LL;
  }
  else
  {
    if ( v7 == 2 )
    {
      v9 = a3 + 4096;
    }
    else
    {
      do
        *a5++ = a3 + (++v6 << 12);
      while ( v6 < v7 - 1 );
      v9 = a6;
    }
    *(_QWORD *)(a2 + 32) = v9;
    return v7;
  }
}
