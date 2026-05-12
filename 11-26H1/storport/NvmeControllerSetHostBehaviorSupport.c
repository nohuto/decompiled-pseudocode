/*
 * XREFs of NvmeControllerSetHostBehaviorSupport @ 0x1400CFE2C
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F5D54 (NvmeControllerInitPhase3.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeControllerSetHostBehaviorSupport(union _SLIST_HEADER *a1, char a2)
{
  __int64 ExtendedCommand; // rdi
  __int64 v5; // r8
  int DmaBuffer; // esi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r8d
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x200u, v5, (void **)&v11, (_QWORD *)&v11 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    v8 = v11;
    *(_WORD *)v11 = 256;
    *(_BYTE *)(v8 + 2) = 0;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    *(_OWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = v11;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 512;
    v9 = *(_QWORD *)ExtendedCommand;
    *(_QWORD *)(v9 + 4120) = *((_QWORD *)&v11 + 1);
    *(_BYTE *)(v9 + 4096) = 9;
    *(_BYTE *)(v9 + 4136) = 22;
    *(_DWORD *)(v9 + 4100) = 0;
    DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand);
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 512, v10, v11, *((__int64 *)&v11 + 1));
  return (unsigned int)DmaBuffer;
}
