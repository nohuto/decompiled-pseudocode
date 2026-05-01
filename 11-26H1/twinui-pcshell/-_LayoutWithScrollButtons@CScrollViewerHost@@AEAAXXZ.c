/*
 * XREFs of ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804C8F88
 * Callers:
 *     ?UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ @ 0x1804C8EB0 (-UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ.c)
 *     ?v_LayoutChildren@CScrollViewerHost@@MEAAXXZ @ 0x1804C9270 (-v_LayoutChildren@CScrollViewerHost@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804B8C08 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_GetIdealChildLocation@CScrollViewerHost@@AEAA?AUCRect@Geometry@@XZ @ 0x1804C8F0C (-_GetIdealChildLocation@CScrollViewerHost@@AEAA-AUCRect@Geometry@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScrollViewerHost::_LayoutWithScrollButtons(CScrollViewerHost *this)
{
  __int64 v2; // rcx
  int v3; // eax
  LONG v4; // r11d
  int v5; // r11d
  int v6; // r10d
  int v7; // eax
  int v8; // r11d
  int v9; // eax
  int v10; // edx
  int left; // eax
  LONG v12; // edx
  LONG right; // eax
  LONG v14; // ecx
  int v15; // eax
  int v16; // edx
  __int64 v17; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+28h] [rbp-38h] BYREF
  int v19; // [rsp+38h] [rbp-28h] BYREF
  int v20; // [rsp+40h] [rbp-20h]
  int v21; // [rsp+44h] [rbp-1Ch]
  _DWORD v22[3]; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+54h] [rbp-Ch]

  v2 = *((_QWORD *)this + 57);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 136LL))(v2);
    v3 = *((_DWORD *)this + 17);
    if ( (*((_BYTE *)this + 392) & 2) != 0 )
    {
      v4 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
      *(_QWORD *)&rc.left = 0LL;
      rc.right = v4;
      rc.bottom = v3 - *((_DWORD *)this + 15);
      CScrollViewerHost::_GetIdealChildLocation((__int64)this, &v19);
      v6 = *((_DWORD *)this + 66);
      v7 = v19;
      if ( v19 <= v6 + *((_DWORD *)this + 61) )
        v7 = v6 + *((_DWORD *)this + 61);
      v19 = v7;
      v8 = v5 - v6 - *((_DWORD *)this + 62);
      v9 = v20;
      if ( v20 >= v8 )
        v9 = v8;
      v20 = v9;
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 56,
        &v17);
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 104LL))(v17, &v19);
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 56) + 88LL))(*((_QWORD *)this + 56), v22);
      v10 = *((_DWORD *)this + 66);
      left = rc.left;
      if ( rc.left <= v22[0] - v10 - *((_DWORD *)this + 61) )
        left = v22[0] - v10 - *((_DWORD *)this + 61);
      rc.left = left;
      v12 = v22[2] + *((_DWORD *)this + 62) + v10;
      right = rc.right;
      if ( rc.right >= v12 )
        right = v12;
      rc.right = right;
      (*(void (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 57) + 104LL))(*((_QWORD *)this + 57), &rc);
    }
    else
    {
      v14 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
      rc.left = 0;
      rc.right = v14;
      rc.bottom = v3 - *((_DWORD *)this + 64) - *((_DWORD *)this + 15);
      rc.top = rc.bottom - *((_DWORD *)this + 67);
      InflateRect(&rc, (v14 + -2 * *((_DWORD *)this + 66) - *((_DWORD *)this + 65)) / -2, 0);
      CScrollViewerHost::_GetIdealChildLocation((__int64)this, &v19);
      v15 = v21;
      if ( v21 >= rc.top - *((_DWORD *)this + 63) )
        v15 = rc.top - *((_DWORD *)this + 63);
      v21 = v15;
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 56,
        &v17);
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 104LL))(v17, &v19);
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 56) + 88LL))(*((_QWORD *)this + 56), v22);
      v16 = *((_DWORD *)this + 63);
      if ( rc.top - v23 > v16 )
      {
        rc.bottom += v16 - rc.top + v23;
        rc.top = v16 + v23;
      }
      (*(void (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 57) + 104LL))(*((_QWORD *)this + 57), &rc);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  }
}
