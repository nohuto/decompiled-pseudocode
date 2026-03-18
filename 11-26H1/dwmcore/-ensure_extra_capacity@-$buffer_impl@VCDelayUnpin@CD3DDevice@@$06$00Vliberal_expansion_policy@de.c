/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800D80E4
 * Callers:
 *     ?reserve_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCDelayUnpin@CD3DDevice@@_K0@Z @ 0x1800D7FB4 (-reserve_region@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$destruct_range@VCDelayUnpin@CD3DDevice@@@detail@@YAXPEAVCDelayUnpin@CD3DDevice@@0@Z @ 0x1800D816C (--$destruct_range@VCDelayUnpin@CD3DDevice@@@detail@@YAXPEAVCDelayUnpin@CD3DDevice@@0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x1802961A0 (--$uninitialized_move@V-$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V-$checked_array_iterat.c)
 */

void __fastcall detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  LPVOID v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]
  void *v16; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1[1];
  v4 = a1[2];
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v4 - v2) >> 3) < a2 )
  {
    v5 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - *a1) >> 3);
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1800D8165LL);
    }
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(0xAAAAAAAAAAAAAAABuLL * ((v4 - *a1) >> 3)),
           0xAAAAAAAAAAAAAAABuLL * ((v4 - *a1) >> 3),
           v5 + a2);
    v7 = operator new[](saturated_mul(v6, 0x18uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v12, (__int64)v7, v5);
    v8 = a1[1];
    v9 = *a1;
    v14 = v12;
    v15 = v13;
    std::uninitialized_move<std::move_iterator<CD3DDevice::CDelayUnpin *>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>(
      &v12,
      v9,
      v8,
      &v14);
    detail::destruct_range<CD3DDevice::CDelayUnpin>(*a1, a1[1]);
    v10 = (_QWORD *)*a1;
    *a1 = v7;
    v16 = 0LL;
    if ( v10 == a1 + 3 )
      v10 = 0LL;
    operator delete(v10);
    v11 = *a1;
    a1[1] = *a1 + 24 * v5;
    a1[2] = v11 + 24 * v6;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v16);
  }
}
