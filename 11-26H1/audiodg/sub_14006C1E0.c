/*
 * XREFs of sub_14006C1E0 @ 0x14006C1E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14006BC34 @ 0x14006BC34 (sub_14006BC34.c)
 *     sub_14006BCA4 @ 0x14006BCA4 (sub_14006BCA4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006C1E0(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int32 v3; // edi

  v1 = *(_QWORD *)(a1 + 8);
  v3 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 16));
  if ( !v3 )
  {
    sub_14006BCA4(*(_QWORD *)(a1 + 8), a1);
    sub_14006BC34((_QWORD *)a1);
  }
  sub_1400B6010(v1);
  return v3;
}
