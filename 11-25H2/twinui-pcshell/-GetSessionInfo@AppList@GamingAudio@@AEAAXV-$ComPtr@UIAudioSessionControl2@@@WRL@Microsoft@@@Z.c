/*
 * XREFs of ?GetSessionInfo@AppList@GamingAudio@@AEAAXV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x1803587E8
 * Callers:
 *     ?GetEndpointSessions@AppList@GamingAudio@@AEAAXV?$ComPtr@UIMMDevice@@@WRL@Microsoft@@@Z @ 0x180358180 (-GetEndpointSessions@AppList@GamingAudio@@AEAAXV-$ComPtr@UIMMDevice@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180341388 (--1-$unique_storage@U-$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1-SessionI.c)
 *     ??$Make@VSessionInfoItem@GamingAudio@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSessionInfoItem@GamingAudio@@@12@XZ @ 0x180357518 (--$Make@VSessionInfoItem@GamingAudio@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VSessionInfoItem@.c)
 *     ?AddItemToTempSessionMap@AppList@GamingAudio@@AEAAJK$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180357D18 (-AddItemToTempSessionMap@AppList@GamingAudio@@AEAAJK$$QEAV-$unique_any_t@V-$unique_storage@U-$re.c)
 *     ?Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x180358BE4 (-Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV-$ComPtr@UIAudioSessionControl2@@@WRL@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GamingAudio::AppList::GetSessionInfo(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rsi
  __int64 *v4; // rax
  const char *v5; // r9
  unsigned int *v6; // rbx
  GamingAudio *v7; // rcx
  int v8; // eax
  struct GamingAudio::SessionInfoItem *v9; // rdx
  int v10; // eax
  unsigned int *v12; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-30h]
  GamingAudio *v16; // [rsp+40h] [rbp-28h] BYREF
  unsigned int *v17; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = a2;
  v3 = a1;
  v15 = a2;
  v4 = Microsoft::WRL::Details::Make<GamingAudio::SessionInfoItem,>((__int64 *)&v16);
  v6 = 0LL;
  if ( &v14 != (char *)v4 )
  {
    v6 = (unsigned int *)*v4;
    *v4 = 0LL;
  }
  try
  {
    v12 = v6;
    v17 = v6;
    v7 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(GamingAudio *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2CC,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\Audio.cpp",
      v5);
    v6 = v12;
    v3 = a1;
    v2 = v15;
  }
  if ( v6 )
  {
    v8 = GamingAudio::SessionInfoItem::Init(v6, v3, v2);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D4,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\Audio.cpp",
        (const char *)(unsigned int)v8);
    v17 = 0LL;
    v16 = (GamingAudio *)v6;
    if ( v6[20] )
    {
      v10 = GamingAudio::AppList::AddItemToTempSessionMap(v3, v6[12], &v16);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2DD,
          (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\Audio.cpp",
          (const char *)(unsigned int)v10);
    }
    wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>(
      &v16,
      v9);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D0,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\Audio.cpp",
      (const char *)0x80004003LL);
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
}
