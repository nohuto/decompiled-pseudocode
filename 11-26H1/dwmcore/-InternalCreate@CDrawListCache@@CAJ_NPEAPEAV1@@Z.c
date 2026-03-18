/*
 * XREFs of ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18001E070
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18003F1EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetDrawListCache@CVisual@@QEBAJIIPEBVCVisualTree@@PEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18007A150 (-GetDrawListCache@CVisual@@QEBAJIIPEBVCVisualTree@@PEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007A6F0 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800D907C (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GetDrawListCache@CWindowNode@@AEBAJPEAVCDrawingContext@@IPEAPEAVCDrawListCache@@@Z @ 0x18020284C (-GetDrawListCache@CWindowNode@@AEBAJPEAVCDrawingContext@@IPEAPEAVCDrawListCache@@@Z.c)
 *     ?GetBorderDrawListCacheForCurrentVisual@CDrawingContext@@QEBAJPEAPEAVCDrawListCache@@@Z @ 0x180205E10 (-GetBorderDrawListCacheForCurrentVisual@CDrawingContext@@QEBAJPEAPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18001E240 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawListCache::InternalCreate(char a1, struct CDrawListCache **a2)
{
  unsigned int v3; // esi
  _DWORD *Value; // rdi
  int v6; // ecx
  LPVOID v7; // rbx
  HANDLE ProcessHeap; // rax
  CComposition *v9; // rcx
  __int64 v10; // rax
  CThreadContext *v12; // rax
  CThreadContext *v13; // rax
  unsigned int v14; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v12 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v12 || (v13 = CThreadContext::CThreadContext(v12), (Value = v13) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v13);
  }
  v6 = Value[33];
  v7 = 0LL;
  if ( v6 )
  {
    v7 = (LPVOID)*((_QWORD *)Value + 17);
    *((_QWORD *)Value + 17) = *(_QWORD *)v7;
    Value[33] = v6 - 1;
  }
  if ( v7 || (ProcessHeap = GetProcessHeap(), (v7 = HeapAlloc(ProcessHeap, 0, 0x58uLL)) != 0LL) )
  {
    v9 = g_pComposition;
    *((_DWORD *)v7 + 2) = 0;
    *(_QWORD *)v7 = &CDrawListCache::`vftable';
    v10 = 0LL;
    if ( v9 )
      v10 = *((_QWORD *)v9 + 110);
    *((_QWORD *)v7 + 2) = v10;
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 5) = 2LL;
    *((_QWORD *)v7 + 9) = 0LL;
    *((_WORD *)v7 + 42) = 0;
    *((_BYTE *)v7 + 86) = a1;
    if ( _InterlockedAdd((volatile signed __int32 *)v7 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v14);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v16);
    *a2 = (struct CDrawListCache *)v7;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x24u, 0LL);
  }
  return v3;
}
