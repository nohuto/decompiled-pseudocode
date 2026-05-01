/*
 * XREFs of ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1804CE8AC
 * Callers:
 *     ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___::Run @ 0x1804CE0F0 (ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___--Run.c)
 *     ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x1804CEA80 (-v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804C96D8 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVirtualDesktopBarElement::_LayoutBackground(CVirtualDesktopBarElement *this)
{
  _QWORD *v2; // rax
  bool v3; // di
  _BYTE *v4; // rax
  float *v5; // rcx
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, __int64, _QWORD, _QWORD); // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE v10[4]; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+34h] [rbp-3Ch]
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h] BYREF

  v11 = 0;
  *(_QWORD *)&v13 = 0LL;
  DWORD2(v13) = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  HIDWORD(v13) = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v10[0] = 0;
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(CVirtualDesktopBarElement *, __int128 *))(*(_QWORD *)this + 384LL))(
                   this,
                   &v12);
  v3 = 1;
  v11 = 1;
  if ( (*(int (__fastcall **)(_QWORD, __int64, CVirtualDesktopBarElement *, __int128 *, _BYTE *))(*(_QWORD *)*v2 + 56LL))(
         *v2,
         7LL,
         this,
         &v13,
         v10) >= 0 )
    v3 = v10[0] != 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**((_QWORD **)this + 96) + 24LL))(
      *((_QWORD *)this + 96),
      &v13,
      0LL,
      0LL);
  v4 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 92) + 40LL))(*((_QWORD *)this + 92));
  v5 = (float *)((char *)this + 232);
  v6 = *((_QWORD *)this + 96);
  v7 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 32LL);
  if ( !*v4 )
    v5 = (float *)((char *)this + 240);
  HighContrastAwareOpacity<float>::operator float(v5);
  v7(v6, v8, 0LL, 0LL);
  v9 = *((_QWORD *)this + 97);
  if ( v9 )
  {
    v12 = v13;
    HIDWORD(v12) = DWORD1(v13);
    DWORD1(v12) = DWORD1(v13) - *((_DWORD *)this + 89);
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, &v12, 0LL, 0LL);
  }
}
