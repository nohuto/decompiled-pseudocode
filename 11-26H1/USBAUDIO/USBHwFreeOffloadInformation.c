/*
 * XREFs of USBHwFreeOffloadInformation @ 0x14004146C
 * Callers:
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035C6C (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBCaptureClosePin @ 0x1400398C0 (USBCaptureClosePin.c)
 *     USBType1RenderClosePin @ 0x140042730 (USBType1RenderClosePin.c)
 * Callees:
 *     <none>
 */

void __fastcall USBHwFreeOffloadInformation(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  void *v3; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  v2 = *(void **)(v1 + 96);
  if ( v2 )
  {
    ExFreePool(v2);
    *(_QWORD *)(v1 + 96) = 0LL;
  }
  v3 = *(void **)(v1 + 104);
  if ( v3 )
  {
    ExFreePool(v3);
    *(_QWORD *)(v1 + 104) = 0LL;
  }
}
