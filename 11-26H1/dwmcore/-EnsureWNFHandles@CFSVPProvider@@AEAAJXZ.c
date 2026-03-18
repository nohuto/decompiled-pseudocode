/*
 * XREFs of ?EnsureWNFHandles@CFSVPProvider@@AEAAJXZ @ 0x1800EE1F0
 * Callers:
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x1800EE104 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     PubSebRegisterRpc @ 0x1801811D4 (PubSebRegisterRpc.c)
 */

__int64 __fastcall CFSVPProvider::EnsureWNFHandles(CFSVPProvider *this)
{
  unsigned int v1; // edi
  int v4; // eax
  int v5; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 1) || (v4 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK), v1 = v4, v4 >= 0) )
  {
    if ( !*((_QWORD *)this + 2) )
    {
      v5 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK);
      v1 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377AD8, 2u, v5, 0xB8u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377AD8, 2u, v4, 0xB2u, 0LL);
  }
  return v1;
}
