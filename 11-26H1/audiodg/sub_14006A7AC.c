/*
 * XREFs of sub_14006A7AC @ 0x14006A7AC
 * Callers:
 *     sub_1400588CC @ 0x1400588CC (sub_1400588CC.c)
 * Callees:
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006A7AC(__int64 a1)
{
  int v1; // ebx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 120) )
  {
    v1 = sub_1400B6010(*(_QWORD *)(a1 + 176));
    if ( v1 < 0 )
    {
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0x35u, (__int64)&unk_1400C9A58, v1);
      }
      sub_14005A470("CPipeInstance::SetLoopbackConstriction", 4289, v1);
    }
  }
  return (unsigned int)v1;
}
