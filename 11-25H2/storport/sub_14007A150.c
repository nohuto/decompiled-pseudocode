/*
 * XREFs of sub_14007A150 @ 0x14007A150
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 */

void __fastcall sub_14007A150(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  NTSTATUS Status; // ebx
  __int64 v6; // rcx

  Status = IoStatus->Status;
  *(_QWORD *)(Context[620] + 72LL) = 0LL;
  v6 = Context[620];
  if ( v6
    && (*((_DWORD *)Context + 87) != 1 || (*((_BYTE *)Context + 107) & 4) != 0)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 1, 0) )
  {
    sub_1400212C0((__int64)Context, 0LL, 0LL);
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x43u, (__int64)&unk_14014C778, Status);
  }
}
