/*
 * XREFs of NvmeControllerIdentifyUUIDList @ 0x1400F5278
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     BuildIdentifyCommandGeneric @ 0x1400C5AC0 (BuildIdentifyCommandGeneric.c)
 *     NvmeControllerSupportsUUIDList @ 0x1400C6630 (NvmeControllerSupportsUUIDList.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeControllerIdentifyUUIDList(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v2; // rcx
  __int64 ExtendedCommand; // rsi
  __int64 v5; // r8
  int DmaBuffer; // edi
  __int64 v7; // r9
  const void *v8; // rbp
  void *Alignment; // rax
  int v10; // r8d
  int v11; // [rsp+20h] [rbp-58h]
  __int128 Src; // [rsp+50h] [rbp-28h] BYREF

  Src = 0LL;
  if ( !NvmeControllerSupportsUUIDList((__int64)a1) )
    return 3221225659LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(v2);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x1000u, v5, (void **)&Src, (_QWORD *)&Src + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    v8 = (const void *)Src;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
    *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
    *(_OWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = __PAIR128__(
                                                         *((unsigned __int64 *)&Src + 1),
                                                         (unsigned __int64)v8);
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 4096;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    BuildIdentifyCommandGeneric(
      (__int64)a1,
      *(_QWORD *)ExtendedCommand + 4096LL,
      23,
      v7,
      v11,
      0,
      *((__int64 *)&Src + 1),
      0,
      0);
    DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand);
    if ( DmaBuffer >= 0 )
    {
      Alignment = (void *)a1[66].Alignment;
      if ( Alignment
        || (Alignment = (void *)RaidAllocatePool(64LL, 4096LL, 1380147538LL, *(_QWORD *)(a1[8].Alignment + 8)),
            (a1[66].Alignment = (unsigned __int64)Alignment) != 0) )
      {
        memmove(Alignment, v8, 0x1000uLL);
      }
      else
      {
        DmaBuffer = -1073741670;
      }
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 4096, v10, Src, *((__int64 *)&Src + 1));
  return (unsigned int)DmaBuffer;
}
