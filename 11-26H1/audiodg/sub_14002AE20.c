/*
 * XREFs of sub_14002AE20 @ 0x14002AE20
 * Callers:
 *     sub_140003E20 @ 0x140003E20 (sub_140003E20.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_14002AE20(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx

  if ( (int)sub_1400B6010(a3) < 0 )
    return 0;
  if ( !*(_DWORD *)(a2 + 24) )
  {
    v5 = sub_1400B6010(a2);
    if ( v5 < 0 )
      goto LABEL_6;
LABEL_11:
    v5 = sub_1400B6010(a2);
    if ( v5 >= 0 )
    {
      sub_1400B6010(0LL);
      sub_1400B6010(0LL);
      sub_1400B6010(0LL);
      sub_1400B6010(0LL);
      v5 = sub_1400B6010(a3);
      if ( v5 >= 0 )
        return (unsigned int)v5;
    }
    goto LABEL_6;
  }
  v5 = sub_1400B6010(a2);
  if ( v5 >= 0 )
    goto LABEL_11;
LABEL_6:
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 45LL, &unk_1400C9A58);
  }
  sub_14005A470("CPipeInstance::InitializeMatrixInterface", 3674LL, (unsigned int)v5);
  return (unsigned int)v5;
}
