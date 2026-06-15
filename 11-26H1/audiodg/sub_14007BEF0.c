/*
 * XREFs of sub_14007BEF0 @ 0x14007BEF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_140039414 @ 0x140039414 (sub_140039414.c)
 *     sub_140078F50 @ 0x140078F50 (sub_140078F50.c)
 *     sub_14007ED70 @ 0x14007ED70 (sub_14007ED70.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007BEF0(__int64 a1, __int64 a2)
{
  int v4; // esi
  signed __int32 v5; // ecx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = sub_140078F50(a1);
  if ( v4 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 20), 1, 0) )
    {
      v4 = -2147483624;
      RoOriginateError(2147483672LL, 0LL);
    }
    else
    {
      if ( a2 )
        *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      if ( *(_QWORD *)(a1 + 24) != a2 )
      {
        v8 = a2;
        sub_140039414(&v8);
        v8 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = a2;
        sub_1400125D4(&v8);
      }
      _InterlockedOr(v7, 0);
      _InterlockedAdd((volatile signed __int32 *)(a1 + 32), 1u);
      sub_14007ED70(a1);
      v5 = *(_DWORD *)(a1 + 56);
      LODWORD(v8) = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v8, v5, -2);
      if ( (unsigned int)(v8 - 1) <= 3 )
        sub_1400B6010(a1);
    }
  }
  return (unsigned int)v4;
}
