/*
 * XREFs of ?clear_region@?$vector_facade@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18014F7E0
 * Callers:
 *     ?clear@?$vector_facade@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18014F7C0 (-clear@-$vector_facade@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl@.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ @ 0x180052740 (-AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18022961C (--$move@V-$move_iterator@PEAV-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@V-$c.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,8,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rdx
  unsigned __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 *i; // rbx
  __int64 v13; // rdx
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]

  v5 = *a1;
  v8 = (a1[1] - *a1) >> 3;
  if ( a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_8;
  }
  v3 = (__int64 *)(v5 + 8 * v8);
  result = (__int64)stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, v5, v8);
  v4 = 8 * v10;
  if ( v10 != v11 )
  {
LABEL_8:
    v14 = v16;
    v15 = v17;
    Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)&v14);
    v16 = v14;
    v17 = v15;
    result = std::move<std::move_iterator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *>>(
               &v14,
               v4 + v13,
               v3,
               &v16);
  }
  for ( i = &v3[v4 / 0xFFFFFFFFFFFFFFF8uLL]; i != v3; ++i )
    result = wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(i);
  a1[1] -= v4;
  return result;
}
