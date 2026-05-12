/*
 * XREFs of NvmeControllerGetCloudSSDErrorRecoveryLog @ 0x1400CDA54
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F5D54 (NvmeControllerInitPhase3.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeControllerGetCloudSSDErrorRecoveryLog(__int64 a1, char a2)
{
  __int64 v4; // r8
  __int64 *ExtendedCommand; // r14
  int DmaBuffer; // esi
  unsigned int v8; // r8d
  __int64 v9; // rdi
  __int64 Pool; // rax
  int v11; // r8d
  __int64 v12; // rax
  _OWORD *v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // [rsp+60h] [rbp-10h] BYREF

  v16 = 0LL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer(a1, 0x200u, v4, (void **)&v16, (_QWORD *)&v16 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    v9 = v16;
    if ( *(_QWORD *)(a1 + 1240)
      || (Pool = RaidAllocatePool(64LL, 512LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
          (*(_QWORD *)(a1 + 1240) = Pool) != 0LL) )
    {
      LOBYTE(v8) = -63;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
      *(_DWORD *)(*ExtendedCommand + 4256) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*ExtendedCommand + 4252) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
      *(_OWORD *)(*ExtendedCommand + 4160) = v16;
      *(_DWORD *)(*ExtendedCommand + 4248) = 512;
      BuildGetLogPageCommand(
        a1,
        *ExtendedCommand + 4096,
        v8,
        0x200u,
        *((__int64 *)&v16 + 1),
        -1,
        0LL,
        0,
        *ExtendedCommand,
        ExtendedCommand[1]);
      DmaBuffer = NvmeControllerProcessCommandSync((PVOID)a1, (__int64)ExtendedCommand);
      if ( DmaBuffer >= 0 )
      {
        v12 = *(_QWORD *)(v9 + 496) + 0x51CBCF01DECE26BCLL;
        if ( *(_QWORD *)(v9 + 496) == 0xAE3430FE2131D944uLL )
          v12 = *(_QWORD *)(v9 + 504) - 0x5A1983BA3DFD4DABLL;
        if ( !v12 )
        {
          v13 = *(_OWORD **)(a1 + 1240);
          v14 = 4LL;
          do
          {
            *v13 = *(_OWORD *)v9;
            v13[1] = *(_OWORD *)(v9 + 16);
            v13[2] = *(_OWORD *)(v9 + 32);
            v13[3] = *(_OWORD *)(v9 + 48);
            v13[4] = *(_OWORD *)(v9 + 64);
            v13[5] = *(_OWORD *)(v9 + 80);
            v13[6] = *(_OWORD *)(v9 + 96);
            v13 += 8;
            v15 = *(_OWORD *)(v9 + 112);
            v9 += 128LL;
            *(v13 - 1) = v15;
            --v14;
          }
          while ( v14 );
          goto LABEL_8;
        }
      }
    }
    else
    {
      DmaBuffer = -1073741670;
    }
  }
  ExFreePoolWithTag(*(PVOID *)(a1 + 1240), 0x52436152u);
  *(_QWORD *)(a1 + 136) |= 0x1000000uLL;
  *(_QWORD *)(a1 + 1240) = 0LL;
LABEL_8:
  NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)a1, (__int64)ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 512, v11, v16, *((__int64 *)&v16 + 1));
  return (unsigned int)DmaBuffer;
}
