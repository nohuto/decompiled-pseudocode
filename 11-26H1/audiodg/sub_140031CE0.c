/*
 * XREFs of sub_140031CE0 @ 0x140031CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140031CE0(__int64 a1)
{
  int v1; // ebx

  v1 = sub_1400B6010(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL));
  if ( v1 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 19LL, &unk_1400CA218);
    }
    sub_14005A470("CAPOProcessNode::IsLeftFormatSupported", 714LL, (unsigned int)v1);
  }
  return (unsigned int)v1;
}
