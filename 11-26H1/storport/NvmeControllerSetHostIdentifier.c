/*
 * XREFs of NvmeControllerSetHostIdentifier @ 0x1400CFFDC
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F5D54 (NvmeControllerInitPhase3.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeControllerSetHostIdentifier(union _SLIST_HEADER *a1, char a2)
{
  unsigned __int8 *Alignment; // r8
  int DmaBuffer; // esi
  __int64 ExtendedCommand; // rdi
  unsigned __int8 v7; // dl
  __int64 v8; // r8
  __int64 v10; // rcx
  int v11; // eax
  int v12; // edx
  int v13; // r8d
  void *v14[3]; // [rsp+30h] [rbp-18h] BYREF

  Alignment = (unsigned __int8 *)a1[80].Alignment;
  DmaBuffer = -1073741823;
  ExtendedCommand = 0LL;
  *(_OWORD *)v14 = 0LL;
  if ( Alignment )
  {
    v7 = *Alignment;
    if ( (*Alignment & 1) != 0 )
    {
      if ( ((v7 >> 1) & ((*(_BYTE *)(a1[37].Alignment + 96) & 1) != 0)) != 0 )
        *Alignment = v7 | 8;
      ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
      if ( !ExtendedCommand )
        return 3221225626LL;
      DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x10u, v8, v14, &v14[1], 0);
      if ( DmaBuffer >= 0 )
      {
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand
                                                                                        + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
        *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
        *(void **)(*(_QWORD *)ExtendedCommand + 4160LL) = v14[0];
        *(void **)(*(_QWORD *)ExtendedCommand + 4168LL) = v14[1];
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 16;
        memmove(v14[0], (const void *)(a1[80].Alignment + 1), (*(_BYTE *)a1[80].Alignment & 8) != 0 ? 16LL : 8LL);
        v10 = *(_QWORD *)ExtendedCommand;
        v11 = *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4140LL);
        v12 = ((unsigned __int8)v11 ^ (*(_BYTE *)a1[80].Alignment >> 3)) & 1;
        *(void **)(v10 + 4120) = v14[1];
        *(_BYTE *)(v10 + 4096) = 9;
        *(_DWORD *)(v10 + 4140) = v11 ^ v12;
        *(_BYTE *)(v10 + 4136) = -127;
        DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand);
        if ( DmaBuffer >= 0 )
          *(_BYTE *)a1[80].Alignment |= 4u;
      }
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 16, v13, v14[0], (__int64)v14[1]);
  return (unsigned int)DmaBuffer;
}
