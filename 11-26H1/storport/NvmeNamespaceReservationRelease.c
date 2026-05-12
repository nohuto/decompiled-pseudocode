/*
 * XREFs of NvmeNamespaceReservationRelease @ 0x14010DF2C
 * Callers:
 *     NvmeNamespacePersistentReserveOutIoctl @ 0x140107C84 (NvmeNamespacePersistentReserveOutIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeNamespaceReservationRelease(__int64 a1, _BYTE *a2, char a3, unsigned __int8 a4)
{
  union _SLIST_HEADER *v5; // rcx
  unsigned int v9; // ebp
  __int64 ExtendedCommand; // rsi
  __int64 v11; // r8
  int DmaBuffer; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp+8h]

  v5 = *(union _SLIST_HEADER **)(a1 + 16);
  v18 = 0LL;
  v9 = 0;
  ExtendedCommand = NvmeControllerGetExtendedCommand(v5);
  if ( ExtendedCommand )
  {
    v9 = 8;
    DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), 8u, v11, (void **)&v18, (_QWORD *)&v18 + 1, 0);
    if ( DmaBuffer >= 0 )
    {
      HIBYTE(v19) = *a2;
      BYTE6(v19) = a2[1];
      BYTE5(v19) = a2[2];
      BYTE4(v19) = a2[3];
      BYTE3(v19) = a2[4];
      BYTE2(v19) = a2[5];
      BYTE1(v19) = a2[6];
      LOBYTE(v19) = a2[7];
      *(_QWORD *)v18 = v19;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4216LL) = a1;
      *(_OWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = v18;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 8;
      v13 = *(_QWORD *)ExtendedCommand;
      v14 = *((_QWORD *)&v18 + 1);
      *(_DWORD *)(v13 + 4100) = *(_DWORD *)(a1 + 56);
      *(_BYTE *)(v13 + 4137) = a3;
      v15 = *(_DWORD *)(v13 + 4136) & 0xFFFFFFF7;
      *(_QWORD *)(v13 + 4120) = v14;
      *(_BYTE *)(v13 + 4096) = 21;
      *(_DWORD *)(v13 + 4136) = v15 ^ (a4 ^ (unsigned __int8)v15) & 7;
      DmaBuffer = NvmeControllerProcessCommandSync(*(PVOID *)(a1 + 16), ExtendedCommand);
    }
  }
  else
  {
    DmaBuffer = -1073741670;
  }
  NvmeControllerReclaimExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16), ExtendedCommand);
  if ( (_QWORD)v18 )
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v9, v16, v18, *((__int64 *)&v18 + 1));
  return (unsigned int)DmaBuffer;
}
