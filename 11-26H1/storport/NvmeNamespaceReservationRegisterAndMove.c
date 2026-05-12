/*
 * XREFs of NvmeNamespaceReservationRegisterAndMove @ 0x14010DD1C
 * Callers:
 *     NvmeNamespacePersistentReserveOutIoctl @ 0x140107C84 (NvmeNamespacePersistentReserveOutIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeNamespaceReservationRegisterAndMove(__int64 a1, _BYTE *a2)
{
  union _SLIST_HEADER *v3; // rcx
  unsigned int v5; // r14d
  __int64 ExtendedCommand; // rsi
  __int64 v7; // r8
  int DmaBuffer; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+30h]
  __int64 v17; // [rsp+88h] [rbp+48h]

  v3 = *(union _SLIST_HEADER **)(a1 + 16);
  v15 = 0LL;
  v5 = 0;
  ExtendedCommand = NvmeControllerGetExtendedCommand(v3);
  if ( ExtendedCommand )
  {
    v5 = 16;
    DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), 0x10u, v7, (void **)&v15, (_QWORD *)&v15 + 1, 0);
    if ( DmaBuffer >= 0 )
    {
      v9 = v15;
      HIBYTE(v16) = *a2;
      BYTE6(v16) = a2[1];
      BYTE5(v16) = a2[2];
      BYTE4(v16) = a2[3];
      BYTE3(v16) = a2[4];
      BYTE2(v16) = a2[5];
      BYTE1(v16) = a2[6];
      LOBYTE(v16) = a2[7];
      HIBYTE(v17) = a2[8];
      BYTE6(v17) = a2[9];
      BYTE5(v17) = a2[10];
      BYTE4(v17) = a2[11];
      BYTE3(v17) = a2[12];
      BYTE2(v17) = a2[13];
      BYTE1(v17) = a2[14];
      LOBYTE(v17) = a2[15];
      *(_QWORD *)v15 = v16;
      *(_QWORD *)(v9 + 8) = v17;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4216LL) = a1;
      *(_OWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = v15;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 16;
      v10 = *(_QWORD *)ExtendedCommand;
      v11 = *((_QWORD *)&v15 + 1);
      *(_DWORD *)(v10 + 4100) = *(_DWORD *)(a1 + 56);
      v12 = *(_DWORD *)(v10 + 4136) & 0x3FFFFFF0;
      *(_QWORD *)(v10 + 4120) = v11;
      *(_BYTE *)(v10 + 4096) = 13;
      *(_DWORD *)(v10 + 4136) = v12 | 2;
      DmaBuffer = NvmeControllerProcessCommandSync(*(PVOID *)(a1 + 16), ExtendedCommand);
    }
  }
  else
  {
    DmaBuffer = -1073741670;
  }
  NvmeControllerReclaimExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16), ExtendedCommand);
  if ( (_QWORD)v15 )
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v5, v13, v15, *((__int64 *)&v15 + 1));
  return (unsigned int)DmaBuffer;
}
