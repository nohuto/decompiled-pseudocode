/*
 * XREFs of USBHwFreePipes @ 0x14003BFC0
 * Callers:
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035C6C (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBCaptureClosePin @ 0x1400398C0 (USBCaptureClosePin.c)
 *     USBHwSelectStreamingAudioInterface @ 0x14003B95C (USBHwSelectStreamingAudioInterface.c)
 *     USBType1RenderClosePin @ 0x140042730 (USBType1RenderClosePin.c)
 * Callees:
 *     <none>
 */

void __fastcall USBHwFreePipes(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  v2 = *(void **)(v1 + 72);
  if ( v2 )
  {
    ExFreePool(v2);
    *(_QWORD *)(v1 + 72) = 0LL;
  }
}
