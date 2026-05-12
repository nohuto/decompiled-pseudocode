/*
 * XREFs of NvmeControllerSetHostMemoryBuffer @ 0x1400D0214
 * Callers:
 *     NvmeControllerInitHostMemoryBuffer @ 0x1400F5474 (NvmeControllerInitHostMemoryBuffer.c)
 *     NvmeControllerPowerDown @ 0x1400F7FE8 (NvmeControllerPowerDown.c)
 *     NvmeFreeHostMemoryBuffer @ 0x1400FE828 (NvmeFreeHostMemoryBuffer.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeControllerSetHostMemoryBuffer(
        union _SLIST_HEADER *a1,
        char a2,
        unsigned __int8 a3,
        char a4,
        unsigned int a5,
        void *Src,
        size_t Size)
{
  int v8; // r13d
  __int64 ExtendedCommand; // rsi
  __int64 v13; // r8
  int DmaBuffer; // ebx
  __int64 v15; // rbp
  int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // eax
  int v19; // r8d
  void *v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = a3;
  *(_OWORD *)v20 = 0LL;
  if ( !a5 )
    return 3221225485LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x1000u, v13, v20, &v20[1], 0);
  if ( DmaBuffer >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    *(void **)(*(_QWORD *)ExtendedCommand + 4160LL) = v20[0];
    *(void **)(*(_QWORD *)ExtendedCommand + 4168LL) = v20[1];
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 4096;
    v15 = *(_QWORD *)ExtendedCommand;
    v16 = *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4140LL);
    *(_BYTE *)(v15 + 4096) = 9;
    *(_BYTE *)(v15 + 4136) = 13;
    *(_DWORD *)(v15 + 4140) = v16 ^ (v16 ^ v8) & 1 ^ ((unsigned __int8)(v16 ^ (v16 ^ v8) & 1) ^ (unsigned __int8)(2 * a4)) & 2;
    v17 = 1 << (((*(_DWORD *)(a1[57].Region + 20) >> 7) & 0xF) + 12);
    if ( a5 % v17 )
    {
      DmaBuffer = -1073741811;
    }
    else
    {
      *(_DWORD *)(v15 + 4144) = a5 / v17;
      memmove(v20[0], Src, (unsigned int)Size);
      v18 = (__int64)v20[1] & 0xFFFFFFF0;
      *(_DWORD *)(v15 + 4152) = HIDWORD(v20[1]);
      *(_DWORD *)(v15 + 4148) = v18;
      *(_DWORD *)(v15 + 4156) = (unsigned int)Size >> 4;
      DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand);
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 4096, v19, v20[0], (__int64)v20[1]);
  return (unsigned int)DmaBuffer;
}
