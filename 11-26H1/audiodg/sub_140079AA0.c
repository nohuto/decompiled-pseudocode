/*
 * XREFs of sub_140079AA0 @ 0x140079AA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_140039414 @ 0x140039414 (sub_140039414.c)
 *     sub_140075F84 @ 0x140075F84 (sub_140075F84.c)
 *     sub_140079D40 @ 0x140079D40 (sub_140079D40.c)
 *     sub_14007ECEC @ 0x14007ECEC (sub_14007ECEC.c)
 *     sub_14007ED20 @ 0x14007ED20 (sub_14007ED20.c)
 *     sub_14007EDC4 @ 0x14007EDC4 (sub_14007EDC4.c)
 *     sub_14007EEE4 @ 0x14007EEE4 (sub_14007EEE4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140079AA0(__int64 a1)
{
  unsigned int v2; // esi
  signed __int32 v3; // edx
  _QWORD *v4; // rdi
  unsigned int v5; // eax
  signed __int32 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  sub_14007EEE4(a1, 1LL);
  v4 = (_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), v3, 0) )
  {
    v9 = a1;
    sub_140039414(&v9);
    v8 = 0LL;
    sub_14007EDC4(a1);
    if ( (int)sub_140075F84(&v9, &v8) >= 0 )
    {
      v7 = -2;
      _InterlockedCompareExchange(&v7, *(_DWORD *)(a1 + 56), -2);
      sub_14007ED20(a1);
      v5 = sub_1400B6010(*v4);
      v2 = sub_140079D40(v5, *v4, *(_QWORD *)(a1 + 40));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) == 1 )
        sub_1400125D4((__int64 *)(a1 + 24));
      sub_14007ECEC();
    }
    sub_1400125D4(&v8);
    if ( a1 )
      sub_1400B6010(a1);
  }
  return v2;
}
