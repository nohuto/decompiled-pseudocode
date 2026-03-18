/*
 * XREFs of ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1802B39E4
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC518 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ??1?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800FB9B0 (--1-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceDescr.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800FC034 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ @ 0x18021B254 (-ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall CRenderingTechniqueFragment::RemoveLargestInputFragment(
        __int64 a1,
        _QWORD *a2,
        const struct CBrushRenderingGraph *a3,
        int a4)
{
  __int64 v4; // rsi
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  __int64 v7; // rsi
  _QWORD *v9; // r12
  unsigned int v11; // r14d
  __int64 v12; // rdi
  CRenderingTechniqueFragment *v14; // rcx
  unsigned int CumulativeSurfaceInputCount; // eax
  __int64 v16; // rbx
  __int64 v17; // rdi
  CRenderingTechniqueFragment *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v23[3]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v24[192]; // [rsp+48h] [rbp-110h] BYREF
  __int64 v25; // [rsp+108h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32);
  v5 = 0;
  v23[0] = (__int64)v24;
  v6 = 0;
  v7 = v4 >> 4;
  v23[1] = (__int64)v24;
  v23[2] = (__int64)&v25;
  v9 = a2;
  v11 = v7;
  if ( (_DWORD)v7 )
  {
    v12 = 0LL;
    do
    {
      v14 = *(CRenderingTechniqueFragment **)(v12 + *(_QWORD *)(a1 + 32) + 8);
      if ( v14 )
      {
        CumulativeSurfaceInputCount = CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(v14, a3, v23);
        if ( CumulativeSurfaceInputCount > v5 )
        {
          v5 = CumulativeSurfaceInputCount;
          v11 = v6;
        }
      }
      ++v6;
      v12 += 16LL;
    }
    while ( v6 < (unsigned int)v7 );
    v9 = a2;
  }
  v16 = *(_QWORD *)(a1 + 32);
  v17 = 2LL * v11;
  v18 = *(CRenderingTechniqueFragment **)(v16 + 16LL * v11 + 8);
  *(_BYTE *)(v16 + 8 * v17 + 4) = 1;
  *(_DWORD *)(v16 + 8 * v17) = a4;
  CRenderingTechniqueFragment::ClearConsumerUVClampingRequirement(v18);
  v19 = *(_QWORD *)(v16 + 16LL * v11 + 8);
  *(_QWORD *)(v16 + 16LL * v11 + 8) = 0LL;
  *v9 = v19;
  detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::~vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>(
    v23,
    v20);
  return v9;
}
