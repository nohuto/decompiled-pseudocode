/*
 * XREFs of sub_14002EE90 @ 0x14002EE90
 * Callers:
 *     sub_140003E20 @ 0x140003E20 (sub_140003E20.c)
 * Callees:
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14002EE90(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx

  if ( (int)sub_1400B6010(a3) < 0 || (int)sub_1400B6010(a3) < 0 )
  {
    return 0;
  }
  else
  {
    v4 = sub_1400B6010(0LL);
    if ( v4 < 0 )
    {
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 43LL, &unk_1400C9A58);
      }
      sub_14005A470("CPipeInstance::InitializeDitherInterface", 3484LL, (unsigned int)v4);
    }
  }
  return (unsigned int)v4;
}
