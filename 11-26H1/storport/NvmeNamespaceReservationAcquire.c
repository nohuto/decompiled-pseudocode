/*
 * XREFs of NvmeNamespaceReservationAcquire @ 0x14010D88C
 * Callers:
 *     NvmeNamespacePersistentReserveOutIoctl @ 0x140107C84 (NvmeNamespacePersistentReserveOutIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeNamespaceReservationAcquire(__int64 a1, _BYTE *a2, char a3, unsigned __int8 a4)
{
  union _SLIST_HEADER *v5; // rcx
  unsigned int v9; // r14d
  __int64 ExtendedCommand; // rsi
  __int64 v11; // r8
  int DmaBuffer; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h]

  v5 = *(union _SLIST_HEADER **)(a1 + 16);
  v19 = 0LL;
  v9 = 0;
  ExtendedCommand = NvmeControllerGetExtendedCommand(v5);
  if ( ExtendedCommand )
  {
    v9 = 16;
    DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), 0x10u, v11, (void **)&v19, (_QWORD *)&v19 + 1, 0);
    if ( DmaBuffer >= 0 )
    {
      v13 = v19;
      HIBYTE(v20) = *a2;
      BYTE6(v20) = a2[1];
      BYTE5(v20) = a2[2];
      BYTE4(v20) = a2[3];
      BYTE3(v20) = a2[4];
      BYTE2(v20) = a2[5];
      BYTE1(v20) = a2[6];
      LOBYTE(v20) = a2[7];
      HIBYTE(v18) = a2[8];
      BYTE6(v18) = a2[9];
      BYTE5(v18) = a2[10];
      BYTE4(v18) = a2[11];
      BYTE3(v18) = a2[12];
      BYTE2(v18) = a2[13];
      BYTE1(v18) = a2[14];
      LOBYTE(v18) = a2[15];
      *(_QWORD *)v19 = v20;
      *(_QWORD *)(v13 + 8) = v18;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4216LL) = a1;
      *(_OWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = v19;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 16;
      v14 = *(_QWORD *)ExtendedCommand;
      v15 = *((_QWORD *)&v19 + 1);
      *(_DWORD *)(v14 + 4100) = *(_DWORD *)(a1 + 56);
      *(_BYTE *)(v14 + 4137) = a3;
      LODWORD(v13) = *(_DWORD *)(v14 + 4136) & 0xFFFFFFF7;
      *(_BYTE *)(v14 + 4096) = 17;
      *(_QWORD *)(v14 + 4120) = v15;
      *(_DWORD *)(v14 + 4136) = v13 ^ (a4 ^ (unsigned __int8)v13) & 7;
      DmaBuffer = NvmeControllerProcessCommandSync(*(PVOID *)(a1 + 16), ExtendedCommand);
    }
  }
  else
  {
    DmaBuffer = -1073741670;
  }
  NvmeControllerReclaimExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16), ExtendedCommand);
  if ( (_QWORD)v19 )
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v9, v16, v19, *((__int64 *)&v19 + 1));
  return (unsigned int)DmaBuffer;
}
