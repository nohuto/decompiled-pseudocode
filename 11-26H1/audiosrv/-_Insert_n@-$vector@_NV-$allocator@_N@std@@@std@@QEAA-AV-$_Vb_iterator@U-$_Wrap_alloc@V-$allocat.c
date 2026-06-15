/*
 * XREFs of ?_Insert_n@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_KAEB_N@Z @ 0x18013F4B4
 * Callers:
 *     ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x180140278 (-resize@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K_N@Z.c)
 * Callees:
 *     ??$_Fill_vbool@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@@std@@YAXV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@_N@Z @ 0x180133770 (--$_Fill_vbool@V-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@@std@@YAXV-$_Vb_it.c)
 *     ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x18013F5B0 (-_Insert_x@-$vector@_NV-$allocator@_N@std@@@std@@QEAA_KV-$_Vb_const_iterator@U-$_Wrap_alloc@V-$a.c)
 */

_QWORD *__fastcall std::vector<bool>::_Insert_n(__int64 *a1, _QWORD *a2, __int128 *a3, __int64 a4, char *a5)
{
  __int64 inserted; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int128 v12; // xmm1
  char v13; // dl
  __int64 v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  v16 = *a3;
  inserted = std::vector<bool>::_Insert_x(a1, &v16, a4);
  v9 = *a1;
  if ( inserted >= 0 )
    v10 = v9 + 4 * ((unsigned __int64)inserted >> 5);
  else
    v10 = v9 - (4 * ((unsigned __int64)~inserted >> 5) + 4);
  v11 = inserted & 0x1F;
  *a2 = v10;
  a2[1] = v11;
  if ( a4 )
  {
    v12 = *(_OWORD *)a2;
    if ( a4 >= 0 || v11 >= -a4 )
    {
      v13 = v11 + a4;
      v14 = v12 + 4 * ((v11 + a4) >> 5);
    }
    else
    {
      v13 = v11 + a4;
      v14 = v12 - (4 * (~(v11 + a4) >> 5) + 4);
    }
    *(_QWORD *)&v16 = v14;
    *((_QWORD *)&v16 + 1) = v13 & 0x1F;
    v17 = v12;
    std::_Fill_vbool<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
      (int **)&v17,
      (__int64)&v16,
      *a5);
  }
  return a2;
}
