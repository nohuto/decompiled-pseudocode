/*
 * XREFs of ?OnStateChanged@SessionInfoItem@GamingAudio@@UEAAJW4_AudioSessionState@@@Z @ 0x18035FC80
 * Callers:
 *     <none>
 * Callees:
 *     ?RelaySessionExpired@SessionInfoItem@GamingAudio@@QEAAXXZ @ 0x18035FDA4 (-RelaySessionExpired@SessionInfoItem@GamingAudio@@QEAAXXZ.c)
 */

__int64 __fastcall GamingAudio::SessionInfoItem::OnStateChanged(
        GamingAudio::SessionInfoItem *this,
        enum _AudioSessionState a2)
{
  if ( a2 == AudioSessionStateExpired )
    GamingAudio::SessionInfoItem::RelaySessionExpired(this);
  return 0LL;
}
