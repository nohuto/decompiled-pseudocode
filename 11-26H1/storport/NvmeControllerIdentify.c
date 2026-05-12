/*
 * XREFs of NvmeControllerIdentify @ 0x1400F5094
 * Callers:
 *     NvmeAdapterFirmwareUpdateIdentifyWorker @ 0x1400D8BF0 (NvmeAdapterFirmwareUpdateIdentifyWorker.c)
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

__int64 __fastcall NvmeControllerIdentify(union _SLIST_HEADER *a1)
{
  __int64 ExtendedCommand; // rsi
  __int64 v3; // r8
  int DmaBuffer; // edi
  __int64 v6; // rcx
  void *v7; // rax
  void *Alignment; // rax
  int v9; // r8d
  void *Src[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)Src = 0LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x1000u, v3, Src, &Src[1], 0);
  if ( DmaBuffer >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
    *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    *(void **)(*(_QWORD *)ExtendedCommand + 4160LL) = Src[0];
    *(void **)(*(_QWORD *)ExtendedCommand + 4168LL) = Src[1];
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 4096;
    v6 = *(_QWORD *)ExtendedCommand;
    v7 = Src[1];
    *(_BYTE *)(v6 + 4096) = 6;
    *(_DWORD *)(v6 + 4100) = 0;
    *(_QWORD *)(v6 + 4120) = v7;
    *(_BYTE *)(v6 + 4136) = 1;
    DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand);
    if ( DmaBuffer >= 0 )
    {
      Alignment = (void *)a1[37].Alignment;
      if ( Alignment
        || (Alignment = (void *)RaidAllocatePool(64LL, 4096LL, 1380147538LL, *(_QWORD *)(a1[8].Alignment + 8)),
            (a1[37].Alignment = (unsigned __int64)Alignment) != 0) )
      {
        memmove(Alignment, Src[0], 0x1000uLL);
      }
      else
      {
        DmaBuffer = -1073741670;
      }
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 4096, v9, Src[0], (__int64)Src[1]);
  return (unsigned int)DmaBuffer;
}
