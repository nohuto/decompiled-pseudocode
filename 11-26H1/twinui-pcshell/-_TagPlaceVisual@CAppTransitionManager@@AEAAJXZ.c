/*
 * XREFs of ?_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ @ 0x1804E3C28
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2060 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x1804E2840 (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionManager::_TagPlaceVisual(CAppTransitionManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int i; // esi
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v9; // edi
  int v10; // eax
  HWND v11; // rax
  HWND v12; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-21h] BYREF
  struct tagRECT Rect; // [rsp+50h] [rbp-19h] BYREF
  RECT rc2; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT rcDst; // [rsp+70h] [rbp+7h] BYREF
  RECT rc1; // [rsp+80h] [rbp+17h] BYREF
  RECT rcSrc; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = *((_QWORD *)this + 26);
  if ( !v2 )
    return 0LL;
  v19 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 24LL))(v2, &v19);
  v4 = v3;
  if ( v3 >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= v19 )
        return 0LL;
      v7 = *((_QWORD *)this + 26);
      v18 = 0LL;
      v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
      if ( v8(v7, i, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v18) >= 0 )
      {
        v9 = 218103808;
        if ( *((_DWORD *)this + 75) == 68 )
          v9 = 218365952;
        v10 = (*(__int64 (**)(void))(*(_QWORD *)v18 + 32LL))() - 7;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            v11 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 56LL))(v18);
            Rect = 0LL;
            v12 = v11;
            rc1 = 0LL;
            rc2 = 0LL;
            GetWindowRect(v11, &Rect);
            OffsetRect(&Rect, -Rect.left, -Rect.top);
            (*(void (__fastcall **)(__int64, __int64, RECT *))(*(_QWORD *)v18 + 24LL))(v18, 1LL, &rc1);
            (*(void (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v18 + 24LL))(v18, 0LL, &rc2);
            if ( !EqualRect(&rc1, &rc2) )
            {
              MatchRectAspectRatio(&Rect, &rc2);
              v13 = MulDiv(rc2.left - rc1.left, Rect.right - Rect.left, rc2.right - rc2.left);
              OffsetRect(&Rect, v13, 0);
            }
            v14 = DwmpTransitionWindowWithRects(v12, v9 | 1u, &Rect, &rc2, 0LL, 0LL, (char *)this + 264);
            v4 = v14;
            if ( v14 < 0 )
            {
              v15 = 538LL;
LABEL_19:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v15,
                (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                (const char *)(unsigned int)v14);
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
              return v4;
            }
          }
        }
        else
        {
          v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 64LL))(v18);
          rcDst = 0LL;
          v17 = v16;
          rcSrc = 0LL;
          (*(void (__fastcall **)(__int64, __int64, RECT *))(*(_QWORD *)v18 + 24LL))(v18, 1LL, &rcSrc);
          CopyRect(&rcDst, &rcSrc);
          OffsetRect(&rcDst, -rcDst.left, -rcDst.top);
          v14 = DwmpTransitionWindowWithRects(v17, v9 | 0x1Eu, &rcDst, &rcSrc, 0LL, 0LL, 0LL);
          v4 = v14;
          if ( v14 < 0 )
          {
            v15 = 557LL;
            goto LABEL_19;
          }
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EB,
    (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
