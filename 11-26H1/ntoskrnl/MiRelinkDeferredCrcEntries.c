/*
 * XREFs of MiRelinkDeferredCrcEntries @ 0x1402E9630
 * Callers:
 *     MiSharePagesYield @ 0x1402E9160 (MiSharePagesYield.c)
 * Callees:
 *     MiCrcStillIntact @ 0x1402E96C8 (MiCrcStillIntact.c)
 */

_QWORD *__fastcall MiRelinkDeferredCrcEntries(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD **v5; // rdi
  unsigned int i; // esi
  _QWORD *v9; // rbx
  _QWORD *v10; // r14

  v5 = (_QWORD **)(a2 + 40);
  for ( i = 1; i <= 2; ++i )
  {
    v9 = *v5;
    if ( *v5 )
    {
      do
      {
        v10 = (_QWORD *)*v9;
        if ( (unsigned int)MiCrcStillIntact(a1, a3, v9, i) )
        {
          *v9 = a4;
          a4 = v9;
        }
        v9 = v10;
      }
      while ( v10 );
    }
    *v5 = 0LL;
    v5 += 5;
  }
  return a4;
}
