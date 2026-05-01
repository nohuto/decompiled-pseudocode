/*
 * XREFs of ?remove_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180353740
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017F43C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18018A2D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18021D864 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@In.c)
 *     ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x180244A14 (-GetSize@-$EventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@I.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?DeInit@AppList@GamingAudio@@QEAAXXZ @ 0x180357E38 (-DeInit@AppList@GamingAudio@@QEAAXXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::remove_AudioActiveSessionChanged(
        GamingOverlayExperienceManager *this,
        struct EventRegistrationToken a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  GamingAudio::AppList *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = 0LL;
  wil::EnterCriticalSection(&v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 1224));
  v4 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
         (RTL_SRWLOCK *)this + 158,
         (struct IUnknown *)a2.value);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( !Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize((RTL_SRWLOCK *)this + 158) )
    {
      v6 = (GamingAudio::AppList *)*((_QWORD *)this + 152);
      if ( v6 )
      {
        GamingAudio::AppList::DeInit(v6);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 152);
      }
    }
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7F,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v4);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  return v5;
}
