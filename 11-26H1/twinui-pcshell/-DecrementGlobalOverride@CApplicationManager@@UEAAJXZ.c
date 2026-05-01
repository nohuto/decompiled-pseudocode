/*
 * XREFs of ?DecrementGlobalOverride@CApplicationManager@@UEAAJXZ @ 0x18017F390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::DecrementGlobalOverride(CApplicationManager *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = -2147024891;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = *((_DWORD *)this + 156);
  if ( v3 )
  {
    v4 = v3 - 1;
    *((_DWORD *)this + 156) = v4;
    if ( !v4 )
    {
      HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 1;
      v7 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
      (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 49) + 32LL))(
        *((_QWORD *)this + 49),
        0LL,
        &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
        &v7);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, 2LL, *((unsigned int *)this + 194));
      v5 = v7;
      if ( v7 )
      {
        v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
    v2 = 0;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return v2;
}
