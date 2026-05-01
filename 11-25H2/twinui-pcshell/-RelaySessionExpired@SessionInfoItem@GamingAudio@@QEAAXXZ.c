/*
 * XREFs of ?RelaySessionExpired@SessionInfoItem@GamingAudio@@QEAAXXZ @ 0x180359514
 * Callers:
 *     ?OnStateChanged@SessionInfoItem@GamingAudio@@UEAAJW4_AudioSessionState@@@Z @ 0x180359380 (-OnStateChanged@SessionInfoItem@GamingAudio@@UEAAJW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B90F0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?RebuildList@AppList@GamingAudio@@QEAAX_N@Z @ 0x180359430 (-RebuildList@AppList@GamingAudio@@QEAAX_N@Z.c)
 */

void __fastcall GamingAudio::SessionInfoItem::RelaySessionExpired(GamingAudio::SessionInfoItem *this)
{
  int v2; // eax
  GamingAudio::AppList *v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_DWORD *)this + 20) = 0;
  v4 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)this + 95, &v4);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCF,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\Audio.cpp",
      (const char *)(unsigned int)v2);
  if ( v4 )
  {
    v3 = (GamingAudio::AppList *)*((_QWORD *)this + 96);
    if ( v3 )
      GamingAudio::AppList::RebuildList(v3, 1);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v4);
}
