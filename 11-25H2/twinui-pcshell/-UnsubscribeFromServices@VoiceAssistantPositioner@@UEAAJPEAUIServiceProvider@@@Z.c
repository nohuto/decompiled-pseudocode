/*
 * XREFs of ?UnsubscribeFromServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180067480
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyTo@?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180067270 (-CopyTo@-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180067668 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::UnsubscribeFromServices(
        VoiceAssistantPositioner *this,
        struct IServiceProvider *a2)
{
  __int64 *v3; // rbp
  _DWORD *v4; // rdi
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  __int64 *v12; // rdi
  __int64 v13; // rcx
  _DWORD *v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 144);
  v4 = (_DWORD *)((char *)this + 152);
  if ( *((_QWORD *)this + 18) && *v4 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v5 = Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::CopyTo(v3);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE0,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v5);
      v7 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      return v6;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 32LL))(v16, (unsigned int)*v4);
    v9 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3);
  *v4 = 0;
  v10 = *((_QWORD *)this + 20);
  v11 = (_DWORD *)((char *)this + 168);
  if ( v10 && *v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  *v11 = 0;
  SmartCookie::Unregister((VoiceAssistantPositioner *)((char *)this + 200));
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((char *)this + 192);
  v12 = (__int64 *)((char *)this + 176);
  v13 = *((_QWORD *)this + 22);
  v14 = (_DWORD *)((char *)this + 184);
  if ( v13 && *v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 104LL))(v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12);
  *v14 = 0;
  return 0LL;
}
