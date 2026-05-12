/*
 * XREFs of sub_140009C20 @ 0x140009C20
 * Callers:
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14000CE18 @ 0x14000CE18 (sub_14000CE18.c)
 * Callees:
 *     sub_140009D88 @ 0x140009D88 (sub_140009D88.c)
 *     sub_14000A2D8 @ 0x14000A2D8 (sub_14000A2D8.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_140076BA0 @ 0x140076BA0 (sub_140076BA0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140009C20(char *Context, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v5; // r14d
  DWORD LowPart; // esi
  unsigned int v7; // eax
  __int128 v9; // [rsp+70h] [rbp-48h] BYREF

  v9 = 0LL;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 53LL, &unk_14014C778, Context, Irp);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = *((_DWORD *)Context + 137);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( byte_140168DAA )
  {
    IoGetActivityIdIrp(Irp, &v9);
    if ( (byte_1401694F2 & 0x10) != 0 )
      sub_140076BA0(
        Irp->Tail.Overlay.CurrentStackLocation,
        CurrentStackLocation->MinorFunction,
        (unsigned int)&v9,
        *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
        Context[104],
        Context[105],
        Context[106],
        (char)Irp,
        CurrentStackLocation->MinorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter,
        v5,
        LowPart,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength);
  }
  if ( LowPart == 4 )
    *((_DWORD *)Context + 234) = 0;
  if ( (unsigned __int8)sub_1400215B0(Context, 3LL) )
  {
    v7 = sub_14000A2D8(Context, Irp);
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 4) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      sub_140055BD4(off_140168120->AttachedDevice, 54LL, &unk_14014C778, v7);
    }
  }
  sub_140009D88(Context, Irp);
  return 0LL;
}
