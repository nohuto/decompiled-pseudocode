/*
 * XREFs of NvmeControllerSyncHostTime @ 0x1400D0D28
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F5D54 (NvmeControllerInitPhase3.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x1400C6E88 (SetPrpFromBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeControllerSyncHostTime(union _SLIST_HEADER *a1, char a2)
{
  __int64 *ExtendedCommand; // rbx
  __int64 v5; // r8
  int DmaBuffer; // esi
  int v8; // r8d
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 8u, v5, (void **)&v9, (_QWORD *)&v9 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    *(_QWORD *)v9 = (MEMORY[0xFFFFF78000000014] / 0x2710uLL - 11644473600000LL) & 0xFFFFFFFFFFFFLL;
    if ( !(unsigned int)SetPrpFromBuffer(
                          *ExtendedCommand,
                          *ExtendedCommand + 4096,
                          *((__int64 *)&v9 + 1),
                          8,
                          (_QWORD *)*ExtendedCommand,
                          ExtendedCommand[1]) )
      return 3221225701LL;
    *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
    *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
    *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
    *(_DWORD *)(*ExtendedCommand + 4256) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*ExtendedCommand + 4252) = 0;
    *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
    *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
    *(_OWORD *)(*ExtendedCommand + 4160) = v9;
    *(_DWORD *)(*ExtendedCommand + 4248) = 8;
    *(_DWORD *)(*ExtendedCommand + 4100) = -1;
    *(_BYTE *)(*ExtendedCommand + 4096) = 9;
    *(_BYTE *)(*ExtendedCommand + 4136) = 14;
    DmaBuffer = NvmeControllerProcessCommandSync(a1, (__int64)ExtendedCommand);
  }
  NvmeControllerReclaimExtendedCommand(a1, (__int64)ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 8, v8, v9, *((__int64 *)&v9 + 1));
  return (unsigned int)DmaBuffer;
}
