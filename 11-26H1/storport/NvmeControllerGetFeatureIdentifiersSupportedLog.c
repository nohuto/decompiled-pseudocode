/*
 * XREFs of NvmeControllerGetFeatureIdentifiersSupportedLog @ 0x1400CE1CC
 * Callers:
 *     NvmeAdapterFirmwareUpdateIdentifyWorker @ 0x1400D8BF0 (NvmeAdapterFirmwareUpdateIdentifyWorker.c)
 *     NvmeControllerInitPhase3 @ 0x1400F5D54 (NvmeControllerInitPhase3.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeControllerGetFeatureIdentifiersSupportedLog(union _SLIST_HEADER *a1, char a2)
{
  __int64 *ExtendedCommand; // rsi
  __int64 v6; // r8
  int DmaBuffer; // edi
  unsigned int v8; // r8d
  __int64 Pool; // rax
  _OWORD *Region; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm1
  int v14; // r8d
  __int128 v15; // [rsp+50h] [rbp-28h] BYREF

  v15 = 0LL;
  if ( (*(_BYTE *)(a1[37].Alignment + 261) & 0x20) == 0 )
    return 3221225659LL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x400u, v6, (void **)&v15, (_QWORD *)&v15 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    if ( a1[78].Region
      || (Pool = RaidAllocatePool(64LL, 1024LL, 1380147538LL, *(_QWORD *)(a1[8].Alignment + 8)),
          (a1[78].Region = Pool) != 0) )
    {
      LOBYTE(v8) = 18;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
      *(_DWORD *)(*ExtendedCommand + 4256) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*ExtendedCommand + 4252) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
      *(_OWORD *)(*ExtendedCommand + 4160) = v15;
      *(_DWORD *)(*ExtendedCommand + 4248) = 1024;
      BuildGetLogPageCommand(
        (__int64)a1,
        *ExtendedCommand + 4096,
        v8,
        0x400u,
        *((__int64 *)&v15 + 1),
        -1,
        0LL,
        0,
        *ExtendedCommand,
        ExtendedCommand[1]);
      DmaBuffer = NvmeControllerProcessCommandSync(a1, (__int64)ExtendedCommand);
    }
    else
    {
      DmaBuffer = -1073741670;
    }
  }
  Region = (_OWORD *)a1[78].Region;
  if ( DmaBuffer < 0 )
  {
    ExFreePoolWithTag(Region, 0x52436152u);
    a1[78].Region = 0LL;
  }
  else
  {
    v11 = (_OWORD *)v15;
    v12 = 8LL;
    do
    {
      *Region = *v11;
      Region[1] = v11[1];
      Region[2] = v11[2];
      Region[3] = v11[3];
      Region[4] = v11[4];
      Region[5] = v11[5];
      Region[6] = v11[6];
      Region += 8;
      v13 = v11[7];
      v11 += 8;
      *(Region - 1) = v13;
      --v12;
    }
    while ( v12 );
  }
  NvmeControllerReclaimExtendedCommand(a1, (__int64)ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 1024, v14, v15, *((__int64 *)&v15 + 1));
  return (unsigned int)DmaBuffer;
}
