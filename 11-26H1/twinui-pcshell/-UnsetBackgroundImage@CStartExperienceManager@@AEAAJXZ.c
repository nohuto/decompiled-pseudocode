/*
 * XREFs of ?UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ @ 0x18038B27C
 * Callers:
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003B600 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x18038ACD0 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall CStartExperienceManager::UnsetBackgroundImage(CStartExperienceManager *this)
{
  HWND v2; // rcx

  v2 = (HWND)*((_QWORD *)this + 91);
  if ( v2 )
    DestroyWindow(v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 90);
  return 0LL;
}
