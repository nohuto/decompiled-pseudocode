/*
 * XREFs of sub_1400286C4 @ 0x1400286C4
 * Callers:
 *     sub_140003E20 @ 0x140003E20 (sub_140003E20.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1400286C4(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx

  if ( (int)sub_1400B6010(a3) < 0 )
    return 0;
  if ( !*(_DWORD *)(a2 + 24) )
  {
    v6 = sub_1400B6010(a2);
    if ( v6 >= 0 )
      goto LABEL_6;
LABEL_12:
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 44LL, &unk_1400C9A58);
    }
    sub_14005A470("CPipeInstance::InitializeRateConverterInterface", 3594LL, (unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = sub_1400B6010(a2);
  if ( v6 < 0 )
    goto LABEL_12;
LABEL_6:
  v6 = sub_1400B6010(a2);
  if ( v6 < 0 )
    goto LABEL_12;
  sub_1400B6010(0LL);
  sub_1400B6010(0LL);
  if ( (float)((float)(1.0 - *(float *)(a1 + 200)) * (float)*(int *)(sub_1400B6010(0LL) + 4)) >= 10.0 )
    sub_1400B6010(0LL);
  if ( (float)((float)(*(float *)(a1 + 204) + 1.0) * (float)*(int *)(sub_1400B6010(0LL) + 4)) <= 384000.0 )
    sub_1400B6010(0LL);
  sub_1400B6010(0LL);
  sub_1400B6010(0LL);
  sub_1400B6010(0LL);
  v6 = sub_1400B6010(a3);
  if ( v6 < 0 )
    goto LABEL_12;
  return (unsigned int)v6;
}
