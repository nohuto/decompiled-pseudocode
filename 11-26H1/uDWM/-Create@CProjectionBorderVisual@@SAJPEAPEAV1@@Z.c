/*
 * XREFs of ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x18009EBC0
 * Callers:
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001AB8C (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3FBC (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800BE360 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC (--0CContainerVisual@@IEAA@XZ.c)
 *     ?Initialize@CProjectionBorderVisual@@MEAAJXZ @ 0x180061100 (-Initialize@CProjectionBorderVisual@@MEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

__int64 __fastcall CProjectionBorderVisual::Create(struct CProjectionBorderVisual **a1)
{
  int v2; // edi
  char *v3; // rax
  char *v4; // rbx

  if ( a1 )
  {
    v3 = (char *)DefaultHeap::AllocClear(0xE0uLL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0xE0uLL);
      CContainerVisual::CContainerVisual((CContainerVisual *)v4);
      *(_QWORD *)v4 = &CProjectionBorderVisual::`vftable';
      *((_QWORD *)v4 + 23) = 0LL;
      *((_QWORD *)v4 + 24) = 0LL;
      *(_OWORD *)(v4 + 200) = 0LL;
      v4[216] = 1;
      *((_DWORD *)v4 + 55) = 0;
      v2 = CProjectionBorderVisual::Initialize((struct CContainerVisualProxy **)v4);
      if ( v2 >= 0 )
      {
        *a1 = (struct CProjectionBorderVisual *)v4;
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
      CBaseObject::Release((CBaseObject *)v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xEu, 0LL);
  }
  return (unsigned int)v2;
}
