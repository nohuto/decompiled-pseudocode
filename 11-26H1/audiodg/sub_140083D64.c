/*
 * XREFs of sub_140083D64 @ 0x140083D64
 * Callers:
 *     sub_140082034 @ 0x140082034 (sub_140082034.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140083D64(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rdx

  v3 = (_QWORD *)*a2;
  v4 = 0LL;
  while ( v3 )
  {
    v5 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( *(_QWORD *)(v5 + 120) == a3 )
      return v5;
  }
  return v4;
}
