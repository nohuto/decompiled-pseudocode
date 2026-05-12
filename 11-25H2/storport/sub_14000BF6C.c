/*
 * XREFs of sub_14000BF6C @ 0x14000BF6C
 * Callers:
 *     sub_14000B0B0 @ 0x14000B0B0 (sub_14000B0B0.c)
 * Callees:
 *     sub_14000C020 @ 0x14000C020 (sub_14000C020.c)
 *     sub_14000D4EC @ 0x14000D4EC (sub_14000D4EC.c)
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_140067F78 @ 0x140067F78 (sub_140067F78.c)
 */

char __fastcall sub_14000BF6C(__int64 a1, int a2)
{
  unsigned __int8 v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdi
  PDEVICE_OBJECT *v5; // rax

  v2 = a2;
  v3 = sub_14001F350();
  v4 = v3;
  if ( v3 )
  {
    LOBYTE(v5) = KeCancelTimer((PKTIMER)(v3 + 1184));
    if ( (_BYTE)v5 )
    {
      LODWORD(v5) = sub_14000D4EC(v4);
      if ( (_DWORD)v5 )
        LOBYTE(v5) = sub_14000C020(v4, 0LL);
    }
  }
  else
  {
    v5 = &off_140168120;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
    {
      LODWORD(v5) = HIDWORD(off_140168120->Timer);
      if ( ((unsigned __int8)v5 & 0x20) != 0 && BYTE1(off_140168120->Timer) >= 3u )
        LOBYTE(v5) = sub_140067F78(off_140168120->AttachedDevice, 50LL, &unk_14014A2D8, v2, BYTE1(a2), BYTE2(a2));
    }
  }
  return (char)v5;
}
