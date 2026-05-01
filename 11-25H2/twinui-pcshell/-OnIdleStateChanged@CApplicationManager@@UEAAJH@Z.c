/*
 * XREFs of ?OnIdleStateChanged@CApplicationManager@@UEAAJH@Z @ 0x1801C4E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_411250802cdb3160aae0589ea22cc741___ @ 0x1801C4F98 (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___--ForEach__lam.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::OnIdleStateChanged(CApplicationManager *this, unsigned int a2)
{
  unsigned int v4; // esi
  int v5; // edi
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v8; // rcx
  int v10; // [rsp+20h] [rbp-18h] BYREF
  char *v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 2 - (a2 != 0);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 != *((_DWORD *)this + 172) )
  {
    v10 = v5;
    v11 = (char *)this - 272;
    CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_411250802cdb3160aae0589ea22cc741___(
      (char *)this + 352,
      &v10);
    *((_DWORD *)this + 172) = v5;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = 0LL;
  v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 59);
  if ( v6 )
  {
    v7 = **v6;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    if ( v7(v6, &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2, &v12) >= 0 )
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 24LL))(v12, a2);
  }
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v4;
}
