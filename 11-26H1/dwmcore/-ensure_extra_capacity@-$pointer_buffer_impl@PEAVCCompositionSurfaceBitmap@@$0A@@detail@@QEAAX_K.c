/*
 * XREFs of ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@QEAAX_K@Z @ 0x1800E0190
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@IEAAPEAPEAVCCompositionSurfaceBitmap@@_K0@Z @ 0x1800DFBE8 (-reserve_region@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompo.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rax
  void *v9; // rbx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rbp
  void *v12; // rdi
  HANDLE ProcessHeap; // rax
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v4 = *(_QWORD *)(detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1) - 16);
    }
    else
    {
      if ( (unsigned __int64)(*(_DWORD *)a1 & 3) - 2 > 1 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      v4 = 0LL;
    }
  }
  else
  {
    v4 = 1LL;
  }
  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v5 = *(_QWORD *)(detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1) - 8);
      goto LABEL_8;
    }
    v5 = (*(_DWORD *)a1 & 3) - 2LL;
    if ( (*(_DWORD *)a1 & 3) == 2LL )
      goto LABEL_8;
    if ( (*(_DWORD *)a1 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v5 = 1LL;
LABEL_8:
  result = v5 - v4;
  if ( result >= a2 )
    return result;
  v7 = v4 + a2;
  if ( v4 + a2 < v4 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else if ( v7 == 1 )
  {
    *a1 = 3LL;
    return result;
  }
  v10 = operator new[](8 * v7 + 16);
  v11 = (unsigned __int64)(v10 + 2);
  *v10 = 0LL;
  v10[1] = 0LL;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, (__int64)(v10 + 2), v4);
  v12 = (void *)detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1);
  v16 = v14;
  v17 = v15;
  stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v16, (__int64)(8 * v4) >> 3);
  std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
    v12,
    (__int64)v12 + 8 * v4,
    (void *)(v14 + 8 * v15));
  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v8 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1);
      *a1 = v11 | 1;
      v9 = (void *)(v8 - 16);
      if ( v8 != 16 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v9);
      }
      goto LABEL_14;
    }
    if ( (unsigned __int64)(*(_DWORD *)a1 & 3) - 2 >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  *a1 = v11 | 1;
LABEL_14:
  *(_QWORD *)(detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1) - 16) = v4;
  result = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1);
  *(_QWORD *)(result - 8) = v7;
  return result;
}
