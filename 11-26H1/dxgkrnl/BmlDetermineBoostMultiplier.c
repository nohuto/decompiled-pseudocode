/*
 * XREFs of BmlDetermineBoostMultiplier @ 0x14026A158
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1402DBD7C (BmlGetNextBestTargetMode.c)
 * Callees:
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140053EAC (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1402E269C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 */

__int64 __fastcall BmlDetermineBoostMultiplier(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 PresentationVSync; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 result; // rax

  LODWORD(v4) = 1;
  if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)a1) )
  {
    v5 = *a2 * (unsigned __int64)*(unsigned int *)(a1 + 148);
    if ( v5 >= a2[1] * (unsigned __int64)*(unsigned int *)(a1 + 144) )
    {
      PresentationVSync = (unsigned __int64)DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a1 + 72));
      v6 = HIDWORD(PresentationVSync);
      v5 = v8 * (unsigned __int64)(unsigned int)PresentationVSync / HIDWORD(PresentationVSync) % v9;
      v4 = v8 * (unsigned __int64)(unsigned int)PresentationVSync / HIDWORD(PresentationVSync) / v9;
    }
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
  v10[3] = a1;
  v10[4] = a2;
  v10[5] = (unsigned int)v4;
  result = (unsigned int)v4;
  WdLogGlobalForLineNumber = 2660;
  return result;
}
