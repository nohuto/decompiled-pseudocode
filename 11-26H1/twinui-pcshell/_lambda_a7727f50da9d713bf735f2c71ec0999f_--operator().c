/*
 * XREFs of _lambda_a7727f50da9d713bf735f2c71ec0999f_::operator() @ 0x1803448E0
 * Callers:
 *     _lambda_be6b1a914f7b12eba76d69f77a72b4a6_::operator() @ 0x1803449E8 (_lambda_be6b1a914f7b12eba76d69f77a72b4a6_--operator().c)
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800B3780 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180340BD8 (--0-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgRefl_ea_180340BD8.c)
 *     ??1HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ @ 0x180342BA0 (--1HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ.c)
 *     ?EnteredUsingHotkey@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAXXZ @ 0x180346614 (-EnteredUsingHotkey@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAXXZ.c)
 *     ?ExitedUsingHotkey@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAXXZ @ 0x18034674C (-ExitedUsingHotkey@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180354F58 (-Stop@-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_P.c)
 */

__int64 __fastcall lambda_a7727f50da9d713bf735f2c71ec0999f_::operator()(__int64 a1, unsigned int a2)
{
  _BYTE v5[32]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v6[48]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v7[34]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v8; // [rsp+180h] [rbp+80h]

  memset_0(v7, 0, 0x148uLL);
  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    a1);
  v7[0] = &GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::`vftable';
  memset_0(v5, 0, 0x48uLL);
  if ( *v8 == 1 )
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v5,
      (struct wil::details::IFailureCallback *)v7,
      (const struct wil::details::StoredCallContextInfo *)(v8 + 10));
  else
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v6,
      0LL,
      0LL,
      0);
  if ( *(_BYTE *)(a1 + 328) )
    GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::EnteredUsingHotkey((GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *)v7);
  else
    GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::ExitedUsingHotkey((GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *)v7);
  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v7, a2);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v5);
  GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::~HotkeyEntryPointActivity((GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *)v7);
  return 0LL;
}
