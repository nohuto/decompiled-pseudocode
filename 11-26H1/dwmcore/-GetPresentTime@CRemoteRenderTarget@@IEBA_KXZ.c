/*
 * XREFs of ?GetPresentTime@CRemoteRenderTarget@@IEBA_KXZ @ 0x180254FD0
 * Callers:
 *     ?GetStats@CRemoteRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x180255000 (-GetStats@CRemoteRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 */

unsigned __int64 __fastcall CRemoteRenderTarget::GetPresentTime(CRemoteRenderTarget *this)
{
  CComposition *CurrentFrameId; // rax
  __int64 v2; // rcx

  CurrentFrameId = GetCurrentFrameId();
  if ( *(CComposition **)(v2 + 2224) == CurrentFrameId )
    return *(_QWORD *)(v2 + 2216);
  else
    return 0LL;
}
