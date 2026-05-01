/*
 * XREFs of ?ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1803A2084
 * Callers:
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1803A1E34 (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x1803A150C (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaStoreAppExperienceManager::ReportActiveExperienceAboveLock(
        CortanaStoreAppExperienceManager *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  int LockAppHost; // eax
  unsigned int v5; // ebx
  struct ILockAppHost *v6; // rbx
  __int64 (__fastcall *v7)(struct ILockAppHost *, GUID *, CortanaStoreAppExperienceManager **); // rdi
  int v8; // eax
  CortanaStoreAppExperienceManager *v9; // rbx
  __int64 (__fastcall *v10)(CortanaStoreAppExperienceManager *, GUID *, GUID *, __int64 *); // rdi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CortanaStoreAppExperienceManager *v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  struct ILockAppHost *v16; // [rsp+68h] [rbp+38h] BYREF

  v14 = this;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  LockAppHost = GetLockAppHost(&v16, v1, v2, v3);
  v5 = LockAppHost;
  if ( LockAppHost >= 0 )
  {
    v14 = 0LL;
    v6 = v16;
    v7 = **(__int64 (__fastcall ***)(struct ILockAppHost *, GUID *, CortanaStoreAppExperienceManager **))v16;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    v8 = v7(v6, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v14);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v15 = 0LL;
      v9 = v14;
      v10 = *(__int64 (__fastcall **)(CortanaStoreAppExperienceManager *, GUID *, GUID *, __int64 *))(*(_QWORD *)v14 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      v11 = v10(v9, &IID_IAboveLockActivationManager, &GUID_f50a27f7_82b6_4711_be12_9becff694462, &v15);
      v5 = v11;
      if ( v11 >= 0 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 128LL))(v15, 16LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
        v5 = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19C,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x199,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x196,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)LockAppHost);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  return v5;
}
