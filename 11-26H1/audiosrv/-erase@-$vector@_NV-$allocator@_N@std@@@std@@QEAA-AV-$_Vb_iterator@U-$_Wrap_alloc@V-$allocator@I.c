/*
 * XREFs of ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x18013FFF4
 * Callers:
 *     ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x180140278 (-resize@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K_N@Z.c)
 * Callees:
 *     ??$_Copy_vbool@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x180133220 (--$_Copy_vbool@V-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@V12@@std@@YA-AV-$_.c)
 *     ?_Make_iter@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@@Z @ 0x18013F7AC (-_Make_iter@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$alloca.c)
 *     ?_Trim@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K@Z @ 0x18013FE10 (-_Trim@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K@Z.c)
 *     ?end@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@XZ @ 0x18013FF24 (-end@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@s.c)
 */

unsigned __int64 *__fastcall std::vector<bool>::erase(__int64 *a1, unsigned __int64 *a2, __int128 *a3)
{
  __int128 *v5; // r11
  __int64 *v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 *result; // rax
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  __int128 v13; // [rsp+30h] [rbp-40h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF

  v13 = *a3;
  std::vector<bool>::_Make_iter(a1, (__int64 *)&v12, &v13);
  v14 = *v5;
  std::vector<bool>::_Make_iter(v6, (__int64 *)&v13, &v14);
  v7 = *((_QWORD *)&v12 + 1) + 32 * (((__int64)v12 - *a1) >> 2);
  if ( v12 != v13 )
  {
    v8 = std::vector<bool>::end(a1, &v16);
    v14 = v12;
    v12 = *(_OWORD *)v8;
    v15 = v13;
    std::_Copy_vbool<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
      &v13,
      (_DWORD **)&v15,
      (__int64)&v12,
      (__int64)&v14);
    std::vector<bool>::_Trim(a1, *((_QWORD *)&v13 + 1) + 32 * (((__int64)v13 - *a1) >> 2));
  }
  v9 = *a1;
  if ( v7 >= 0 )
    v10 = v9 + 4 * ((unsigned __int64)v7 >> 5);
  else
    v10 = v9 - (4 * ((unsigned __int64)~v7 >> 5) + 4);
  result = a2;
  *a2 = v10;
  a2[1] = v7 & 0x1F;
  return result;
}
