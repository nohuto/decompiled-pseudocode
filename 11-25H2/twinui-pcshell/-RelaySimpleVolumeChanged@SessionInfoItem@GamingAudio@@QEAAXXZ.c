/*
 * XREFs of ?RelaySimpleVolumeChanged@SessionInfoItem@GamingAudio@@QEAAXXZ @ 0x1803595A4
 * Callers:
 *     ?HandleSimpleVolumeChanged@SessionInfoItem@GamingAudio@@QEAAXMHPEBU_GUID@@@Z @ 0x180358B4C (-HandleSimpleVolumeChanged@SessionInfoItem@GamingAudio@@QEAAXMHPEBU_GUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B90F0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?HandleSessionItemSimpleVolumeChanged@AppList@GamingAudio@@QEAAXH@Z @ 0x180358AA4 (-HandleSessionItemSimpleVolumeChanged@AppList@GamingAudio@@QEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingAudio::SessionInfoItem::RelaySimpleVolumeChanged(GamingAudio::SessionInfoItem *this)
{
  int v2; // eax
  GamingAudio::AppList *v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)this + 95, &v4);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBC,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\Audio.cpp",
      (const char *)(unsigned int)v2);
  if ( v4 )
  {
    v3 = (GamingAudio::AppList *)*((_QWORD *)this + 96);
    if ( v3 )
      GamingAudio::AppList::HandleSessionItemSimpleVolumeChanged(v3, *((_DWORD *)this + 12));
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v4);
}
