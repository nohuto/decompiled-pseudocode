/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18026E9E4
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCBrush@@V?$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCBrush@@_K0@Z @ 0x18026EB20 (-reserve_region@-$vector_facade@PEAVCBrush@@V-$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_.c)
 * Callees:
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@@std@@@std@@QEAA@XZ @ 0x18002D63C (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U-$d.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 */

void __fastcall detail::buffer_impl<CBrush *,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbp
  LPVOID v8; // rsi
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  void *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]
  void *v19; // [rsp+80h] [rbp+8h] BYREF

  v2 = a1[1];
  v4 = a1[2];
  if ( (v4 - v2) >> 3 < a2 )
  {
    v5 = (v2 - *a1) >> 3;
    v6 = v5 + a2;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v4 - *a1) >> 3),
           (v4 - *a1) >> 3,
           v6);
    v8 = operator new[](saturated_mul(v7, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, (__int64)v8, v5);
    v9 = a1[1];
    v10 = (_QWORD *)*a1;
    v11 = (v9 - *a1) >> 3;
    v17 = v15;
    v18 = v16;
    v12 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v17, v11);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v10, v9, v12);
    v13 = (_QWORD *)*a1;
    *a1 = v8;
    v19 = 0LL;
    if ( v13 == a1 + 3 )
      v13 = 0LL;
    operator delete(v13);
    v14 = (_QWORD *)*a1;
    a1[1] = *a1 + 8 * v5;
    a1[2] = &v14[v7];
    std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>(&v19);
  }
}
