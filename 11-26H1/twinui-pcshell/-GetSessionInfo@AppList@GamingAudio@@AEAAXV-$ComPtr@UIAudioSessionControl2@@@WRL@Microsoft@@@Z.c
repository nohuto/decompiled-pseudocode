/*
 * XREFs of ?GetSessionInfo@AppList@GamingAudio@@AEAAXV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18035F0E0
 * Callers:
 *     ?GetEndpointSessions@AppList@GamingAudio@@AEAAXV?$ComPtr@UIMMDevice@@@WRL@Microsoft@@@Z @ 0x18035EA9C (-GetEndpointSessions@AppList@GamingAudio@@AEAAXV-$ComPtr@UIMMDevice@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18021EC08 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180342398 (--1-$unique_storage@U-$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1-SessionI.c)
 *     ??0SessionInfoItem@GamingAudio@@QEAA@XZ @ 0x18035E250 (--0SessionInfoItem@GamingAudio@@QEAA@XZ.c)
 *     ?AddItemToTempSessionMap@AppList@GamingAudio@@AEAAJK$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18035E628 (-AddItemToTempSessionMap@AppList@GamingAudio@@AEAAJK$$QEAV-$unique_any_t@V-$unique_storage@U-$re.c)
 *     ?Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18035F4C8 (-Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV-$ComPtr@UIAudioSessionControl2@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GamingAudio::AppList::GetSessionInfo(__int64 a1, __int64 *a2)
{
  int *v4; // rbx
  GamingAudio::SessionInfoItem *v5; // rax
  int v6; // eax
  struct GamingAudio::SessionInfoItem *v7; // rdx
  int v8; // eax
  int v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 *v12; // [rsp+30h] [rbp-28h]
  GamingAudio *v13; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = a1;
  v12 = a2;
  v4 = 0LL;
  v13 = 0LL;
  v5 = (GamingAudio::SessionInfoItem *)operator new(0x308uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v10 = v5;
  if ( v5 )
  {
    v4 = (int *)GamingAudio::SessionInfoItem::SessionInfoItem(v5);
    v13 = (GamingAudio *)v4;
    *(_QWORD *)v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>((void **)v10);
  *(_QWORD *)v10 = v4;
  if ( v4 )
  {
    v6 = GamingAudio::SessionInfoItem::Init(v4, a1, a2);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D4,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
        (const char *)(unsigned int)v6);
    *(_QWORD *)v10 = 0LL;
    v13 = (GamingAudio *)v4;
    if ( v4[20] )
    {
      v8 = GamingAudio::AppList::AddItemToTempSessionMap(a1, v4[12], &v13);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2DD,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
          (const char *)(unsigned int)v8);
    }
    wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>(
      &v13,
      v7);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D0,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
      (const char *)0x80004003LL);
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
}
