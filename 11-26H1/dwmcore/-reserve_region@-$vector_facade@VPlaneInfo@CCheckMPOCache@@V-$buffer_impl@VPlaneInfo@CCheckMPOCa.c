/*
 * XREFs of ?reserve_region@?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVPlaneInfo@CCheckMPOCache@@_K0@Z @ 0x180127610
 * Callers:
 *     ??0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N_K@Z @ 0x180296270 (--0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N_K@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180127754 (-ensure_extra_capacity@-$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@.c)
 *     ??$move_backward@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@0@0V12@@Z @ 0x1802960FC (--$move_backward@V-$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V-$checked_array_iterator@.c)
 *     ??C?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@QEBAPEAVPlaneInfo@CCheckMPOCache@@XZ @ 0x180296524 (--C-$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@QEBAPEAVPlaneInfo@CCheckMPOCa.c)
 */

__int64 __fastcall detail::vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v12; // rax
  __int128 v13; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+30h] [rbp-50h]
  __int128 v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h]
  char v17[32]; // [rsp+60h] [rbp-20h] BYREF

  detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v4 = *a1;
  v5 = a1[1];
  v6 = 0x86BCA1AF286BCA1BuLL * ((v5 - *a1) >> 2);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, *a1 + 4 * ((v5 - *a1) >> 2), 1LL);
  v13 = v15;
  v14 = v16;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v13, 1LL);
  v7 = v6 - a2;
  if ( (unsigned __int64)(v6 - a2) > 1 )
    v7 = 1LL;
  v15 = v13;
  v16 = v14;
  v8 = v5 - 76 * v7;
  while ( v5 != v8 )
  {
    v5 -= 76LL;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v15);
    v12 = stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *>::operator->(&v15);
    *(_OWORD *)v12 = *(_OWORD *)v5;
    *(_OWORD *)(v12 + 16) = *(_OWORD *)(v5 + 16);
    *(_OWORD *)(v12 + 32) = *(_OWORD *)(v5 + 32);
    *(_OWORD *)(v12 + 48) = *(_OWORD *)(v5 + 48);
    *(_QWORD *)(v12 + 64) = *(_QWORD *)(v5 + 64);
    *(_DWORD *)(v12 + 72) = *(_DWORD *)(v5 + 72);
  }
  v9 = 76 * a2;
  if ( (unsigned __int64)(v6 - a2) > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, v4, v6);
    v13 = v15;
    v14 = v16;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v13, v6);
    v10 = v4 + v9;
    v15 = v13;
    v16 = v14;
    std::move_backward<std::move_iterator<CCheckMPOCache::PlaneInfo *>,stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *>>(
      v17,
      v10,
      v4 + 76 * v6 - 76,
      &v15);
  }
  else
  {
    v10 = v4 + v9;
  }
  a1[1] += 76LL;
  return v10;
}
