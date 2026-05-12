/*
 * XREFs of NvmeControllerGetCloudSSDLog @ 0x1400CDD20
 * Callers:
 *     StorpTelemetrySendNvmeControllerHealthInfo @ 0x1400C1A44 (StorpTelemetrySendNvmeControllerHealthInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeControllerGetCloudSSDLog(union _SLIST_HEADER *a1)
{
  __int64 *ExtendedCommand; // rsi
  __int64 v3; // r8
  int DmaBuffer; // edi
  unsigned int v6; // r8d
  __int64 Pool; // rax
  _OWORD *Region; // rax
  _OWORD *v9; // rcx
  __int64 v10; // r8
  __int128 v11; // xmm1
  int v12; // r8d
  __int128 v13; // [rsp+50h] [rbp-18h] BYREF

  v13 = 0LL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x200u, v3, (void **)&v13, (_QWORD *)&v13 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    if ( a1[79].Region
      || (Pool = RaidAllocatePool(64LL, 512LL, 1380147538LL, *(_QWORD *)(a1[8].Alignment + 8)),
          (a1[79].Region = Pool) != 0) )
    {
      LOBYTE(v6) = -64;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x40u;
      *(_WORD *)(*ExtendedCommand + 4252) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
      *(_OWORD *)(*ExtendedCommand + 4160) = v13;
      *(_DWORD *)(*ExtendedCommand + 4248) = 512;
      BuildGetLogPageCommand(
        (__int64)a1,
        *ExtendedCommand + 4096,
        v6,
        0x200u,
        *((__int64 *)&v13 + 1),
        -1,
        0LL,
        0,
        *ExtendedCommand,
        ExtendedCommand[1]);
      DmaBuffer = NvmeControllerProcessCommandSync(a1, (__int64)ExtendedCommand);
      if ( DmaBuffer >= 0 )
      {
        Region = (_OWORD *)a1[79].Region;
        v9 = (_OWORD *)v13;
        v10 = 4LL;
        do
        {
          *Region = *v9;
          Region[1] = v9[1];
          Region[2] = v9[2];
          Region[3] = v9[3];
          Region[4] = v9[4];
          Region[5] = v9[5];
          Region[6] = v9[6];
          Region += 8;
          v11 = v9[7];
          v9 += 8;
          *(Region - 1) = v11;
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      DmaBuffer = -1073741670;
    }
  }
  a1[8].Region |= 0x4000000000uLL;
  NvmeControllerReclaimExtendedCommand(a1, (__int64)ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 512, v12, v13, *((__int64 *)&v13 + 1));
  return (unsigned int)DmaBuffer;
}
