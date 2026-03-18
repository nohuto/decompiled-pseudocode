/*
 * XREFs of ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800FC034
 * Callers:
 *     ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x1800FBF64 (-NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800FC034 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1802B39E4 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 * Callees:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800FC034 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800FC160 (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-_ea_1800FC160.c)
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800FD444 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
        CRenderingTechniqueFragment *a1,
        const struct CBrushRenderingGraph *a2,
        __int64 *a3)
{
  unsigned int v3; // edi
  unsigned int v4; // esi
  __int64 v5; // rbx
  const struct CBrushRenderingGraph *v7; // r12
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // ecx
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  int v18; // [rsp+28h] [rbp-20h]

  v3 = 0;
  v4 = 0;
  v5 = (__int64)(*((_QWORD *)a1 + 5) - *((_QWORD *)a1 + 4)) >> 4;
  v7 = a2;
  if ( (_DWORD)v5 )
  {
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(*((_QWORD *)a1 + 4) + v9 + 8);
      if ( v10 )
      {
        v3 += CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(v10, v7, a3);
      }
      else
      {
        v17 = 0LL;
        v18 = 0;
        CRenderingTechniqueFragment::GetSurfaceDescription(
          a1,
          a2,
          v4,
          (struct CRenderingTechniqueFragment::SurfaceDescription *)&v17);
        a2 = (const struct CBrushRenderingGraph *)a3[1];
        v11 = *a3;
        LOBYTE(v12) = v18;
        LOBYTE(v13) = BYTE4(v17);
        while ( 1 )
        {
          if ( a2 == (const struct CBrushRenderingGraph *)v11 )
            goto LABEL_6;
          if ( *(_DWORD *)v11 == (_DWORD)v17 && *(_BYTE *)(v11 + 4) == BYTE4(v17) && *(_WORD *)(v11 + 8) == (_WORD)v18 )
            break;
          v11 += 12LL;
        }
        if ( a2 == (const struct CBrushRenderingGraph *)v11 )
        {
LABEL_6:
          v14 = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::reserve_region(
                  a3,
                  0xAAAAAAAAAAAAAAABuLL * (((__int64)a2 - *a3) >> 2),
                  v12,
                  v13);
          ++v3;
          v15 = v18;
          *(_QWORD *)v14 = v17;
          *(_DWORD *)(v14 + 8) = v15;
        }
      }
      ++v4;
      v9 += 16LL;
    }
    while ( v4 < (unsigned int)v5 );
  }
  return v3;
}
