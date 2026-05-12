/*
 * XREFs of NvmeControllerGetHealthInfoLog @ 0x1400CE460
 * Callers:
 *     StorpTelemetrySendNvmeControllerHealthInfo @ 0x1400C1A44 (StorpTelemetrySendNvmeControllerHealthInfo.c)
 *     NvmeControllerInitPhase3 @ 0x1400F5D54 (NvmeControllerInitPhase3.c)
 *     NvmeNamespaceDiskIsWritableIoctl @ 0x1401A53BC (NvmeNamespaceDiskIsWritableIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeControllerGetHealthInfoLog(union _SLIST_HEADER *a1, char a2)
{
  __int64 v4; // r8
  __int64 *ExtendedCommand; // r14
  int DmaBuffer; // esi
  unsigned int v8; // r8d
  __int64 Pool; // rax
  _OWORD *v10; // rdi
  __int64 v11; // rcx
  _OWORD *Alignment; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  int v15; // r8d
  __int128 Source2; // [rsp+50h] [rbp-28h] BYREF

  Source2 = 0LL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x200u, v4, (void **)&Source2, (_QWORD *)&Source2 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    if ( a1[79].Alignment
      || (Pool = RaidAllocatePool(64LL, 512LL, 1380147538LL, *(_QWORD *)(a1[8].Alignment + 8)),
          (a1[79].Alignment = Pool) != 0) )
    {
      LOBYTE(v8) = 2;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
      *(_DWORD *)(*ExtendedCommand + 4256) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*ExtendedCommand + 4252) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
      *(_OWORD *)(*ExtendedCommand + 4160) = Source2;
      *(_DWORD *)(*ExtendedCommand + 4248) = 512;
      BuildGetLogPageCommand(
        (__int64)a1,
        *ExtendedCommand + 4096,
        v8,
        0x200u,
        *((__int64 *)&Source2 + 1),
        -1,
        0LL,
        0,
        *ExtendedCommand,
        ExtendedCommand[1]);
      DmaBuffer = NvmeControllerProcessCommandSync(a1, (__int64)ExtendedCommand);
      if ( DmaBuffer >= 0 )
      {
        v10 = (_OWORD *)Source2;
        if ( (_QWORD)Source2 )
        {
          if ( RtlCompareMemory(&unk_1401593F0, (const void *)Source2, 0x200uLL) == 512 )
            a1[8].Region |= 0x400000uLL;
          v11 = *(unsigned __int8 *)v10;
          v10 = (_OWORD *)Source2;
          a1[8].Region = ((v11 & 0xFFFFFFFFFFFFFFF8uLL) << 25) ^ (a1[8].Region ^ ((v11 & 0xFFFFFFFFFFFFFFF8uLL) << 25)) & 0xFFFFFFFFEFFFFFFFuLL;
        }
        Alignment = (_OWORD *)a1[79].Alignment;
        v13 = 4LL;
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
          v14 = v10[7];
          v10 += 8;
          *(Alignment - 1) = v14;
          --v13;
        }
        while ( v13 );
      }
    }
    else
    {
      DmaBuffer = -1073741670;
    }
  }
  a1[8].Region |= 0x200000uLL;
  NvmeControllerReclaimExtendedCommand(a1, (__int64)ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 512, v15, Source2, *((__int64 *)&Source2 + 1));
  return (unsigned int)DmaBuffer;
}
