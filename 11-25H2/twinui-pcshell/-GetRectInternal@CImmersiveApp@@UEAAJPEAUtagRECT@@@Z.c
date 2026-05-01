/*
 * XREFs of ?GetRectInternal@CImmersiveApp@@UEAAJPEAUtagRECT@@@Z @ 0x180302160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetRectInternal(const RECT *this, struct tagRECT *a2)
{
  signed int Error; // esi
  __int64 (__fastcall *v5)(const RECT *, __int64 *); // rbx
  int v6; // edi
  LONG top; // ebx
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-20h] BYREF

  SetRectEmpty(a2);
  rcDst = 0LL;
  if ( LOBYTE(this[38].left) )
  {
    Error = -2147019873;
  }
  else
  {
    Error = 0;
    CopyRect(&rcDst, this + 12);
  }
  Rect = 0LL;
  if ( Error >= 0 )
  {
    v9 = 0LL;
    v5 = *(__int64 (__fastcall **)(const RECT *, __int64 *))(*(_QWORD *)&this->left + 496LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    Error = v5(this, &v9);
    if ( Error >= 0 )
    {
      hWnd = 0LL;
      Error = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v9 + 24LL))(v9, &hWnd);
      if ( Error >= 0 )
      {
        if ( GetWindowRect(hWnd, &Rect) )
          Error = 0;
        else
          Error = ResultFromKnownLastError();
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    if ( Error >= 0 )
    {
      v6 = Rect.left + (Rect.right + rcDst.left - rcDst.right - Rect.left) / 2;
      top = Rect.top;
      CopyRect(a2, &rcDst);
      OffsetRect(a2, v6, top);
    }
  }
  return (unsigned int)Error;
}
