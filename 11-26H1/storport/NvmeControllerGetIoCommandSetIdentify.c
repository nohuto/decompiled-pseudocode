/*
 * XREFs of NvmeControllerGetIoCommandSetIdentify @ 0x1400F3F00
 * Callers:
 *     NvmeAdapterFirmwareUpdateIdentifyWorker @ 0x1400D8BF0 (NvmeAdapterFirmwareUpdateIdentifyWorker.c)
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     BuildIdentifyCommandGeneric @ 0x1400C5AC0 (BuildIdentifyCommandGeneric.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeControllerGetIoCommandSetIdentify(union _SLIST_HEADER *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 ExtendedCommand; // r14
  int DmaBuffer; // esi
  __int64 v7; // r9
  unsigned __int64 v8; // r15
  __int64 Pool; // rax
  int v10; // r8d
  int v11; // [rsp+20h] [rbp-58h]
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF

  v12 = 0LL;
  v2 = 0LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x1000u, v3, (void **)&v12, (_QWORD *)&v12 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    v8 = v12;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
    *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
    *(_OWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = __PAIR128__(*((unsigned __int64 *)&v12 + 1), v8);
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 4096;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    BuildIdentifyCommandGeneric(
      (__int64)a1,
      *(_QWORD *)ExtendedCommand + 4096LL,
      6,
      v7,
      v11,
      0,
      *((__int64 *)&v12 + 1),
      -1,
      0);
    DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand);
    if ( DmaBuffer >= 0 )
    {
      if ( a1[37].Region
        || (Pool = RaidAllocatePool(64LL, 4096LL, 1380147538LL, *(_QWORD *)(a1[8].Alignment + 8)),
            (a1[37].Region = Pool) != 0) )
      {
        do
        {
          *(_BYTE *)(v2 + a1[37].Region) = *(_BYTE *)(v8 + v2);
          ++v2;
        }
        while ( v2 < 4 );
        *(_DWORD *)(a1[37].Region + 4) = *(_DWORD *)(v8 + 4);
        *(_QWORD *)(a1[37].Region + 8) = *(_QWORD *)(v8 + 8);
      }
      else
      {
        DmaBuffer = -1073741670;
      }
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 4096, v10, v12, *((__int64 *)&v12 + 1));
  return (unsigned int)DmaBuffer;
}
