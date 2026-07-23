/*
 * XREFs of ViPtLogPoolTraceWrapper @ 0x140C4B06C
 * Callers:
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     VfPtMiscPoolNotification @ 0x1405061A8 (VfPtMiscPoolNotification.c)
 *     VerifierExAllocatePool @ 0x140C357A0 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePoolWithTag @ 0x140C35BA0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140C35CD0 (VerifierExAllocatePoolWithTagPriority.c)
 *     VfHandlePoolAlloc @ 0x140C4A310 (VfHandlePoolAlloc.c)
 *     VerifierExAllocatePool2 @ 0x140C4AE10 (VerifierExAllocatePool2.c)
 *     VfPtFreePoolNotification @ 0x140C4AF8C (VfPtFreePoolNotification.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x140262E00 (KeExpandKernelStackAndCalloutEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140263D20 (RtlEnoughStackSpaceForStackCapture.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ViPtProcessApt @ 0x140C307D0 (ViPtProcessApt.c)
 *     ViPtCaptureStackTraceCallout @ 0x140C4B190 (ViPtCaptureStackTraceCallout.c)
 *     ViPtLogPoolTrace @ 0x140C4B284 (ViPtLogPoolTrace.c)
 */

void __fastcall ViPtLogPoolTraceWrapper(__int64 a1, int a2, __int64 a3, char a4)
{
  _QWORD Parameter[53]; // [rsp+30h] [rbp-1C8h] BYREF
  int v9; // [rsp+1DCh] [rbp-1Ch]
  int v10; // [rsp+1E0h] [rbp-18h]
  char v11; // [rsp+1E4h] [rbp-14h]

  memset_0(Parameter, 0, 0x1B8uLL);
  if ( a1 && ((VfOptionFlags & 0x1000) != 0 || VfPoolTraces) && a2 != 1850304854 )
  {
    if ( KeGetCurrentIrql() > 1u || (unsigned int)RtlEnoughStackSpaceForStackCapture() )
      ViPtCaptureStackTraceCallout(Parameter);
    else
      KeExpandKernelStackAndCalloutEx(ViPtCaptureStackTraceCallout, Parameter, 0xE30uLL, 1u, 0LL);
    if ( v9 )
    {
      v10 = a2;
      Parameter[0] = a1;
      v11 = a4 & 1;
      Parameter[1] = a3;
      Parameter[2] = KeGetCurrentThread();
      if ( (VfOptionFlags & 0x1000) != 0 )
        ViPtProcessApt((__int64)Parameter);
      if ( (a4 & 2) == 0 )
        ViPtLogPoolTrace(Parameter);
    }
  }
}
