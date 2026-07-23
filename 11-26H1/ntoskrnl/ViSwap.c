/*
 * XREFs of ViSwap @ 0x140C2DF9C
 * Callers:
 *     VfBuildScatterGatherList @ 0x140C29A20 (VfBuildScatterGatherList.c)
 *     VfFlushAdapterBuffers @ 0x140C2A1E0 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140C2AB90 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x140C2B300 (VfMapTransfer.c)
 * Callees:
 *     ViFindMappedRegisterInFile @ 0x140C2CAB0 (ViFindMappedRegisterInFile.c)
 *     ViGetMapRegisterFile @ 0x140C2D0AC (ViGetMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140C2D0D4 (ViGetMdlBufferSa.c)
 */

__int64 __fastcall ViSwap(__int64 *a1, ULONG_PTR *a2, _QWORD *a3)
{
  __int64 MapRegisterFile; // rbx
  const void **v7; // r8
  __int64 MdlBufferSa; // rax
  __int16 v9; // r11
  unsigned int v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0;
  MapRegisterFile = ViGetMapRegisterFile(*a1);
  if ( !MapRegisterFile )
    return 0LL;
  MdlBufferSa = ViGetMdlBufferSa(*a2, *v7);
  if ( !MdlBufferSa || !ViFindMappedRegisterInFile(MapRegisterFile, MdlBufferSa, &v11) )
    return 0LL;
  *a2 = *(_QWORD *)(MapRegisterFile + 56);
  *a3 = *(_QWORD *)(*(_QWORD *)(MapRegisterFile + 56) + 32LL)
      + (v11 << 12)
      + *(unsigned int *)(*(_QWORD *)(MapRegisterFile + 56) + 44LL)
      + (unsigned __int64)(v9 & 0xFFF);
  *a1 = *(_QWORD *)(MapRegisterFile + 48);
  return 1LL;
}
