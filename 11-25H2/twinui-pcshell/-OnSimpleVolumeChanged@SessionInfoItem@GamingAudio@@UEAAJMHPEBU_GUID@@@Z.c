/*
 * XREFs of ?OnSimpleVolumeChanged@SessionInfoItem@GamingAudio@@UEAAJMHPEBU_GUID@@@Z @ 0x180359360
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleSimpleVolumeChanged@SessionInfoItem@GamingAudio@@QEAAXMHPEBU_GUID@@@Z @ 0x180358B4C (-HandleSimpleVolumeChanged@SessionInfoItem@GamingAudio@@QEAAXMHPEBU_GUID@@@Z.c)
 */

__int64 __fastcall GamingAudio::SessionInfoItem::OnSimpleVolumeChanged(
        GamingAudio::SessionInfoItem *this,
        float a2,
        int a3,
        const struct _GUID *a4)
{
  GamingAudio::SessionInfoItem::HandleSimpleVolumeChanged(this, a2, a3, a4);
  return 0LL;
}
