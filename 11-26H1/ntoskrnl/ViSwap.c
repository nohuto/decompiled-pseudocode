/*
 * XREFs of ViSwap @ 0x140C27F8C
 * Callers:
 *     VfBuildScatterGatherList @ 0x140C23A10 (VfBuildScatterGatherList.c)
 *     VfFlushAdapterBuffers @ 0x140C241D0 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140C24B80 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x140C252F0 (VfMapTransfer.c)
 * Callees:
 *     ViFindMappedRegisterInFile @ 0x140C26AA0 (ViFindMappedRegisterInFile.c)
 *     ViGetMapRegisterFile @ 0x140C2709C (ViGetMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140C270C4 (ViGetMdlBufferSa.c)
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
