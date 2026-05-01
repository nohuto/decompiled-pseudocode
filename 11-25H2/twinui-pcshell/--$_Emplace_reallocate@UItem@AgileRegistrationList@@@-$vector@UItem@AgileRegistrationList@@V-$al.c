/*
 * XREFs of ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@AEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x18002816C
 * Callers:
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180027B54 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@QEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x180027F20 (--$_Destroy_range@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistr.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180029B90 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@QEAU12@0PEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x1801D7F20 (--$_Uninitialized_move@PEAUItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E0490 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

_QWORD *__fastcall std::vector<AgileRegistrationList::Item>::_Emplace_reallocate<AgileRegistrationList::Item>(
        void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  char *v14; // r15
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // rax
  char *v22; // rsi
  char *v23; // r12
  void *v24; // rcx
  const struct std::nothrow_t *v25; // rdx
  _QWORD *result; // rax
  __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+28h] [rbp-40h]
  void *v29; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v31; // [rsp+88h] [rbp+20h]

  v6 = a2 - (_BYTE *)*a1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  v30 = v8;
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (char *)v13;
  v28 = v13;
  v15 = (_QWORD *)((v6 & 0xFFFFFFFFFFFFFFF0uLL) + v13);
  v31 = v15;
  v27 = (__int64)(v15 + 2);
  try
  {
    *(_DWORD *)v15 = *(_DWORD *)a3;
    v16 = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = 0LL;
    v15[1] = v16;
    v29 = v15;
    v17 = a1[1];
    v18 = *a1;
    v19 = (__int64)v14;
    if ( a2 == (_BYTE *)v17 )
    {
      while ( v18 != v17 )
      {
        *(_DWORD *)v19 = *(_DWORD *)v18;
        v21 = v18[1];
        v18[1] = 0LL;
        *(_QWORD *)(v19 + 8) = v21;
        v19 += 16LL;
        v18 += 2;
      }
      std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(v19, v19);
    }
    else
    {
      std::_Uninitialized_move<AgileRegistrationList::Item *>(v18, a2, v14);
      v29 = v14;
      std::_Uninitialized_move<AgileRegistrationList::Item *>(a2, a1[1], v20);
    }
    v22 = (char *)*a1;
    if ( *a1 )
    {
      v23 = (char *)a1[1];
      while ( v22 != v23 )
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v22 + 8);
        v22 += 16;
      }
      v24 = *a1;
      v25 = (const struct std::nothrow_t *)(((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
      v30 = (unsigned __int64)v25;
      v29 = v24;
      if ( (unsigned __int64)v25 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v29, &v30);
        v24 = v29;
        v25 = (const struct std::nothrow_t *)v30;
      }
      operator delete(v24, v25);
    }
    *a1 = v14;
    a1[1] = &v14[16 * v9];
    a1[2] = &v14[16 * v8];
    result = v31;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>((__int64)v29, v27);
    std::_Deallocate<16,0>(v28, 16 * v30);
    throw;
  }
  return result;
}
