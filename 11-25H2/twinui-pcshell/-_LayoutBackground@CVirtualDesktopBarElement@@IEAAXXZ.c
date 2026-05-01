/*
 * XREFs of ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1804BCA1C
 * Callers:
 *     ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___::Run @ 0x1804BC270 (ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___--Run.c)
 *     ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x1804BCBF0 (-v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804B7918 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVirtualDesktopBarElement::_LayoutBackground(CVirtualDesktopBarElement *this)
{
  int v2; // edx
  int v3; // eax
  _QWORD *v4; // rax
  bool v5; // di
  _BYTE *v6; // rax
  __int64 *v7; // rsi
  __int64 v8; // rdi
  float *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE v12[4]; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+34h] [rbp-3Ch]
  __int128 v14; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF

  v13 = 0;
  v2 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v3 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = __PAIR64__(v2, v3);
  v12[0] = 0;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(CVirtualDesktopBarElement *, __int128 *))(*(_QWORD *)this + 384LL))(
                   this,
                   &v14);
  v5 = 1;
  v13 = 1;
  if ( (*(int (__fastcall **)(_QWORD, __int64, CVirtualDesktopBarElement *, __int128 *, _BYTE *))(*(_QWORD *)*v4 + 56LL))(
         *v4,
         7LL,
         this,
         &v15,
         v12) >= 0 )
    v5 = v12[0] != 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**((_QWORD **)this + 96) + 24LL))(
      *((_QWORD *)this + 96),
      &v15,
      0LL,
      0LL);
  v6 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 92) + 40LL))(*((_QWORD *)this + 92));
  v7 = (__int64 *)*((_QWORD *)this + 96);
  v8 = *v7;
  v9 = (float *)((char *)this + 232);
  if ( !*v6 )
    v9 = (float *)((char *)this + 240);
  HighContrastAwareOpacity<float>::operator float(v9);
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v8 + 32))(v7, v10, 0LL, 0LL);
  v11 = *((_QWORD *)this + 97);
  if ( v11 )
  {
    v14 = v15;
    HIDWORD(v14) = DWORD1(v15);
    DWORD1(v14) = DWORD1(v15) - *((_DWORD *)this + 89);
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, &v14, 0LL, 0LL);
  }
}
