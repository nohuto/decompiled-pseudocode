/*
 * XREFs of NvmeNamespaceReservationRegister @ 0x14010DAC4
 * Callers:
 *     NvmeNamespacePersistentReserveOutIoctl @ 0x140107C84 (NvmeNamespacePersistentReserveOutIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeNamespaceReservationRegister(__int64 a1, _BYTE *a2, char a3)
{
  union _SLIST_HEADER *v5; // rcx
  unsigned int v7; // r14d
  __int64 ExtendedCommand; // rbx
  __int64 v9; // r8
  int DmaBuffer; // esi
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rcx
  int v15; // r10d
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // r8
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+30h]
  __int64 v22; // [rsp+88h] [rbp+48h]

  v5 = *(union _SLIST_HEADER **)(a1 + 16);
  v20 = 0LL;
  v7 = 0;
  ExtendedCommand = NvmeControllerGetExtendedCommand(v5);
  if ( ExtendedCommand )
  {
    v7 = 16;
    DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), 0x10u, v9, (void **)&v20, (_QWORD *)&v20 + 1, 0);
    if ( DmaBuffer >= 0 )
    {
      v11 = v20;
      v12 = (8 * a3) & 8;
      v13 = (a2[20] & 1) + 2;
      HIBYTE(v21) = *a2;
      BYTE6(v21) = a2[1];
      BYTE5(v21) = a2[2];
      BYTE4(v21) = a2[3];
      BYTE3(v21) = a2[4];
      BYTE2(v21) = a2[5];
      BYTE1(v21) = a2[6];
      LOBYTE(v21) = a2[7];
      HIBYTE(v22) = a2[8];
      BYTE6(v22) = a2[9];
      BYTE5(v22) = a2[10];
      BYTE4(v22) = a2[11];
      BYTE3(v22) = a2[12];
      BYTE2(v22) = a2[13];
      BYTE1(v22) = a2[14];
      LOBYTE(v22) = a2[15];
      *(_QWORD *)v20 = v21;
      *(_QWORD *)(v11 + 8) = v22;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4216LL) = a1;
      *(_OWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = v20;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 16;
      v14 = *(_QWORD *)ExtendedCommand;
      v15 = *(_DWORD *)(a1 + 56);
      v16 = (v13 << 30) | *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4136LL) & 0x3FFFFFFF;
      *(_QWORD *)(v14 + 4120) = *((_QWORD *)&v20 + 1);
      *(_BYTE *)(v14 + 4096) = 13;
      *(_DWORD *)(v14 + 4100) = v15;
      if ( v22 )
        v17 = v12 ^ v16 & 0xFFFFFFF0;
      else
        v17 = v12 ^ v16 & 0xFFFFFFF1 | 1;
      *(_DWORD *)(v14 + 4136) = v17;
      DmaBuffer = NvmeControllerProcessCommandSync(*(PVOID *)(a1 + 16), ExtendedCommand);
    }
  }
  else
  {
    DmaBuffer = -1073741670;
  }
  NvmeControllerReclaimExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16), ExtendedCommand);
  if ( (_QWORD)v20 )
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v7, v18, v20, *((__int64 *)&v20 + 1));
  return (unsigned int)DmaBuffer;
}
