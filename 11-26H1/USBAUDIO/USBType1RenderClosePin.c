/*
 * XREFs of USBType1RenderClosePin @ 0x140042730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008644 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     USBHwFreePipes @ 0x14003BFC0 (USBHwFreePipes.c)
 *     USBHwFreeOffloadInformation @ 0x14004146C (USBHwFreeOffloadInformation.c)
 */

__int64 __fastcall USBType1RenderClosePin(__int64 a1)
{
  __int64 v2; // rbx
  bool v3; // dl

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  if ( *(_BYTE *)(v2 + 112) )
    IoFreeWorkItem(*(PIO_WORKITEM *)(v2 + 984));
  ExDeleteNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v2 + 144));
  USBHwFreePipes(a1);
  USBHwFreeOffloadInformation(a1);
  return 0LL;
}
