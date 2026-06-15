/*
 * XREFs of sub_14002B264 @ 0x14002B264
 * Callers:
 *     sub_140003E20 @ 0x140003E20 (sub_140003E20.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14002B264(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx

  if ( (int)sub_1400B6010(a3) >= 0 )
  {
    v5 = sub_1400B6010(a2);
    if ( v5 < 0 || (v5 = sub_1400B6010(0LL), v5 < 0) || (v5 = sub_1400B6010(a3), v5 < 0) )
    {
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 42LL, &unk_1400C9A58);
      }
      sub_14005A470("CPipeInstance::InitializeMeterInterface", 3429LL, (unsigned int)v5);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v5;
}
