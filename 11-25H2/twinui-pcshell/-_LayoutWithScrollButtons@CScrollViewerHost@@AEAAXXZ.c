/*
 * XREFs of ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804B71C8
 * Callers:
 *     ?UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ @ 0x1804B70F0 (-UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ.c)
 *     ?v_LayoutChildren@CScrollViewerHost@@MEAAXXZ @ 0x1804B74B0 (-v_LayoutChildren@CScrollViewerHost@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A7230 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_GetIdealChildLocation@CScrollViewerHost@@AEAA?AUCRect@Geometry@@XZ @ 0x1804B714C (-_GetIdealChildLocation@CScrollViewerHost@@AEAA-AUCRect@Geometry@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScrollViewerHost::_LayoutWithScrollButtons(CScrollViewerHost *this)
{
  __int64 v2; // rcx
  LONG v3; // eax
  LONG v4; // r10d
  int v5; // r10d
  int v6; // edx
  int v7; // eax
  int v8; // r10d
  int v9; // eax
  int v10; // edx
  int left; // eax
  LONG v12; // edx
  LONG right; // eax
  int v14; // ecx
  LONG v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+28h] [rbp-38h] BYREF
  int v21; // [rsp+38h] [rbp-28h] BYREF
  int v22; // [rsp+40h] [rbp-20h]
  int v23; // [rsp+44h] [rbp-1Ch]
  _DWORD v24[3]; // [rsp+48h] [rbp-18h] BYREF
  int v25; // [rsp+54h] [rbp-Ch]

  v2 = *((_QWORD *)this + 57);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 136LL))(v2);
    if ( (*((_BYTE *)this + 392) & 2) != 0 )
    {
      v3 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
      v4 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
      *(_QWORD *)&rc.left = 0LL;
      rc.right = v4;
      rc.bottom = v3;
      CScrollViewerHost::_GetIdealChildLocation((__int64)this, &v21);
      v6 = *((_DWORD *)this + 66);
      v7 = v21;
      if ( v21 <= v6 + *((_DWORD *)this + 61) )
        v7 = v6 + *((_DWORD *)this + 61);
      v21 = v7;
      v8 = v5 - v6 - *((_DWORD *)this + 62);
      v9 = v22;
      if ( v22 >= v8 )
        v9 = v8;
      v22 = v9;
      v19 = 0LL;
      Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 56,
        &v19);
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 104LL))(v19, &v21);
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 56) + 88LL))(*((_QWORD *)this + 56), v24);
      v10 = *((_DWORD *)this + 66);
      left = rc.left;
      if ( rc.left <= v24[0] - v10 - *((_DWORD *)this + 61) )
        left = v24[0] - v10 - *((_DWORD *)this + 61);
      rc.left = left;
      v12 = *((_DWORD *)this + 62) + v24[2] + v10;
      right = rc.right;
      if ( rc.right >= v12 )
        right = v12;
      rc.right = right;
      (*(void (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 57) + 104LL))(*((_QWORD *)this + 57), &rc);
    }
    else
    {
      v14 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
      v15 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
      rc.left = 0;
      rc.right = v15;
      rc.bottom = v14 - *((_DWORD *)this + 64);
      rc.top = rc.bottom - *((_DWORD *)this + 67);
      InflateRect(&rc, (v15 - 2 * *((_DWORD *)this + 66) - *((_DWORD *)this + 65)) / -2, 0);
      CScrollViewerHost::_GetIdealChildLocation((__int64)this, &v21);
      v16 = v23;
      if ( v23 >= rc.top - *((_DWORD *)this + 63) )
        v16 = rc.top - *((_DWORD *)this + 63);
      v23 = v16;
      v19 = 0LL;
      Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 56,
        &v19);
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 104LL))(v19, &v21);
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 56) + 88LL))(*((_QWORD *)this + 56), v24);
      v17 = *((_DWORD *)this + 63);
      if ( rc.top - v25 > v17 )
      {
        v18 = v25 + v17 - rc.top;
        rc.bottom += v18;
        rc.top += v18;
      }
      (*(void (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 57) + 104LL))(*((_QWORD *)this + 57), &rc);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  }
}
