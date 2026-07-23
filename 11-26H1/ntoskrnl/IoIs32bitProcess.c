/*
 * XREFs of IoIs32bitProcess @ 0x140428770
 * Callers:
 *     FsRtlGetMarkHandleInfo @ 0x14042864C (FsRtlGetMarkHandleInfo.c)
 *     IoIsInitiator32bitProcess @ 0x1404286D0 (IoIsInitiator32bitProcess.c)
 *     EtwpGetScsiPassThroughCdb @ 0x1406C9288 (EtwpGetScsiPassThroughCdb.c)
 *     PiDqDispatch @ 0x14094F860 (PiDqDispatch.c)
 *     PiCMFastIoDeviceDispatch @ 0x140958910 (PiCMFastIoDeviceDispatch.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x140A0BAA0 (WmipProbeAndCaptureGuidObjectAttributes.c)
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 *     NtCopyFileChunk @ 0x140ADF550 (NtCopyFileChunk.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIs32bitProcess(PIRP Irp)
{
  _KPROCESS *Process; // rcx
  PETHREAD Thread; // rdx
  CCHAR ApcEnvironment; // al
  unsigned __int64 v5; // rax
  __int16 v6; // cx
  __int16 v7; // dx

  if ( !Irp )
  {
    if ( KeGetCurrentThread()->PreviousMode != 1 )
      return 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[1].ReadyTime )
      return 0;
    v7 = WORD2(Process[3].PerProcessorCycleTimes);
    return v7 == 332 || v7 == 452;
  }
  if ( Irp->RequestorMode != 1 )
    return 0;
  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) != 0 )
  {
    v5 = Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
    goto LABEL_10;
  }
  if ( !Thread )
    return 0;
  ApcEnvironment = Irp->ApcEnvironment;
  if ( ApcEnvironment )
  {
    if ( ApcEnvironment == 1 )
    {
      v5 = (unsigned __int64)Thread->ApcState.Process;
      goto LABEL_10;
    }
    return 0;
  }
  v5 = (unsigned __int64)Thread->Process;
LABEL_10:
  if ( !v5 || !*(_QWORD *)(v5 + 784) )
    return 0;
  v6 = *(_WORD *)(v5 + 1772);
  return v6 == 332 || v6 == 452;
}
