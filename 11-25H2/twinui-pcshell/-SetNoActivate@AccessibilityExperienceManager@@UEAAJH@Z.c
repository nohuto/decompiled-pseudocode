/*
 * XREFs of ?SetNoActivate@AccessibilityExperienceManager@@UEAAJH@Z @ 0x18047CDD0
 * Callers:
 *     ?OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1801E9EE0 (-OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18047C7F0 (-OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18047D0FC (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityExperienceManager::SetNoActivate(AccessibilityExperienceManager *this, int a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // ebx
  LONG WindowLongW; // r8d
  unsigned int v8; // eax
  LONG v9; // r8d
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = *((_QWORD *)this + 29);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    v6 = v5(v4, &v11);
    if ( v6 >= 0 )
    {
      hWnd = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 24LL))(v11, &hWnd);
      if ( v6 >= 0 )
      {
        WindowLongW = GetWindowLongW(hWnd, -20);
        *((_DWORD *)this + 81) = a2 != 0 ? 0x8000000 : 0;
        v8 = WindowLongW & 0xF7FFFFFF;
        v9 = WindowLongW | 0x8000000;
        if ( !a2 )
          v9 = v8;
        SetWindowLongW(hWnd, -20, v9);
      }
    }
  }
  else
  {
    v6 = -2147467259;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return (unsigned int)v6;
}
