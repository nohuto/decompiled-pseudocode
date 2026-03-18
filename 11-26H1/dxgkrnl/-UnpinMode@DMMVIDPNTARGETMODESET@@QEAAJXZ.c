/*
 * XREFs of ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x140053E18
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025CB60 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x14026574C (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1402DB240 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1403D2200 (-UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N.c)
 * Callees:
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140053EAC (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::UnpinMode(DMMVIDPNTARGETMODESET *this, __int64 a2)
{
  __int64 v2; // r9
  struct _D3DDDI_RATIONAL PresentationVSync; // rax
  struct _D3DDDI_RATIONAL *v4; // r9
  __int64 result; // rax
  __int64 v6; // r8

  if ( *((_BYTE *)this + 136) )
  {
    v2 = *((_QWORD *)this + 18);
    if ( v2 )
    {
      PresentationVSync = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v2 + 72));
      v4[19] = PresentationVSync;
      result = 0LL;
      v4[20].Numerator = 1;
      *(_QWORD *)(v6 + 144) = 0LL;
    }
    else
    {
      WdLogNewEntry5_WdTrace(this, a2);
      result = 1075708679LL;
      WdLogGlobalForLineNumber = 444;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL);
    result = 3223192352LL;
    WdLogGlobalForLineNumber = 437;
  }
  return result;
}
