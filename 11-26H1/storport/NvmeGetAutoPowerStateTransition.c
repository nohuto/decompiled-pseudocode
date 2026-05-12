/*
 * XREFs of NvmeGetAutoPowerStateTransition @ 0x1400D0F40
 * Callers:
 *     NvmeControllerPowerInitialize @ 0x1400F81E4 (NvmeControllerPowerInitialize.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeGetAutoPowerStateTransition(union _SLIST_HEADER *a1)
{
  __int64 ExtendedCommand; // rdi
  __int64 v3; // r8
  int DmaBuffer; // esi
  __int64 v6; // rax
  int v7; // r8d
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x100u, v3, (void **)&v8, (_QWORD *)&v8 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
    *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeGetAutoPowerStateTransitionCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    *(_OWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = v8;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 256;
    v6 = *(_QWORD *)ExtendedCommand;
    *(_QWORD *)(v6 + 4120) = *((_QWORD *)&v8 + 1);
    *(_BYTE *)(v6 + 4096) = 10;
    *(_BYTE *)(v6 + 4136) = 12;
    DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand);
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 256, v7, v8, *((__int64 *)&v8 + 1));
  return (unsigned int)DmaBuffer;
}
