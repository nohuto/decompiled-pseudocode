/*
 * XREFs of ?_EnsureImmersiveModeCheck@CLauncherTipContextMenu@@AEAAJXZ @ 0x180603B38
 * Callers:
 *     ?_IsInImmersiveAppOrLauncher@CLauncherTipContextMenu@@AEAA_NXZ @ 0x180604338 (-_IsInImmersiveAppOrLauncher@CLauncherTipContextMenu@@AEAA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

int __fastcall CLauncherTipContextMenu::_EnsureImmersiveModeCheck(CLauncherTipContextMenu *this)
{
  int result; // eax
  void **v2; // rdi

  result = 0;
  v2 = (void **)((char *)this + 152);
  if ( *((_QWORD *)this + 19)
    || (Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 19),
        result = IUnknown_QueryService(
                   *((IUnknown **)this + 2),
                   (const GUID *const)&SID_ImmersiveLauncher,
                   &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                   v2),
        result >= 0) )
  {
    if ( !*((_QWORD *)this + 20) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
      return IUnknown_QueryService(
               *((IUnknown **)this + 2),
               &IID_IImmersiveSystemMode,
               &GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2,
               (void **)this + 20);
    }
  }
  return result;
}
