/*
 * XREFs of ?OnStateChanged@SessionInfoItem@GamingAudio@@UEAAJW4_AudioSessionState@@@Z @ 0x180359380
 * Callers:
 *     <none>
 * Callees:
 *     ?RelaySessionExpired@SessionInfoItem@GamingAudio@@QEAAXXZ @ 0x180359514 (-RelaySessionExpired@SessionInfoItem@GamingAudio@@QEAAXXZ.c)
 */

__int64 __fastcall GamingAudio::SessionInfoItem::OnStateChanged(
        GamingAudio::SessionInfoItem *this,
        enum _AudioSessionState a2)
{
  if ( a2 == AudioSessionStateExpired )
    GamingAudio::SessionInfoItem::RelaySessionExpired(this);
  return 0LL;
}
