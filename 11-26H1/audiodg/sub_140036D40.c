/*
 * XREFs of sub_140036D40 @ 0x140036D40
 * Callers:
 *     sub_140036AC0 @ 0x140036AC0 (sub_140036AC0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140048178 @ 0x140048178 (sub_140048178.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140036D40(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  int v6; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v5 = sub_140048178(*(_QWORD *)a1);
    if ( v5 < 0 )
    {
      v6 = 87;
LABEL_4:
      sub_14000C2A8((int)retaddr, v6, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v5);
      return (unsigned int)v5;
    }
    v5 = sub_1400B6010(a2);
    if ( v5 < 0 )
    {
      v6 = 90;
      goto LABEL_4;
    }
  }
  else
  {
    v5 = sub_1400B6010(a2);
    if ( v5 < 0 )
    {
      v6 = 95;
      goto LABEL_4;
    }
  }
  *(_BYTE *)(a1 + 24) = 1;
  return 0LL;
}
