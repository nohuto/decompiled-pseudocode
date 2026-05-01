/*
 * XREFs of ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1801AE0F8
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180040EF0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z @ 0x1802FFB30 (-SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __m128i v6; // xmm1
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 120LL))(*((_QWORD *)this + 18));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C02,
      (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    v6 = *(__m128i *)((char *)this + 88);
    v7 = *((_QWORD *)this + 13);
    *((_DWORD *)a2 + 6) = _mm_cvtsi128_si32(_mm_loadl_epi64((const __m128i *)this + 6));
    *((_DWORD *)a2 + 8) = v7;
    *((_DWORD *)a2 + 4) = _mm_cvtsi128_si32(v6);
    if ( *((_DWORD *)this + 8) != -1 && *((_DWORD *)this + 18) != -1 )
      *((_DWORD *)a2 + 7) = HIDWORD(*((_QWORD *)this + 7));
    return 0LL;
  }
}
