/*
 * XREFs of ?OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z @ 0x18030AC20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B90F0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIInspectable@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C3D6C (--$As@UIInspectable@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInsp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSplashScreen::OnActivationEnd(CSplashScreen *this)
{
  int v2; // ebx
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v4)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+10h] BYREF
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // [rsp+48h] [rbp+28h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( *((_DWORD *)this + 34) == 1 )
  {
    *((_DWORD *)this + 34) = 2;
    v7 = 0LL;
    v6 = 0LL;
    v2 = Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)this + 18, (__int64 *)&v6);
    if ( v2 >= 0 )
    {
      if ( v6 )
        v2 = Microsoft::WRL::ComPtr<IInspectable>::As<IInspectable>(&v6, (__int64 *)&v7);
      else
        v2 = -2147467259;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
    if ( v2 >= 0 )
    {
      v6 = 0LL;
      v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
      v4 = **v7;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
      v4(v3, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v6);
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[12])(v6);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
