/*
 * XREFs of sub_140004140 @ 0x140004140
 * Callers:
 *     sub_140010230 @ 0x140010230 (sub_140010230.c)
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 *     sub_14006D4A0 @ 0x14006D4A0 (sub_14006D4A0.c)
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 * Callees:
 *     sub_140003E20 @ 0x140003E20 (sub_140003E20.c)
 *     sub_1400041F8 @ 0x1400041F8 (sub_1400041F8.c)
 *     sub_140004CF8 @ 0x140004CF8 (sub_140004CF8.c)
 *     sub_14000908C @ 0x14000908C (sub_14000908C.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 */

__int64 __fastcall sub_140004140(__int64 a1, __int64 a2)
{
  int v4; // ebx

  v4 = sub_1400041F8();
  if ( v4 < 0
    || (v4 = sub_140003E20(a1), v4 < 0)
    || (v4 = sub_14000908C(a1), v4 < 0)
    || (v4 = sub_140004CF8(a1, a2), v4 < 0) )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 36LL, &unk_1400C9A58);
    }
    sub_14005A470("CPipeInstance::ConnectAPOs", 3048LL, (unsigned int)v4);
  }
  return (unsigned int)v4;
}
