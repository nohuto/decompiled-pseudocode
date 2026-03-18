/*
 * XREFs of ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800FD444
 * Callers:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800FC034 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x1800FCD3C (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@W42@IAEBV.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800FD03C (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FD2D0 (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderingTechniqueFragment::GetSurfaceDescription(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2,
        unsigned int a3,
        struct CRenderingTechniqueFragment::SurfaceDescription *a4)
{
  __int64 v4; // rax
  _BYTE *v5; // r14
  char v6; // bl
  _BYTE *v10; // r15
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rdx
  char v14; // bp
  char v15; // cl
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rax
  const struct CBrushRenderingGraph *v19; // [rsp+68h] [rbp+10h] BYREF
  char v20; // [rsp+70h] [rbp+18h] BYREF

  v19 = a2;
  v4 = *((_QWORD *)this + 4);
  v5 = (char *)a4 + 9;
  v6 = 0;
  v20 = 0;
  LOBYTE(v19) = 0;
  v10 = (char *)a4 + 8;
  v11 = *(_QWORD *)(v4 + 16LL * a3);
  v12 = 0;
  *(_QWORD *)a4 = v11;
  v13 = *(_QWORD *)this;
  v14 = *((_BYTE *)this + 112);
  v15 = 0;
  if ( v13 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 64LL))(v13);
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *, const struct CBrushRenderingGraph **))(*(_QWORD *)v16 + 56LL))(
            v16,
            *((unsigned int *)this + 4),
            a3,
            &v20,
            &v19);
    v15 = (char)v19;
    v14 |= v17;
    v12 = v20;
  }
  if ( v10 )
    *v10 = v12;
  if ( v5 )
    *v5 = v15;
  *((_BYTE *)a4 + 10) = v14;
  if ( *(_QWORD *)this )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 64LL))(*(_QWORD *)this);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 64LL))(
           v18,
           *((unsigned int *)this + 4),
           a3);
  }
  *((_BYTE *)a4 + 11) = v6;
}
