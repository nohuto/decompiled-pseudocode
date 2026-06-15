/*
 * XREFs of sub_14006A694 @ 0x14006A694
 * Callers:
 *     sub_14006DF80 @ 0x14006DF80 (sub_14006DF80.c)
 * Callees:
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14006A694(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  __int64 v3; // rcx

  v2 = -2147467263;
  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 184);
  if ( !v3 || (v2 = sub_1400B6010(v3), v2 < 0) )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0x36u, (__int64)&unk_1400C9A58, v2);
    }
    sub_14005A470("CPipeInstance::GetPlaybackProtectionApo", 4325, v2);
  }
  return (unsigned int)v2;
}
