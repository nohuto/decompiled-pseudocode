/*
 * XREFs of ??$emplace_back@$$V@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C2910
 * Callers:
 *     ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800E7154 (-PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??$destruct_range@USinkEntry@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkEntry@CCpuClipAntialiasSinkContext@@0@Z @ 0x1800C2458 (--$destruct_range@USinkEntry@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkEntry@CCpuClipAnt.c)
 *     ??1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x1800C37D0 (--1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??$move_backward@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180207258 (--$move_backward@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_a.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180207314 (--$uninitialized_move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$chec.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z @ 0x18025B5F4 (--0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z.c)
 *     ??C?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@QEBAPEAUSinkEntry@CCpuClipAntialiasSinkContext@@XZ @ 0x18025B674 (--C-$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@QEBAPEAUSinkEnt.c)
 */

void **__fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::emplace_back<>(
        void ***a1)
{
  __int64 v1; // rbx
  void **v2; // rsi
  unsigned __int64 v3; // r14
  void ***v4; // r15
  __int64 v5; // rdi
  unsigned __int64 v6; // r13
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  CCpuClipAntialiasSinkContext::SinkEntry *v10; // rbx
  CCpuClipAntialiasSinkContext::SinkEntry *v11; // rdi
  __int64 v12; // rbx
  void **v13; // rax
  void **result; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  void **v18; // rbx
  void **v19; // r8
  void **v20; // rdx
  void **v21; // rcx
  bool v22; // zf
  __int128 v23; // [rsp+20h] [rbp-60h] BYREF
  __int64 v24; // [rsp+30h] [rbp-50h]
  __int128 v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+50h] [rbp-30h]
  char v27[32]; // [rsp+60h] [rbp-20h] BYREF

  v1 = (__int64)a1[1];
  v2 = *a1;
  v3 = 0x84BDA12F684BDA13uLL * ((v1 - (__int64)*a1) >> 4);
  v4 = a1;
  if ( !(0x84BDA12F684BDA13uLL * (((__int64)a1[2] - v1) >> 4)) )
  {
    if ( v3 + 1 < v3 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1800C2C05LL);
    }
    v17 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            0x84BDA12F684BDA13uLL * (((char *)a1[2] - (char *)v2) >> 4),
            v3 + 1);
    v18 = (void **)operator new[](saturated_mul(v17, 0x1B0uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, (__int64)v18, v3);
    v19 = v4[1];
    v20 = *v4;
    v23 = v25;
    v24 = v26;
    ((void (__fastcall *)(__int128 *, void **, void **, __int128 *))std::uninitialized_move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>)(
      &v25,
      v20,
      v19,
      &v23);
    detail::destruct_range<CCpuClipAntialiasSinkContext::SinkEntry>(*v4, v4[1]);
    v21 = *v4;
    v22 = *v4 == (void **)(v4 + 3);
    *v4 = v18;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v2 = *v4;
    v1 = (__int64)&(*v4)[54 * v3];
    v4[1] = (void **)v1;
    v4[2] = &v2[54 * v17];
  }
  v5 = 0x84BDA12F684BDA13uLL * ((v1 - (__int64)v2) >> 4);
  v6 = (unsigned __int64)&v2[2 * ((v1 - (__int64)v2) >> 4)];
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, v6, 1LL);
  v23 = v25;
  v24 = v26;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, v7);
  v8 = v5 - v3;
  v25 = v23;
  if ( v5 - v3 > 1 )
    v8 = 1LL;
  v26 = v24;
  v9 = 432 * v8;
  if ( v1 != v1 - v9 )
  {
    v15 = v1 - v9;
    do
    {
      v1 -= 432LL;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v25);
      v16 = stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>::operator->(&v25);
      CCpuClipAntialiasSinkContext::SinkEntry::SinkEntry(v16, v1);
    }
    while ( v1 != v15 );
    v4 = a1;
  }
  if ( v5 - v3 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, (__int64)v2, v5);
    v23 = v25;
    v24 = v26;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, v5);
    v25 = v23;
    v26 = v24;
    std::move_backward<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>(
      v27,
      &v2[54 * v3],
      &v2[54 * v5 - 54],
      &v25);
  }
  v10 = (CCpuClipAntialiasSinkContext::SinkEntry *)&v2[54 * v3];
  v11 = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)v10 + 432);
  if ( v6 < (unsigned __int64)v10 + 432 )
    v11 = (CCpuClipAntialiasSinkContext::SinkEntry *)v6;
  while ( v10 != v11 )
  {
    CCpuClipAntialiasSinkContext::SinkEntry::~SinkEntry(v10);
    v10 = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)v10 + 432);
  }
  v4[1] += 54;
  v12 = 54 * v3;
  memset_0(&v2[54 * v3 + 4], 0, 0x190uLL);
  v2[v12] = 0LL;
  v13 = &v2[54 * v3 + 4];
  v2[v12 + 1] = v13;
  v2[v12 + 2] = v13;
  result = &v2[54 * v3 + 54];
  v2[v12 + 3] = result;
  return result;
}
