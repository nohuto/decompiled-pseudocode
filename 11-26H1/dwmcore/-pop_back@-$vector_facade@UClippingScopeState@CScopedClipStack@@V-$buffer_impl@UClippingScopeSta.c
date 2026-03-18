/*
 * XREFs of ?pop_back@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006B300
 * Callers:
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18006F600 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@Z @ 0x18006ADD0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdex.c)
 *     ??4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x180206A28 (--4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::pop_back(
        __int64 *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h]

  v1 = *a1;
  v3 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 6);
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1 - 192) >> 6) + 1;
  if ( v4 > v3 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v5 = v1 + 192 * v3;
  result = (__int64)stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, v1, v3);
  if ( v4 != v8 )
  {
    v13 = v15;
    v14 = v16;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v13, v7);
    v11 = 192 * v4 + v1;
    v15 = v13;
    v16 = v14;
    result = std::_Get_unwrapped_n<stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *> &,__int64>(
               &v15,
               0xAAAAAAAAAAAAAAABuLL * ((__int64)(v5 - v11) >> 6));
    v12 = result - v11;
    while ( v11 != v5 )
    {
      result = CScopedClipStack::ClippingScopeState::operator=(v12 + v11, v11);
      v11 += 192LL;
    }
  }
  v9 = v5 - 192;
  do
  {
    v10 = *(_QWORD *)(v9 + 176);
    if ( v10 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v9 += 192LL;
  }
  while ( v9 != v5 );
  a1[1] -= 192LL;
  return result;
}
