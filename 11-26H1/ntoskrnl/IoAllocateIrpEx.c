/*
 * XREFs of IoAllocateIrpEx @ 0x14026BAA0
 * Callers:
 *     FsRtlGetFileExtents @ 0x1405B7980 (FsRtlGetFileExtents.c)
 *     FsRtlSetKernelEaFile @ 0x140A23020 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A23830 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140A23B80 (FsRtlQueryKernelEaFile.c)
 *     FsRtlGetFileSize @ 0x140A64360 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x140A647F8 (FsRtlSetFileSize.c)
 *     FsRtlQueryInformationFile @ 0x140AB5E30 (FsRtlQueryInformationFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140B56AF0 (FsRtlGetDirectImageOriginalBase.c)
 *     VfIrpSendSynchronousIrp @ 0x140C32600 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14026BBF4 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14045782C (IopAllocateIrpWithExtension.c)
 *     VfTargetDriversIsEnabled @ 0x140C4CCAC (VfTargetDriversIsEnabled.c)
 *     IovAllocateIrp @ 0x140C4E160 (IovAllocateIrp.c)
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // di
  int IsEnabled; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2, a3);
  if ( ViVerifyAllDrivers == 1 )
    return IovAllocateIrp(a1, a2, a3, retaddr);
  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  a3 = v3;
  a2 = v4;
  if ( !IsEnabled )
    return IopAllocateIrpWithExtension(a1, a2, a3);
  else
    return IovAllocateIrp(a1, v4, v3, retaddr);
}
