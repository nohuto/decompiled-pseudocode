/*
 * XREFs of ?pop_back@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C27F4
 * Callers:
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800C61E0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z @ 0x18019F060 (-RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x1800C37D0 (--1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??$move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x18025B13C (--$move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_array_iter.c)
 */

void __fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::pop_back(
        __int64 *a1)
{
  CCpuClipAntialiasSinkContext::SinkEntry *v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r14
  __int64 v6; // r9
  __int64 v7; // r8
  CCpuClipAntialiasSinkContext::SinkEntry *i; // rbx
  __int128 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]

  v2 = *a1;
  v4 = 0x84BDA12F684BDA13uLL * ((a1[1] - *a1) >> 4);
  v5 = 0x84BDA12F684BDA13uLL * ((a1[1] - *a1 - 432) >> 4) + 1;
  if ( v5 > v4 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_8;
  }
  v1 = (CCpuClipAntialiasSinkContext::SinkEntry *)(v2 + 16 * ((a1[1] - *a1) >> 4));
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v11, *a1, v4);
  if ( v5 != v7 )
  {
LABEL_8:
    v9 = v11;
    v10 = v12;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v9, v6);
    v11 = v9;
    v12 = v10;
    std::move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>(
      &v9,
      v2 + 432 * v5,
      v1,
      &v11);
  }
  for ( i = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)v1 - 432);
        i != v1;
        i = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)i + 432) )
  {
    CCpuClipAntialiasSinkContext::SinkEntry::~SinkEntry(i);
  }
  a1[1] -= 432LL;
}
