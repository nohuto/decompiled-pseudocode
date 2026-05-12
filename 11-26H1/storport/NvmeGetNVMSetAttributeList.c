/*
 * XREFs of NvmeGetNVMSetAttributeList @ 0x1400FE8C0
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeGetNVMSetAttributeList(union _SLIST_HEADER *a1)
{
  unsigned __int64 Alignment; // rbp
  __int64 ExtendedCommand; // rsi
  __int64 v4; // r8
  int DmaBuffer; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int8 *v9; // r14
  __int64 Region; // rax
  __int64 v11; // r8
  _OWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF

  Alignment = a1[37].Alignment;
  v12[0] = 0LL;
  if ( (*(_DWORD *)(Alignment + 96) & 4) == 0 || !*(_WORD *)(Alignment + 338) )
    return 3221225659LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x1000u, v4, (void **)v12, (_QWORD *)v12 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
    *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
    *(_OWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = v12[0];
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 4096;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    v7 = *(_QWORD *)ExtendedCommand;
    v8 = *((_QWORD *)&v12[0] + 1);
    v9 = *(unsigned __int8 **)&v12[0];
    *(_BYTE *)(v7 + 4096) = 6;
    *(_DWORD *)(v7 + 4100) = 0;
    *(_QWORD *)(v7 + 4120) = v8;
    *(_BYTE *)(v7 + 4136) = 4;
    *(_WORD *)(v7 + 4140) = 1;
    DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand);
    if ( DmaBuffer >= 0 )
    {
      Region = a1[66].Region;
      if ( Region
        || (Region = RaidAllocatePool(
                       64LL,
                       (*(unsigned __int16 *)(Alignment + 338) + 1LL) << 7,
                       1380147538LL,
                       *(_QWORD *)(a1[8].Alignment + 8)),
            (a1[66].Region = Region) != 0) )
      {
        memmove((void *)(Region + 128), v9 + 128, (unsigned __int64)*v9 << 7);
      }
      else
      {
        DmaBuffer = -1073741670;
      }
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((__int64)a1, 0x1000u, v11, *(__int64 *)&v12[0], *((__int64 *)&v12[0] + 1));
  return (unsigned int)DmaBuffer;
}
