/*
 * XREFs of ?clear_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D7EB4
 * Callers:
 *     ?erase_unchecked@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@2@V?$basic_iterator@$$CBVCDelayUnpin@CD3DDevice@@@2@0@Z @ 0x1800D7E40 (-erase_unchecked@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice.c)
 *     ?clear@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18020AC90 (-clear@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vl.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$destruct_range@VCDelayUnpin@CD3DDevice@@@detail@@YAXPEAVCDelayUnpin@CD3DDevice@@0@Z @ 0x1800D816C (--$destruct_range@VCDelayUnpin@CD3DDevice@@@detail@@YAXPEAVCDelayUnpin@CD3DDevice@@0@Z.c)
 *     ??$move@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x1800D8214 (--$move@V-$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V-$checked_array_iterator@PEAVCDelayU.c)
 */

__int64 __fastcall detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v3 = *a1;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  v7 = a2 + a3;
  if ( a2 + a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x1800D7FABLL);
  }
  v8 = v3 + 8 * ((a1[1] - *a1) >> 3);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, *a1, v6);
  if ( v7 != v10 )
  {
    v12 = v14;
    v13 = v15;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v12, v9);
    v14 = v12;
    v15 = v13;
    std::move<std::move_iterator<CD3DDevice::CDelayUnpin *>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>(
      &v12,
      v3 + 24 * v7,
      v8,
      &v14);
  }
  result = detail::destruct_range<CD3DDevice::CDelayUnpin>(v8 - 24 * a3, v8);
  a1[1] -= 24 * a3;
  return result;
}
