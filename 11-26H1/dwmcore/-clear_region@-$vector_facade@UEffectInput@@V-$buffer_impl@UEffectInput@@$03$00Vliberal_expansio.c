/*
 * XREFs of ?clear_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180019E90
 * Callers:
 *     ??1?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800197AC (--1-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@de.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180019538 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 */

void __fastcall detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // r8
  __int64 *v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 *v11; // rbx
  __int64 v12; // r15
  CDrawListBitmap *i; // rbx
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]

  v3 = *a1;
  v6 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 4);
  if ( a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x180019FAALL);
  }
  v7 = (__int64 *)(v3 + 16 * ((a1[1] - *a1) >> 4));
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, *a1, v6);
  v9 = 112 * v8;
  if ( v8 != v10 )
  {
    v14 = v16;
    v15 = v17;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v14, 0LL);
    v11 = (__int64 *)(v9 + v3);
    v16 = v14;
    v17 = v15;
    stdext::checked_array_iterator<char *>::_Verify_offset(
      (__int64)&v16,
      0x6DB6DB6DB6DB6DB7LL * (((char *)v7 - (char *)v11) >> 4));
    v12 = v14 + 112 * v15 - (_QWORD)v11;
    while ( v11 != v7 )
    {
      EffectInput::operator=((__int64 *)((char *)v11 + v12), v11);
      v11 += 14;
    }
  }
  for ( i = (CDrawListBitmap *)&v7[v9 / 0xFFFFFFFFFFFFFFF8uLL];
        i != (CDrawListBitmap *)v7;
        i = (CDrawListBitmap *)((char *)i + 112) )
  {
    CDrawListBitmap::~CDrawListBitmap(i);
  }
  a1[1] -= v9;
}
