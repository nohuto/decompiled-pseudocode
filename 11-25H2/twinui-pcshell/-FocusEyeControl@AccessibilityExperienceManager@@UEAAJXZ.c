/*
 * XREFs of ?FocusEyeControl@AccessibilityExperienceManager@@UEAAJXZ @ 0x18047BE20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityExperienceManager::FocusEyeControl(AccessibilityExperienceManager *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+38h] [rbp+10h] BYREF

  v2 = -2147467259;
  v7 = 0LL;
  v3 = *((_QWORD *)this + 9);
  if ( !v3 || (v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3), v2 >= 0) )
  {
    v4 = *((_QWORD *)this + 29);
    if ( v4 )
    {
      v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
      v2 = v5(v4, &v7);
      if ( v2 >= 0 )
      {
        hWnd = 0LL;
        v2 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v7 + 24LL))(v7, &hWnd);
        if ( v2 >= 0 )
          SetForegroundWindow(hWnd);
      }
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  return (unsigned int)v2;
}
