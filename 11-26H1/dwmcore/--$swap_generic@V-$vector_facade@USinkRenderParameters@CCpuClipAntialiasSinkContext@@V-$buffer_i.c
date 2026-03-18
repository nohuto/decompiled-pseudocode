/*
 * XREFs of ??$swap_generic@V?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x18025B410
 * Callers:
 *     ??0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z @ 0x18025B5F4 (--0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z.c)
 * Callees:
 *     ??$_Swap_ranges_unchecked@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@V12@V12@0@Z @ 0x18025ADCC (--$_Swap_ranges_unchecked@V-$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@.c)
 *     ??$move@V?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@V?$back_insert_iterator_unchecked@V?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@@std@@YA?AV?$back_insert_iterator_unchecked@V?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@V?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@0@0V12@@Z @ 0x18025B294 (--$move@V-$move_iterator@V-$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@.c)
 *     ?erase_unchecked@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@2@V?$basic_iterator@$$CBUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@2@0@Z @ 0x18025B6C0 (-erase_unchecked@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_i.c)
 */

__int64 __fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::swap_generic<detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v2; // r10
  __int64 *v4; // r8
  __int64 *v6; // rdx
  __int64 *v7; // r9
  __int64 *v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 *v12; // [rsp+50h] [rbp+28h] BYREF
  __int64 *v13; // [rsp+58h] [rbp+30h] BYREF
  __int64 *v14; // [rsp+60h] [rbp+38h] BYREF
  __int64 *v15; // [rsp+68h] [rbp+40h] BYREF

  v2 = (__int64 *)a1[1];
  v4 = (__int64 *)*a1;
  v6 = (__int64 *)*a2;
  v7 = (__int64 *)a2[1];
  if ( 0xCCCCCCCCCCCCCCCDuLL * (((__int64)v2 - *a1) >> 3) <= 0xCCCCCCCCCCCCCCCDuLL * (v7 - v6) )
  {
    v12 = v6;
    v14 = v4;
    v13 = v2;
    std::_Swap_ranges_unchecked<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>,detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>(
      &v15,
      (__int64 *)&v14,
      &v13,
      &v12);
    v8 = v15;
    v12 = (__int64 *)a2[1];
    v13 = v15;
    std::move<std::move_iterator<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>,detail::back_insert_iterator_unchecked<detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>>>(
      &v14,
      &v13,
      &v12,
      a1);
    v9 = (__int64 *)a2[1];
    v10 = a2;
  }
  else
  {
    v12 = (__int64 *)*a1;
    v13 = v7;
    v14 = v6;
    std::_Swap_ranges_unchecked<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>,detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>(
      &v15,
      (__int64 *)&v14,
      &v13,
      &v12);
    v8 = v15;
    v12 = (__int64 *)a1[1];
    v13 = v15;
    std::move<std::move_iterator<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>,detail::back_insert_iterator_unchecked<detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>>>(
      &v14,
      &v13,
      &v12,
      a2);
    v9 = (__int64 *)a1[1];
    v10 = a1;
  }
  v12 = v9;
  v13 = v8;
  return detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::erase_unchecked(
           v10,
           &v14,
           &v13,
           &v12);
}
