/*
 * XREFs of ?_Make_iter@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@@Z @ 0x18013F7AC
 * Callers:
 *     ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x18013FFF4 (-erase@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::vector<bool>::_Make_iter(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  bool v3; // zf
  __int64 v5; // r10
  __int64 v6; // rdx

  v3 = a1[3] == 0;
  v5 = *a1;
  *a2 = *a1;
  a2[1] = 0LL;
  if ( !v3 )
  {
    v6 = a3[1] + 32 * ((*a3 - v5) >> 2);
    if ( v6 >= 0 )
      *a2 = v5 + 4 * ((unsigned __int64)v6 >> 5);
    else
      *a2 = v5 - (4 * ((unsigned __int64)~v6 >> 5) + 4);
    a2[1] = v6 & 0x1F;
  }
  return a2;
}
