/*
 * XREFs of ?resize@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x1800FC984
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800FCDF8 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800FB6AC (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@.c)
 *     ?erase_unchecked@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@0@Z @ 0x1801D1D98 (-erase_unchecked@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl.c)
 */

__int64 __fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::resize(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  _DWORD *v9; // rdi
  _DWORD *v10; // rsi
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = *a1;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - v4) >> 2);
  if ( a2 <= v5 )
  {
    v11 = a1[1];
    v12 = v4 + 12 * a2;
    return detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::erase_unchecked(
             a1,
             &v13,
             &v12,
             &v11,
             0LL);
  }
  else
  {
    v6 = a2 - v5;
    result = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               v5,
               v6);
    if ( v6 )
    {
      *(_QWORD *)result = 0LL;
      v8 = (12 * v6 - 12) >> 2;
      v9 = (_DWORD *)(result + 12);
      v10 = (_DWORD *)result;
      *(_DWORD *)(result + 8) = 0;
      while ( v8 )
      {
        *v9++ = *v10++;
        --v8;
      }
    }
  }
  return result;
}
