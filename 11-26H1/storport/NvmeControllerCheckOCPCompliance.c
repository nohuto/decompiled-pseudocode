/*
 * XREFs of NvmeControllerCheckOCPCompliance @ 0x1400F15A4
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F5D54 (NvmeControllerInitPhase3.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeControllerCheckOCPCompliance(__int64 a1, char a2)
{
  __int64 *ExtendedCommand; // rdi
  __int64 v5; // r8
  int DmaBuffer; // esi
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  __int128 v12; // [rsp+60h] [rbp-10h] BYREF

  *(_QWORD *)(a1 + 136) &= ~0x100000uLL;
  v12 = 0LL;
  *(_BYTE *)(a1 + 945) = 0;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer(a1, 0x200u, v5, (void **)&v12, (_QWORD *)&v12 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    LOBYTE(v8) = -64;
    *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
    *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
    *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
    *(_DWORD *)(*ExtendedCommand + 4256) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*ExtendedCommand + 4252) = 0;
    *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
    *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
    *(_OWORD *)(*ExtendedCommand + 4160) = v12;
    *(_DWORD *)(*ExtendedCommand + 4248) = 512;
    BuildGetLogPageCommand(
      a1,
      *ExtendedCommand + 4096,
      v8,
      0x200u,
      *((__int64 *)&v12 + 1),
      -1,
      0LL,
      0,
      *ExtendedCommand,
      ExtendedCommand[1]);
    DmaBuffer = NvmeControllerProcessCommandSync((PVOID)a1, (__int64)ExtendedCommand);
    if ( DmaBuffer >= 0 )
    {
      v9 = v12;
      if ( (_QWORD)v12 )
      {
        v10 = *(_QWORD *)(v12 + 496) + 0x5B0D4015D7EF503BLL;
        if ( *(_QWORD *)(v12 + 496) == 0xA4F2BFEA2810AFC5uLL )
          v10 = *(_QWORD *)(v12 + 504) + 0x502AEB368390B064LL;
        if ( !v10 )
        {
          *(_QWORD *)(a1 + 136) |= 0x100000uLL;
          *(_BYTE *)(a1 + 945) = *(_BYTE *)(v9 + 103);
        }
      }
    }
  }
  NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)a1, (__int64)ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 512, v11, v12, *((__int64 *)&v12 + 1));
  return (unsigned int)DmaBuffer;
}
