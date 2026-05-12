/*
 * XREFs of sub_1401A9488 @ 0x1401A9488
 * Callers:
 *     sub_14005D618 @ 0x14005D618 (sub_14005D618.c)
 *     sub_1400D3B1C @ 0x1400D3B1C (sub_1400D3B1C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1401A9488(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a2 + 184);
  result = 0LL;
  v5 = *(_QWORD *)(v3 + 24);
  if ( !v5 || *(_WORD *)(v3 + 16) < 0x10u )
    return 3221225485LL;
  if ( *(_WORD *)v5 < 0x10u )
  {
    *(_WORD *)v5 = 16;
    return 2147483653LL;
  }
  else
  {
    *(_QWORD *)(v5 + 8) = a3;
  }
  return result;
}
