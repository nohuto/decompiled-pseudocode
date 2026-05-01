/*
 * XREFs of ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x18037CB14
 * Callers:
 *     ??_GCShoulderTapExperienceManager@@UEAAPEAXI@Z @ 0x18037CC80 (--_GCShoulderTapExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x18001D758 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

void __fastcall CShoulderTapExperienceManager::~CShoulderTapExperienceManager(CShoulderTapExperienceManager *this)
{
  WindowsDeleteString(*((HSTRING *)this + 41));
  *((_QWORD *)this + 41) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 40));
  *((_QWORD *)this + 40) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 39));
  *((_QWORD *)this + 39) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 36));
  *((_QWORD *)this + 36) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 35));
  *((_QWORD *)this + 35) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 34));
  *((_QWORD *)this + 34) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 33));
  *((_QWORD *)this + 33) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 31);
  CSingleViewShellExperience::~CSingleViewShellExperience((CShoulderTapExperienceManager *)((char *)this + 40));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>((__int64)this);
}
