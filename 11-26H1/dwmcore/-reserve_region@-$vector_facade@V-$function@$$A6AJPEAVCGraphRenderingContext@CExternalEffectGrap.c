/*
 * XREFs of ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x18015BA24
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x18015B51C (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x18015B7D4 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x18015BC9C (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@detail@@YAXV?$basic_iterator@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@Z @ 0x18015BB40 (--$move_backward_uninitialized@V-$basic_iterator@V-$function@$$A6AJPEAVCGraphRenderingContext@CE.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18015BBB0 (-ensure_extra_capacity@-$buffer_impl@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffec.c)
 *     ??$destruct_range@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@YAXPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@0@Z @ 0x18015BC28 (--$destruct_range@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@de.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@std@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V12@@Z @ 0x1802B7200 (--$move_backward@V-$move_iterator@PEAV-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffec.c)
 */

__int64 __fastcall detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rsi
  __int128 v13; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+30h] [rbp-50h]
  __int128 v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h]
  char v17[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+50h] BYREF

  v19 = a3;
  detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v5 = *a1;
  v6 = a1[1];
  v7 = (v6 - *a1) >> 6;
  v8 = *a1 + (v7 << 6);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, v8, 1LL);
  v13 = v15;
  v14 = v16;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v13, v9);
  v19 = v6;
  v10 = v7 - a2;
  v15 = v13;
  if ( (unsigned __int64)(v7 - a2) > 1 )
    v10 = 1LL;
  v16 = v14;
  v18 = v6 - (v10 << 6);
  detail::move_backward_uninitialized<detail::basic_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>(
    &v18,
    &v19,
    &v15);
  if ( (unsigned __int64)(v7 - a2) > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, v5, v7);
    v13 = v15;
    v14 = v16;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v13, v7);
    v11 = a2 << 6;
    v15 = v13;
    v16 = v14;
    std::move_backward<std::move_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>(
      v17,
      v11 + v5,
      (v7 << 6) + v5 - 64,
      &v15);
  }
  else
  {
    v11 = a2 << 6;
  }
  if ( v8 >= v11 + v5 + 64 )
    v8 = v11 + v5 + 64;
  detail::destruct_range<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(v5 + v11, v8);
  a1[1] += 64LL;
  return v5 + v11;
}
