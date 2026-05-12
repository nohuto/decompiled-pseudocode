/*
 * XREFs of NvmeNamespaceDsmWriteZeroes @ 0x140103E38
 * Callers:
 *     NvmeNamespaceDataSetManagementIoctl @ 0x1401A3FCC (NvmeNamespaceDataSetManagementIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x1400C6E88 (SetPrpFromBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeNamespaceDsmWriteZeroes(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int DmaBuffer; // r15d
  unsigned int v5; // ebp
  __int64 *ExtendedCommand; // rsi
  unsigned int v7; // eax
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  __int64 *v10; // rbx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r14
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // r8
  _OWORD v22[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+10h]
  __int64 v24; // [rsp+90h] [rbp+18h]
  __int64 v25; // [rsp+90h] [rbp+18h]

  v3 = *(unsigned int *)(a2 + 20);
  DmaBuffer = 0;
  v5 = 0;
  ExtendedCommand = 0LL;
  v22[0] = 0LL;
  if ( !(_DWORD)v3 )
    return 3221225485LL;
  v7 = *(_DWORD *)(a2 + 24);
  if ( v7 < 0x10 )
    return 3221225485LL;
  if ( (v7 & 0xFFFFFFF0) != 0x10 )
    return 3221225485LL;
  v8 = *(unsigned int *)(a1 + 64);
  v24 = *(_QWORD *)(v3 + a2);
  if ( v24 % v8 )
    return 3221225485LL;
  v9 = *(_QWORD *)(v3 + a2 + 8);
  if ( v9 % v8 )
    return 3221225485LL;
  v10 = (__int64 *)(a1 + 16);
  v11 = v9 / v8;
  if ( v9 / v8 )
  {
    v12 = *(unsigned int *)(*v10 + 620);
    if ( v12 >= v11 * (unsigned int)v8 )
      v12 = v11 * (unsigned int)v8;
    DmaBuffer = NvmeAllocateDmaBuffer(*v10, v12, a2, (void **)v22, (_QWORD *)v22 + 1, 0);
    v5 = v12;
    if ( DmaBuffer >= 0 )
    {
      ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)*v10);
      if ( ExtendedCommand )
      {
        v23 = 0;
        v13 = 0LL;
        v14 = v24 / v8;
        v25 = v24 / v8;
        do
        {
          v15 = *(unsigned int *)(a1 + 64);
          v16 = *ExtendedCommand;
          v17 = v12 / v15;
          if ( v12 / v15 >= v11 - v13 )
            LODWORD(v17) = v11 - v13;
          v18 = *(_DWORD *)(a1 + 56);
          *(_DWORD *)(v16 + 4144) &= 0xFF0FFFFF;
          *(_BYTE *)(v16 + 4096) = 1;
          *(_DWORD *)(v16 + 4096) &= 0xFFFFFCFF;
          v19 = v14 * v15 / v15;
          *(_WORD *)(v16 + 4150) = 0;
          *(_DWORD *)(v16 + 4136) = v19;
          *(_DWORD *)(v16 + 4100) = v18;
          *(_QWORD *)(v16 + 4112) = 0LL;
          *(_BYTE *)(v16 + 4148) = 0;
          *(_QWORD *)(v16 + 4152) = 0LL;
          *(_DWORD *)(v16 + 4140) = HIDWORD(v19);
          *(_WORD *)(v16 + 4144) = v17 - 1;
          *(_DWORD *)(v16 + 4144) &= 0x3FFFFFFu;
          if ( !(unsigned int)SetPrpFromBuffer(
                                *ExtendedCommand,
                                *ExtendedCommand + 4096,
                                *((__int64 *)&v22[0] + 1),
                                *(_DWORD *)(a1 + 64) * (int)v17,
                                (_QWORD *)*ExtendedCommand,
                                ExtendedCommand[1]) )
            break;
          *(_DWORD *)(*ExtendedCommand + 4256) &= ~1u;
          *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
          *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
          *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
          *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
          *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
          *(_OWORD *)(*ExtendedCommand + 4160) = v22[0];
          *(_DWORD *)(*ExtendedCommand + 4248) = *(_DWORD *)(a1 + 64) * v17;
          DmaBuffer = NvmeControllerProcessCommandSync((PVOID)*v10, (__int64)ExtendedCommand);
          if ( DmaBuffer < 0 )
            break;
          v14 = (unsigned int)v17 + v25;
          v23 += v17;
          v13 = v23;
          v25 = v14;
        }
        while ( v23 < v11 );
      }
      else
      {
        DmaBuffer = -1073741670;
      }
    }
  }
  NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)*v10, (__int64)ExtendedCommand);
  if ( *(_QWORD *)&v22[0] )
    NvmeFreeDmaBuffer(*v10, v5, v20, *(__int64 *)&v22[0], *((__int64 *)&v22[0] + 1));
  return (unsigned int)DmaBuffer;
}
