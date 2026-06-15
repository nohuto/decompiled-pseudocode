/*
 * XREFs of sub_14000FEC8 @ 0x14000FEC8
 * Callers:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 *     sub_14000F30C @ 0x14000F30C (sub_14000F30C.c)
 *     sub_14000F3C4 @ 0x14000F3C4 (sub_14000F3C4.c)
 *     sub_14000F470 @ 0x14000F470 (sub_14000F470.c)
 *     sub_14000F528 @ 0x14000F528 (sub_14000F528.c)
 *     sub_14000F5B0 @ 0x14000F5B0 (sub_14000F5B0.c)
 *     sub_14000F65C @ 0x14000F65C (sub_14000F65C.c)
 *     sub_14000F6C0 @ 0x14000F6C0 (sub_14000F6C0.c)
 *     sub_14000F730 @ 0x14000F730 (sub_14000F730.c)
 *     sub_14003F04C @ 0x14003F04C (sub_14003F04C.c)
 *     sub_14003FF00 @ 0x14003FF00 (sub_14003FF00.c)
 *     sub_140040834 @ 0x140040834 (sub_140040834.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 *     sub_14009D47C @ 0x14009D47C (sub_14009D47C.c)
 *     sub_1400A2CB8 @ 0x1400A2CB8 (sub_1400A2CB8.c)
 *     sub_1400A2D44 @ 0x1400A2D44 (sub_1400A2D44.c)
 *     sub_1400A2E00 @ 0x1400A2E00 (sub_1400A2E00.c)
 *     sub_1400A4E38 @ 0x1400A4E38 (sub_1400A4E38.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_14000FEC8(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  ULONG v7; // r8d

  v5 = (unsigned __int16 *)qword_1400E7328;
  v6 = 0;
  if ( qword_1400E7328 )
  {
    UserData->Ptr = qword_1400E7328;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v7 = 0;
  }
  UserData->Size = v7;
  UserData->Reserved = v6;
  return EventWriteTransfer(RegHandle, a2, 0LL, 0LL, UserDataCount, UserData);
}
