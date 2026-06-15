/*
 * XREFs of sub_14007BFE0 @ 0x14007BFE0
 * Callers:
 *     sub_14007F890 @ 0x14007F890 (sub_14007F890.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_14001A788 @ 0x14001A788 (sub_14001A788.c)
 *     sub_140078F50 @ 0x140078F50 (sub_140078F50.c)
 *     sub_14007ED70 @ 0x14007ED70 (sub_14007ED70.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007BFE0(__int64 a1, __int64 a2)
{
  int AgileReference; // edi
  __int64 *v5; // rax
  __int64 *v6; // rdi
  signed __int32 v7; // ecx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+40h] [rbp+18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  AgileReference = sub_140078F50(a1);
  if ( AgileReference >= 0 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) != 1 )
      return (unsigned int)-2147483624;
    v10 = (__int64 *)(a1 + 120);
    v5 = sub_14001A788(&v10);
    v6 = v5;
    if ( a2 )
    {
      sub_1400125D4(v5);
      AgileReference = RoGetAgileReference(0LL, &unk_1400CBB30, a2, v6);
      if ( AgileReference < 0 )
        return (unsigned int)AgileReference;
    }
    else
    {
      v10 = (__int64 *)*v5;
      v11 = 0LL;
      *v5 = 0LL;
      sub_1400125D4((__int64 *)&v10);
      sub_1400125D4(&v11);
      AgileReference = 0;
    }
    sub_14007ED70(a1);
    if ( a2 )
    {
      *(_QWORD *)(a1 + 128) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 136));
    }
    _InterlockedOr(v9, 0);
    v7 = *(_DWORD *)(a1 + 56);
    LODWORD(v10) = -2;
    _InterlockedCompareExchange((volatile signed __int32 *)&v10, v7, -2);
    if ( (unsigned int)((_DWORD)v10 - 1) <= 3 )
      sub_1400B6010(a1);
  }
  return (unsigned int)AgileReference;
}
