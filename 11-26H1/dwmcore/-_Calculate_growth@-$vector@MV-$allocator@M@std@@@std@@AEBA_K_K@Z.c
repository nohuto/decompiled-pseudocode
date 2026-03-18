/*
 * XREFs of ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801E0BF8
 * Callers:
 *     ??$_Insert_counted_range@PEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@I@std@@@std@@@1@PEBI_K@Z @ 0x1801E7B2C (--$_Insert_counted_range@PEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x18023E898 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<float>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x3FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 2;
  v4 = v3 >> 1;
  if ( v3 <= 0x3FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
