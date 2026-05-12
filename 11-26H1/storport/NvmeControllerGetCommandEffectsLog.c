/*
 * XREFs of NvmeControllerGetCommandEffectsLog @ 0x1400CDF84
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
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeControllerGetCommandEffectsLog(union _SLIST_HEADER *a1, char a2)
{
  __int64 *ExtendedCommand; // rsi
  __int64 v6; // r8
  int DmaBuffer; // edi
  unsigned int v8; // r8d
  __int64 Pool; // rax
  void *Alignment; // rcx
  int v11; // r8d
  __int128 Src; // [rsp+50h] [rbp-28h] BYREF

  Src = 0LL;
  if ( (*(_BYTE *)(a1[37].Alignment + 261) & 2) == 0 )
    return 3221225659LL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x1000u, v6, (void **)&Src, (_QWORD *)&Src + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    if ( a1[77].Alignment
      || (Pool = RaidAllocatePool(64LL, 4096LL, 1380147538LL, *(_QWORD *)(a1[8].Alignment + 8)),
          (a1[77].Alignment = Pool) != 0) )
    {
      LOBYTE(v8) = 5;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
      *(_DWORD *)(*ExtendedCommand + 4256) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*ExtendedCommand + 4252) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
      *(_OWORD *)(*ExtendedCommand + 4160) = Src;
      *(_DWORD *)(*ExtendedCommand + 4248) = 4096;
      BuildGetLogPageCommand(
        (__int64)a1,
        *ExtendedCommand + 4096,
        v8,
        0x1000u,
        *((__int64 *)&Src + 1),
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
  Alignment = (void *)a1[77].Alignment;
  if ( DmaBuffer < 0 )
  {
    ExFreePoolWithTag(Alignment, 0x52436152u);
    a1[77].Alignment = 0LL;
  }
  else
  {
    memmove(Alignment, (const void *)Src, 0x1000uLL);
  }
  NvmeControllerReclaimExtendedCommand(a1, (__int64)ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 4096, v11, Src, *((__int64 *)&Src + 1));
  return (unsigned int)DmaBuffer;
}
