/*
 * XREFs of ?_Trim@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K@Z @ 0x18013FE10
 * Callers:
 *     ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x18013FFF4 (-erase@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I.c)
 * Callees:
 *     ?_Xlen@?$vector@_NV?$allocator@_N@std@@@std@@SAXXZ @ 0x18013FE78 (-_Xlen@-$vector@_NV-$allocator@_N@std@@@std@@SAXXZ.c)
 */

unsigned __int64 __fastcall std::vector<bool>::_Trim(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 result; // rax
  int v5; // edx

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<bool>::_Xlen();
  v2 = *a1;
  v3 = (a2 + 31) >> 5;
  result = (a1[1] - *a1) >> 2;
  if ( v3 < result )
  {
    result = v2 + 4 * v3;
    if ( result != a1[1] )
      a1[1] = result;
  }
  a1[3] = a2;
  v5 = a2 & 0x1F;
  if ( v5 )
  {
    result = (unsigned int)((1 << v5) - 1);
    *(_DWORD *)(v2 + 4 * v3 - 4) &= result;
  }
  return result;
}
