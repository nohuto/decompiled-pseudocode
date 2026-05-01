/*
 * XREFs of ?HandleSimpleVolumeChanged@SessionInfoItem@GamingAudio@@QEAAXMHPEBU_GUID@@@Z @ 0x18035F430
 * Callers:
 *     ?OnSimpleVolumeChanged@SessionInfoItem@GamingAudio@@UEAAJMHPEBU_GUID@@@Z @ 0x18035FC60 (-OnSimpleVolumeChanged@SessionInfoItem@GamingAudio@@UEAAJMHPEBU_GUID@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RelaySimpleVolumeChanged@SessionInfoItem@GamingAudio@@QEAAXXZ @ 0x18035FE3C (-RelaySimpleVolumeChanged@SessionInfoItem@GamingAudio@@QEAAXXZ.c)
 */

void __fastcall GamingAudio::SessionInfoItem::HandleSimpleVolumeChanged(
        GamingAudio::SessionInfoItem *this,
        float a2,
        int a3,
        const struct _GUID *a4)
{
  int v6; // xmm0_4
  int v7; // edx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_QWORD *)this + 93)
    || (wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xFB,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
          (const char *)0x80004003LL),
        *((_QWORD *)this + 93)) )
  {
    *(float *)&v6 = *((float *)this + 16) * 100.0;
    v7 = *((_DWORD *)this + 17);
    *((float *)this + 16) = a2;
    *((_DWORD *)this + 17) = a3;
    if ( v6 != COERCE_INT(a2 * 100.0) || v7 != a3 )
      GamingAudio::SessionInfoItem::RelaySimpleVolumeChanged(this);
  }
}
