/*
 * XREFs of ?_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804D1634
 * Callers:
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804D150C (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x180018764 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_EnsureWindowForBufferTag@CAppTransitionManager@@AEAAJXZ @ 0x1804D0CA8 (-_EnsureWindowForBufferTag@CAppTransitionManager@@AEAAJXZ.c)
 *     ?s_GetLayoutBufferRect@CAppTransitionManager@@CA?AUCRect@Geometry@@PEAUIAppLayout@@@Z @ 0x1804D1B90 (-s_GetLayoutBufferRect@CAppTransitionManager@@CA-AUCRect@Geometry@@PEAUIAppLayout@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionManager::_TagBuffer(CAppTransitionManager *this, struct IAppLayoutOperation *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v5)(struct IAppLayoutOperation *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(struct IAppLayoutOperation *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rcx
  bool IsEmpty; // si
  int v13; // eax
  __int64 v14; // rdx
  HWND v15; // rcx
  int v16; // ecx
  __int128 *v17; // r8
  HWND v18; // rcx
  __int64 v20; // [rsp+40h] [rbp-9h] BYREF
  int v21; // [rsp+48h] [rbp-1h] BYREF
  __int64 v22[2]; // [rsp+50h] [rbp+7h] BYREF
  __int128 v23; // [rsp+60h] [rbp+17h] BYREF
  __int128 v24; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v2 = *(_QWORD *)a2;
  v22[0] = 0LL;
  v5 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(v2 + 40);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v22);
  v6 = v5(a2, v22);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = *(_QWORD *)a2;
    v20 = 0LL;
    v9 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(v8 + 48);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    v10 = v9(a2, &v20);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x260,
        (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_5:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      goto LABEL_23;
    }
    CAppTransitionManager::s_GetLayoutBufferRect(&v24, v22[0]);
    CAppTransitionManager::s_GetLayoutBufferRect(&v23, v20);
    v11 = *((_QWORD *)this + 26);
    v21 = 0;
    if ( v11 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 24LL))(v11, &v21) >= 0 && v21 )
      v24 = v23;
    if ( Geometry::CRect::IsEmpty((Geometry::CRect *)&v24) )
    {
      v18 = (HWND)*((_QWORD *)this + 24);
      if ( v18 )
      {
        DestroyWindow(v18);
        *((_QWORD *)this + 24) = 0LL;
      }
    }
    else
    {
      IsEmpty = Geometry::CRect::IsEmpty((Geometry::CRect *)&v23);
      v13 = CAppTransitionManager::_EnsureWindowForBufferTag(this);
      v7 = v13;
      if ( v13 < 0 )
      {
        v14 = 650LL;
        goto LABEL_13;
      }
      v16 = 1;
      if ( !IsEmpty )
      {
        v17 = &v23;
      }
      else
      {
        v17 = 0LL;
        v16 = 0;
      }
      v13 = DwmpTransitionWindowWithRects(
              *((_QWORD *)this + 24),
              IsEmpty ? 16777284 : 25264196,
              &v24,
              &v24,
              (unsigned __int64)&v23 & -(__int64)(v16 != 0),
              v17,
              0LL);
      v7 = v13;
      if ( v13 < 0 )
      {
        v14 = 659LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
          (const char *)(unsigned int)v13);
        v15 = (HWND)*((_QWORD *)this + 24);
        if ( v15 )
        {
          DestroyWindow(v15);
          *((_QWORD *)this + 24) = 0LL;
        }
        goto LABEL_5;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    v7 = 0;
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25D,
    (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_23:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v22);
  return v7;
}
