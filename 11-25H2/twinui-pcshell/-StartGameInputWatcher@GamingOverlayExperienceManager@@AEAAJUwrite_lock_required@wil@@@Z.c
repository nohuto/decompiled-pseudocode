/*
 * XREFs of ?StartGameInputWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x18034FA8C
 * Callers:
 *     ?HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180347F08 (-HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z.c)
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18034F714 (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x1800C0454 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 *     ?InternalRelease@?$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ @ 0x18029E6C0 (-InternalRelease@-$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x180352AF8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@detai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::StartGameInputWatcher(__int64 *a1)
{
  __int64 *v1; // rbp
  HMODULE *v3; // rdi
  HMODULE v4; // rcx
  HMODULE Library; // rax
  signed int LastError; // eax
  signed int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v10; // rdi
  FARPROC ProcAddress; // rsi
  int v12; // eax
  unsigned int v13; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = a1 + 32;
  if ( !a1[32] )
  {
    v3 = (HMODULE *)(a1 + 33);
    v4 = (HMODULE)a1[33];
    if ( !v4 )
    {
      Library = LoadLibraryExW(L"GameInput.dll", 0LL, 0x800u);
      wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
        v3,
        Library);
      v4 = *v3;
      if ( !*v3 )
      {
        LastError = GetLastError();
        v7 = LastError;
        if ( LastError > 0 )
          v7 = (unsigned __int16)LastError | 0x80070000;
        if ( v7 >= 0 )
          return (unsigned int)v7;
        v8 = 4936LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v7);
        return (unsigned int)v7;
      }
    }
    v10 = a1 + 31;
    if ( !a1[31] )
    {
      ProcAddress = (FARPROC)a1[34];
      if ( !ProcAddress )
      {
        ProcAddress = GetProcAddress(v4, "GameInputCreate");
        a1[34] = (__int64)ProcAddress;
      }
      Microsoft::WRL::ComPtr<IGameInput>::InternalRelease(a1 + 31);
      v12 = ((__int64 (__fastcall *)(__int64 *))ProcAddress)(a1 + 31);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1351,
          (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v12);
        return v13;
      }
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v10 + 168LL))(*v10, 0LL);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, void (__fastcall *)(__int64, __int64, __int64, unsigned __int64, char), __int64 *))(*(_QWORD *)*v10 + 80LL))(
           *v10,
           0LL,
           3LL,
           a1,
           GamingOverlayExperienceManager::OnGameInputSystemButtonCallbackStatic,
           v1);
    if ( v7 < 0 )
    {
      v8 = 4958LL;
      goto LABEL_8;
    }
  }
  return 0LL;
}
