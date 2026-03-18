/*
 * XREFs of ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18012A8AC
 * Callers:
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180128B3C (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ @ 0x18012A870 (-GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ.c)
 *     ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x180217A4C (-SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x1800A7614 (McTemplateU0xxq_EventWriteTransfer.c)
 *     ?IsCompositionThread@@YA_NXZ @ 0x18012AA34 (-IsCompositionThread@@YA_NXZ.c)
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x18012AA90 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(CGlobalCompositionSurfaceInfo *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  int CompositionSurfaceRenderingRealization; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  int updated; // eax
  unsigned int v9; // [rsp+20h] [rbp-1A8h]
  _DWORD v10[4]; // [rsp+30h] [rbp-198h] BYREF
  __int64 v11; // [rsp+40h] [rbp-188h]
  unsigned int v12; // [rsp+48h] [rbp-180h]
  int v13; // [rsp+198h] [rbp-30h]

  v2 = 0;
  v3 = 0;
  memset_0(v10, 0, 0x178uLL);
  if ( IsCompositionThread() )
  {
    CompositionSurfaceRenderingRealization = NtQueryCompositionSurfaceRenderingRealization(*((_QWORD *)this + 4), v10);
    if ( CompositionSurfaceRenderingRealization < 0 )
    {
      v3 = CompositionSurfaceRenderingRealization | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        0LL,
        0,
        CompositionSurfaceRenderingRealization | 0x10000000,
        0x1E7u,
        0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000000) != 0 )
      {
        v9 = v12;
        McTemplateU0xxq_EventWriteTransfer(
          v5,
          &CompSurfInfo_ForceUpdateRealization_Start,
          *((_QWORD *)this + 5),
          v11,
          v9);
      }
      if ( (unsigned int)(v10[0] - 2) <= 1 && v10[1] == *((_DWORD *)this + 10) && v10[2] == *((_DWORD *)this + 11) )
      {
        v6 = *((_QWORD *)this + 17);
        if ( !v6 || v6 == v11 )
        {
          v13 |= 0x400u;
          *((_BYTE *)this + 96) = 1;
          updated = CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
                      this,
                      (const struct CSM_SURFACE_UPDATE_ *)v10);
          v3 = updated;
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x203u, 0LL);
          *((_BYTE *)this + 96) = 0;
          v2 = 1;
        }
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000000) != 0 )
        McTemplateU0t_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &CompSurfInfo_ForceUpdateRealization_Stop,
          v2);
    }
  }
  return v3;
}
