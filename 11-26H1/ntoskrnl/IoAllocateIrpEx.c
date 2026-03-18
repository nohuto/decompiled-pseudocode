/*
 * XREFs of IoAllocateIrpEx @ 0x14026C530
 * Callers:
 *     FsRtlGetFileExtents @ 0x1405B5170 (FsRtlGetFileExtents.c)
 *     FsRtlSetKernelEaFile @ 0x140A199F0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A1A200 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140A1A550 (FsRtlQueryKernelEaFile.c)
 *     FsRtlGetFileSize @ 0x140A56DE0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x140A57278 (FsRtlSetFileSize.c)
 *     FsRtlQueryInformationFile @ 0x140AB4A90 (FsRtlQueryInformationFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140B54250 (FsRtlGetDirectImageOriginalBase.c)
 *     VfIrpSendSynchronousIrp @ 0x140C2C5F0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14026C684 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14045DC8C (IopAllocateIrpWithExtension.c)
 *     VfTargetDriversIsEnabled @ 0x140C46C9C (VfTargetDriversIsEnabled.c)
 *     IovAllocateIrp @ 0x140C48150 (IovAllocateIrp.c)
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
