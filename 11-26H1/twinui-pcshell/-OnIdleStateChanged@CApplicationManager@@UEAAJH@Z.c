/*
 * XREFs of ?OnIdleStateChanged@CApplicationManager@@UEAAJH@Z @ 0x1801BBFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_411250802cdb3160aae0589ea22cc741___ @ 0x1801BC0B4 (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___--ForEach__lam.c)
 *     _lambda_f2aaff89423395ef869fab9f2a1bbdde_::_lambda_f2aaff89423395ef869fab9f2a1bbdde_ @ 0x1802DCF4C (_lambda_f2aaff89423395ef869fab9f2a1bbdde_--_lambda_f2aaff89423395ef869fab9f2a1bbdde_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::OnIdleStateChanged(CApplicationManager *this, unsigned int a2)
{
  unsigned int v4; // esi
  int v5; // ebx
  __int64 v6; // rax
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // rcx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 2 - (a2 != 0);
  v13 = v5;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 != *((_DWORD *)this + 172) )
  {
    v6 = lambda_f2aaff89423395ef869fab9f2a1bbdde_::_lambda_f2aaff89423395ef869fab9f2a1bbdde_(
           v11,
           &v13,
           (char *)this - 272);
    CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_411250802cdb3160aae0589ea22cc741___(
      (char *)this + 352,
      v6);
    *((_DWORD *)this + 172) = v5;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = 0LL;
  v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 59);
  if ( v7 )
  {
    v8 = **v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    if ( v8(v7, &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2, &v12) >= 0 )
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 24LL))(v12, a2);
  }
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v4;
}
