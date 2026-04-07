/*
 * XREFs of ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800BE098
 * Callers:
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001A6E8 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x18008EBFC (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPL.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800C2880 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180009E0C (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectionBorderVisual::Create(struct CProjectionBorderVisual **a1)
{
  int v2; // edi
  CRenderDataVisual *v3; // rax
  CRenderDataVisual *v4; // rbx

  if ( a1 )
  {
    v3 = (CRenderDataVisual *)DefaultHeap::AllocClear(0x108uLL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0x108uLL);
      CRenderDataVisual::CRenderDataVisual(v4);
      *(_QWORD *)v4 = &CProjectionBorderVisual::`vftable';
      *((_OWORD *)v4 + 15) = 0LL;
      *((_DWORD *)v4 + 65) = 0;
      *((_BYTE *)v4 + 256) = 1;
      v2 = ((__int64 (__fastcall *)(CRenderDataVisual *))*(&CProjectionBorderVisual::`vftable' + 1))(v4);
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v4 = 0LL;
      v2 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xEu, 0LL);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xEu, 0LL);
  }
  return (unsigned int)v2;
}
