/*
 * XREFs of ?IncrementGlobalOverride@CApplicationManager@@UEAAJXZ @ 0x1801B5E30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::IncrementGlobalOverride(CApplicationManager *this)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( ++*((_DWORD *)this + 156) == 1 )
  {
    v4 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v4);
    (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 49) + 32LL))(
      *((_QWORD *)this + 49),
      0LL,
      &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
      &v4);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, 1LL, *((unsigned int *)this + 194));
    HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 2;
    v2 = v4;
    if ( v4 )
    {
      v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
