/*
 * XREFs of NvmeControllerGetSupportedLogPagesLog @ 0x1400CE71C
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

__int64 __fastcall NvmeControllerGetSupportedLogPagesLog(union _SLIST_HEADER *a1, char a2)
{
  __int64 *ExtendedCommand; // rsi
  __int64 v6; // r8
  int DmaBuffer; // edi
  __int64 Pool; // rax
  _OWORD *Alignment; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm1
  int v13; // r8d
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF

  v14 = 0LL;
  if ( (*(_BYTE *)(a1[37].Alignment + 261) & 0x20) == 0 )
    return 3221225659LL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x400u, v6, (void **)&v14, (_QWORD *)&v14 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    if ( a1[78].Alignment
      || (Pool = RaidAllocatePool(64LL, 1024LL, 1380147538LL, *(_QWORD *)(a1[8].Alignment + 8)),
          (a1[78].Alignment = Pool) != 0) )
    {
      *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
      *(_DWORD *)(*ExtendedCommand + 4256) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*ExtendedCommand + 4252) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
      *(_OWORD *)(*ExtendedCommand + 4160) = v14;
      *(_DWORD *)(*ExtendedCommand + 4248) = 1024;
      BuildGetLogPageCommand(
        (__int64)a1,
        *ExtendedCommand + 4096,
        0,
        0x400u,
        *((__int64 *)&v14 + 1),
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
  Alignment = (_OWORD *)a1[78].Alignment;
  if ( DmaBuffer < 0 )
  {
    ExFreePoolWithTag(Alignment, 0x52436152u);
    a1[78].Alignment = 0LL;
  }
  else
  {
    v10 = (_OWORD *)v14;
    v11 = 8LL;
    do
    {
      *Alignment = *v10;
      Alignment[1] = v10[1];
      Alignment[2] = v10[2];
      Alignment[3] = v10[3];
      Alignment[4] = v10[4];
      Alignment[5] = v10[5];
      Alignment[6] = v10[6];
      Alignment += 8;
      v12 = v10[7];
      v10 += 8;
      *(Alignment - 1) = v12;
      --v11;
    }
    while ( v11 );
  }
  NvmeControllerReclaimExtendedCommand(a1, (__int64)ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 1024, v13, v14, *((__int64 *)&v14 + 1));
  return (unsigned int)DmaBuffer;
}
