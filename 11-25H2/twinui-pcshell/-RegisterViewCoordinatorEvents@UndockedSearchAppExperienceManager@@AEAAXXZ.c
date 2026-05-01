/*
 * XREFs of ?RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18024ABF8
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800AD728 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x1800F54D4 (-HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ.c)
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x180188BF8 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4238dd26ae6c8ef7701c5b2afd60ce95___ @ 0x18039ED64 (Windows--Internal--ComTaskPool--QueueTask__lambda_4238dd26ae6c8ef7701c5b2afd60ce95___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UndockedSearchAppExperienceManager::RegisterViewCoordinatorEvents(RTL_SRWLOCK *this)
{
  __int64 *v2; // rax
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  __int128 v8; // [rsp+28h] [rbp-18h]
  __int64 *v9; // [rsp+58h] [rbp+18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  if ( !UndockedSearchAppExperienceManager::HasRegisterViewCoordinatorEvents(this) )
  {
    v10 = 0LL;
    LODWORD(v7) = 0;
    v8 = 0LL;
    v9 = &v10;
    v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v9);
    v3 = Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>((__int64)this, v2);
    winrt::check_hresult(&v9, v3, &v7);
    v5 = v10;
    v7 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    *(_QWORD *)&v8 = this;
    v6 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64 *))Windows::Internal::ComTaskPool::QueueTask__lambda_4238dd26ae6c8ef7701c5b2afd60ce95___)(
           v5,
           v4,
           LODWORD(this[20].Ptr),
           &v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
    LODWORD(v7) = 0;
    v8 = 0LL;
    winrt::check_hresult(&v9, v6, &v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  }
}
