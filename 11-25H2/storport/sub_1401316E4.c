/*
 * XREFs of sub_1401316E4 @ 0x1401316E4
 * Callers:
 *     sub_1401A74B0 @ 0x1401A74B0 (sub_1401A74B0.c)
 *     sub_1401A756C @ 0x1401A756C (sub_1401A756C.c)
 *     sub_1401A7654 @ 0x1401A7654 (sub_1401A7654.c)
 *     sub_1401A7724 @ 0x1401A7724 (sub_1401A7724.c)
 *     sub_1401A7904 @ 0x1401A7904 (sub_1401A7904.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1401316E4(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx

  if ( a1 )
  {
    if ( a2 )
    {
      v2 = (_QWORD *)(a1 + 8);
      v3 = *(_QWORD **)(a1 + 8);
      if ( v3 )
      {
        if ( v2[1] )
        {
          while ( v3 != v2 )
          {
            if ( v3[2] == *a2 && v3[3] == a2[1] )
              return v3;
            v3 = (_QWORD *)*v3;
          }
        }
      }
    }
  }
  return 0LL;
}
