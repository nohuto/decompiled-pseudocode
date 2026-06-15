/*
 * XREFs of ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x18013F5B0
 * Callers:
 *     ?_Insert_n@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_KAEB_N@Z @ 0x18013F4B4 (-_Insert_n@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocat.c)
 * Callees:
 *     ??$_Copy_backward_unchecked@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x180133164 (--$_Copy_backward_unchecked@V-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@V12@@.c)
 *     ??$_Resize_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBI@Z @ 0x180133F9C (--$_Resize_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBI@Z.c)
 *     ??$_Uninitialized_fill_n@V?$allocator@I@std@@@std@@YAPEAIPEAI_KAEBIAEAV?$allocator@I@0@@Z @ 0x180134398 (--$_Uninitialized_fill_n@V-$allocator@I@std@@@std@@YAPEAIPEAI_KAEBIAEAV-$allocator@I@0@@Z.c)
 *     ?_Xlen@?$vector@_NV?$allocator@_N@std@@@std@@SAXXZ @ 0x18013FE78 (-_Xlen@-$vector@_NV-$allocator@_N@std@@@std@@SAXXZ.c)
 *     ?end@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@XZ @ 0x18013FF24 (-end@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@s.c)
 */

__int64 __fastcall std::vector<bool>::_Insert_x(const void **a1, _QWORD *a2, unsigned __int64 a3)
{
  char *v3; // r10
  __int64 v6; // rdi
  char *v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  char *v10; // rax
  char *v12; // r10
  __int128 *v13; // rax
  char *v14; // rdx
  char *v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v19; // [rsp+20h] [rbp-50h] BYREF
  __int128 v20; // [rsp+30h] [rbp-40h] BYREF
  __int128 v21; // [rsp+40h] [rbp-30h] BYREF
  char v22[16]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v23; // [rsp+60h] [rbp-10h] BYREF
  int v24; // [rsp+80h] [rbp+10h] BYREF

  v3 = (char *)*a1;
  v6 = a2[1] + 32 * ((__int64)(*a2 - (_QWORD)*a1) >> 2);
  if ( !a3 )
    return v6;
  v7 = (char *)a1[3];
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v7 < a3 )
    std::vector<bool>::_Xlen();
  v24 = 0;
  v8 = (unsigned __int64)&v7[a3 + 31] >> 5;
  v9 = ((_BYTE *)a1[1] - v3) >> 2;
  if ( v8 >= v9 )
  {
    if ( v8 <= v9 )
      goto LABEL_10;
    if ( v8 > ((_BYTE *)a1[2] - v3) >> 2 )
    {
      std::vector<unsigned int>::_Resize_reallocate<unsigned int>(a1, v8, (__int64)&v24);
      goto LABEL_10;
    }
    v10 = (char *)std::_Uninitialized_fill_n<std::allocator<unsigned int>>(a1[1], v8 - v9, &v24);
  }
  else
  {
    v10 = &v3[4 * v8];
  }
  a1[1] = v10;
LABEL_10:
  if ( a1[3] )
  {
    std::vector<bool>::end(a1, &v19);
    a1[3] = v12;
    v13 = (__int128 *)std::vector<bool>::end(a1, v22);
    v14 = (char *)*a1;
    if ( v6 >= 0 )
      v15 = &v14[4 * ((unsigned __int64)v6 >> 5)];
    else
      v15 = &v14[-4 * ((unsigned __int64)~v6 >> 5) - 4];
    v16 = v19;
    v17 = *v13;
    *(_QWORD *)&v19 = v15;
    v21 = v16;
    *((_QWORD *)&v19 + 1) = v6 & 0x1F;
    v20 = v17;
    std::_Copy_backward_unchecked<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
      &v23,
      (__int64 *)&v19,
      (__int64)&v21,
      &v20);
  }
  else
  {
    a1[3] = (const void *)a3;
  }
  return v6;
}
