/*
 * XREFs of ?EnsureImmersiveLauncher@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800AD6C8
 * Callers:
 *     ?ShowWithStartWithFocusOption@UndockedSearchAppExperienceManager@@UEAAJW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800ABB80 (-ShowWithStartWithFocusOption@UndockedSearchAppExperienceManager@@UEAAJW4ShellExperienceViewFocu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::EnsureImmersiveLauncher(
        UndockedSearchAppExperienceManager *this)
{
  __int64 result; // rax
  char *v2; // rsi
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, SID *, GUID *, char *); // rbx

  result = 0LL;
  v2 = (char *)this + 80;
  if ( !*((_QWORD *)this + 10) )
  {
    v3 = *((_QWORD *)this + 6);
    v4 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v3 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
    return v4(v3, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, v2);
  }
  return result;
}
