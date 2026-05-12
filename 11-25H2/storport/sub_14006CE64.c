/*
 * XREFs of sub_14006CE64 @ 0x14006CE64
 * Callers:
 *     sub_14002D0D0 @ 0x14002D0D0 (sub_14002D0D0.c)
 * Callees:
 *     sub_14006E9C0 @ 0x14006E9C0 (sub_14006E9C0.c)
 *     sub_140071474 @ 0x140071474 (sub_140071474.c)
 */

__int64 __fastcall sub_14006CE64(__int64 a1, IRP *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax

  a2->IoStatus.Information = 0LL;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 15122436 )
  {
    v4 = sub_14006E9C0();
    goto LABEL_6;
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 15122440 )
  {
    v4 = sub_140071474();
LABEL_6:
    v3 = v4;
    goto LABEL_7;
  }
  v3 = -1073741808;
LABEL_7:
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return v3;
}
