/*
 * XREFs of ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x180112534
 * Callers:
 *     ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEBG11AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1801123C8 (--$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTI.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1804E8D04 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?IUnknown_GetParentWindow@@YAJPEAUIUnknown@@PEAPEAUHWND__@@@Z @ 0x18011279C (-IUnknown_GetParentWindow@@YAJPEAUIUnknown@@PEAPEAUHWND__@@@Z.c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18011285C (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 *     ?IUnknown_ServiceExists@@YAJPEAUIUnknown@@AEBU_GUID@@@Z @ 0x1802BE764 (-IUnknown_ServiceExists@@YAJPEAUIUnknown@@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDelayedTileActivation::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        IUnknown *punk,
        int a6)
{
  int ViewValueSetFromSite; // ebx
  __int64 v10; // rdx
  IUnknown *v12; // rsi
  struct Windows::Foundation::Collections::IPropertySet **v13; // r8
  const struct _GUID *v14; // rdx
  int v15; // eax
  int v16; // eax
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // [rsp+20h] [rbp-10h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HWND v22; // [rsp+50h] [rbp+20h] BYREF

  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           a1 + 56,
                           a2,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 207LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
      (const char *)(unsigned int)ViewValueSetFromSite);
    return (unsigned int)ViewValueSetFromSite;
  }
  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           a1 + 80,
                           a3,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 208LL;
    goto LABEL_3;
  }
  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           a1 + 104,
                           a4,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 209LL;
    goto LABEL_3;
  }
  v22 = 0LL;
  v12 = punk;
  IUnknown_GetParentWindow(punk, &v22);
  *(_QWORD *)(a1 + 136) = v22;
  *(_DWORD *)(a1 + 48) = a6;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 128));
  ViewValueSetFromSite = ViewSizePreferenceHelpers::GetViewValueSetFromSite(v12, (struct IUnknown *)(a1 + 128), v13);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 224LL;
    goto LABEL_3;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(v12, &IID_IAppActivationUIInfo, &GUID_abad189d_9fa3_4278_b3ca_8ca448a88dcb, &ppvOut) >= 0 )
  {
    LODWORD(v22) = 5;
    if ( (*(int (__fastcall **)(void *, HWND *))(*(_QWORD *)ppvOut + 40LL))(ppvOut, &v22) >= 0 )
    {
      BYTE4(v22) = 1;
      *(_QWORD *)(a1 + 152) = v22;
    }
  }
  v19 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  if ( IUnknown_QueryService(
         v12,
         &GUID_23710692_92e0_4a33_a781_a81596a4cd7d,
         &GUID_23710692_92e0_4a33_a781_a81596a4cd7d,
         &v19) >= 0 )
  {
    v15 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v19 + 24LL))(v19);
    if ( v15 >= 0 )
    {
      LOBYTE(v22) = v15 == 0;
      BYTE1(v22) = 1;
      *(_WORD *)(a1 + 148) = (_WORD)v22;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF6,
        (int)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)(unsigned int)v15);
    }
    v16 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v19 + 32LL))(v19, a1 + 144);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFC,
        (int)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)(unsigned int)v16);
  }
  *(_BYTE *)(a1 + 160) = (int)IUnknown_ServiceExists(v12, v14) >= 0;
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return 0LL;
}
