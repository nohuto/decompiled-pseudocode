/*
 * XREFs of sub_14006C300 @ 0x14006C300
 * Callers:
 *     <none>
 * Callees:
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006C300(__int64 a1, int a2)
{
  int v4; // ebx

  v4 = sub_1400B6010(*(_QWORD *)(a1 + 8));
  if ( v4 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0xEu, (__int64)&unk_1400CA258, v4);
    }
    sub_14005A470("CVirtualProtectedOutput::SetPolicy", 350, v4);
  }
  else
  {
    *(_DWORD *)(a1 + 20) = a2;
  }
  return (unsigned int)v4;
}
