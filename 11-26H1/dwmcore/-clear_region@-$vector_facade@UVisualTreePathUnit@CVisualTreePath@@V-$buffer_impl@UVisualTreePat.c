/*
 * XREFs of ?clear_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800903C0
 * Callers:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x1800906F0 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@PEAVCMILMatrix@@@Z @ 0x180260BE8 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@std@@V?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@V?$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@0@0V12@@Z @ 0x18000A690 (--$move@V-$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@std@@V-$checked_array_iterator.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 */

__int64 __fastcall detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v6; // rdi
  __int64 result; // rax
  __int64 v9; // r9
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  v3 = *a1;
  v4 = a2 + a3;
  v6 = (a1[1] - *a1) >> 4;
  if ( a2 + a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x18009044ELL);
  }
  result = (__int64)stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v12, v3, v6);
  if ( v4 != v6 )
  {
    v10 = v12;
    v11 = v13;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v10, v9);
    v12 = v10;
    v13 = v11;
    result = std::move<std::move_iterator<CVisualTreePath::VisualTreePathUnit *>,stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *>>(
               (__int64)&v10,
               v3 + 16 * v4,
               v3 + 16 * v6,
               &v12);
  }
  a1[1] += -16 * a3;
  return result;
}
